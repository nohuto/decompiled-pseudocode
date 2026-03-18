/*
 * XREFs of ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C012A310
 * Callers:
 *     InputExtensibilityCalloutGuard @ 0x1C012A500 (InputExtensibilityCalloutGuard.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     EtwTraceReleaseUserCrit @ 0x1C002ECD4 (EtwTraceReleaseUserCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

void __fastcall InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete(InputExtensibilityCallout *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  LARGE_INTEGER v14; // rcx
  LARGE_INTEGER v15; // rdi
  LARGE_INTEGER v16; // r8
  __int64 v17; // [rsp+20h] [rbp-18h]

  for ( ; *((_BYTE *)this + 8); gbValidateHandleForIL = 1 )
  {
    ++*((_DWORD *)this + 3);
    if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && !gbRITBlockedOnDIT )
    {
      v4 = (unsigned int)gcRITBlockedOnDITWaiters;
      if ( gcRITBlockedOnDITWaiters )
      {
        KeReleaseSemaphore(gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
        gcRITBlockedOnDITWaiters = 0;
      }
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    EtwTraceReleaseUserCrit(v3, v2, v4);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(*((PVOID *)this + 2), UserRequest, 0, 0, 0LL);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, v5, v7);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v13 = PsGetCurrentThreadWin32Thread(v11, v10, v12);
    if ( v13 )
    {
      v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LODWORD(v17) = 0;
        LOBYTE(v14.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(
          v14.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v16.QuadPart,
          v15.QuadPart,
          v17,
          gullUserCritAcquireToken);
      }
      if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        LODWORD(v17) = 1000 * v15.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          (__int64)gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritTelemetryEvent,
          v16.QuadPart,
          0LL,
          v17,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v9;
  }
}
