/*
 * XREFs of UserThreadCallout @ 0x1C004ACF0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     GreCleanDC @ 0x1C0042380 (GreCleanDC.c)
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 *     RtlGetExpWinVer @ 0x1C004BE90 (RtlGetExpWinVer.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, __int64 a2, __int64 a3)
{
  unsigned int ThreadInfo; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v10; // rdi
  __int64 ProcessSectionBaseAddress; // rax
  LARGE_INTEGER *v12; // rbx
  struct tagTHREADINFO *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbp
  int v18; // ecx
  LARGE_INTEGER v19; // rdi
  int v20; // r8d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r14
  int v28; // ecx
  LARGE_INTEGER v29; // rdi
  int v30; // r8d
  __int64 ThreadWin32Thread; // rdi

  ThreadInfo = 0;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return ThreadInfo;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Thread, a2, a3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v23 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v27 = PsGetCurrentThreadWin32Thread(v25, v24, v26);
    if ( v27 )
    {
      v29 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v27 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        Template_xqx(
          v28,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v30,
          v29.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v29.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          1000 * v29.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v30,
          0,
          1000 * v29.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v27 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v23;
    gbValidateHandleForIL = 1;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    *(_DWORD *)(ThreadWin32Thread + 440) |= 1u;
    if ( (int)IsxxxFullScreenCleanupSupported() >= 0 )
      xxxFullScreenCleanup();
    if ( gbVideoInitialized || !gbRemoteSession )
      GreCleanDC(*((HDC *)gpDispInfo + 6));
    if ( (*(_DWORD *)(ThreadWin32Thread + 1096) & 2) != 0 )
      *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0;
    if ( (*(_DWORD *)(ThreadWin32Thread + 1096) & 1) == 0 )
    {
      if ( (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 )
        GetAppCompatFlags2QuadWord(gptiCurrent);
      xxxDestroyThreadInfo();
    }
LABEL_17:
    UserSessionSwitchLeaveCrit();
    return ThreadInfo;
  }
  if ( !gbNoMorePowerCallouts )
  {
    if ( !gbUserInitialized )
    {
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread((__int64)Thread) + 1096), 0);
      return ThreadInfo;
    }
    v7 = W32GetThreadWin32Thread((__int64)Thread);
    if ( v7 )
    {
      ThreadProcess = PsGetThreadProcess(Thread);
      v10 = ThreadProcess;
      if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v10);
        *(_DWORD *)(v7 + 552) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(v7 + 552) = 0;
      }
    }
    v12 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, v5, v8);
    if ( v12 )
      v12[1] = KeQueryPerformanceCounter(0LL);
    v13 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v17 = PsGetCurrentThreadWin32Thread(v15, v14, v16);
    if ( v17 )
    {
      v19 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v17 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        Template_xqx(
          v18,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v20,
          v19.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v19.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          1000 * v19.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v20,
          0,
          1000 * v19.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v17 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v13;
    gbValidateHandleForIL = 1;
    ThreadInfo = xxxCreateThreadInfo(Thread);
    if ( (ThreadInfo & 0x80000000) == 0 && (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 )
      GetAppCompatFlags2QuadWord(gptiCurrent);
    goto LABEL_17;
  }
  return 3221225473LL;
}
