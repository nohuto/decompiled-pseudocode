/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C007E4D0
 * Callers:
 *     NtUserQueryDisplayConfig @ 0x1C000CCB0 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C000D080 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserEnumDisplayDevices @ 0x1C0043630 (NtUserEnumDisplayDevices.c)
 *     NtUserEnumDisplaySettings @ 0x1C0061A90 (NtUserEnumDisplaySettings.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00E0EC0 (NtUserFunctionalizeDisplayConfig.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00E8930 (AcquireCriticalSectionAndCheckState.c)
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C00EE100 (NtGdiDestroyOPMProtectedOutput.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     EtwTraceReleaseUserCrit @ 0x1C002ECD4 (EtwTraceReleaseUserCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall UserSessionSwitchEnterCrit(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  LARGE_INTEGER v14; // rbx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  LARGE_INTEGER *v23; // rbx

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  while ( 1 )
  {
    v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v8 = PsGetCurrentThreadWin32Thread(v6, v5, v7);
    v13 = v8;
    if ( v8 )
    {
      v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
      {
        LOBYTE(v10) = byte_1C0186D98 - 1;
        if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
          && (qword_1C0186D80 & 0x200000010000000LL) != 0
          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          Template_xqx(
            v10,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v11,
            v14.LowPart,
            0,
            (char)gullUserCritAcquireToken);
        }
      }
      if ( v14.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v11,
          0,
          1000 * v14.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gbValidateHandleForIL = 1;
    gptiCurrent = v4;
    if ( !*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
      break;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9, v11, v12);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    ++gcSwitchInProgressWaiters;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && !gbRITBlockedOnDIT )
    {
      v19 = (unsigned int)gcRITBlockedOnDITWaiters;
      if ( gcRITBlockedOnDITWaiters )
      {
        KeReleaseSemaphore(gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
        gcRITBlockedOnDITWaiters = 0;
      }
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    EtwTraceReleaseUserCrit(v18, v17, v19);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    v23 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v21, v20, v22);
    if ( v23 )
      v23[1] = KeQueryPerformanceCounter(0LL);
  }
  return 0LL;
}
