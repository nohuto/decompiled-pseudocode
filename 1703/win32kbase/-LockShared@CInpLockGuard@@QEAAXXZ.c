/*
 * XREFs of ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C012A880
 * Callers:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C011A5C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C0125780 (-PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     EtwTraceReleaseUserCrit @ 0x1C002ECD4 (EtwTraceReleaseUserCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C006F824 (-isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C012ACC0 (-WaitForGuard@CInpLockGuard@@QEAAJXZ.c)
 */

void __fastcall CInpLockGuard::LockShared(CInpLockGuard *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int IsResourceAcquiredExclusiveLite; // r15d
  _BOOL8 v7; // rbp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  LARGE_INTEGER v14; // rcx
  LARGE_INTEGER v15; // rbx
  LARGE_INTEGER v16; // r8
  struct tagTHREADINFO *v17; // rbx
  struct tagTHREADINFO **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  PVOID CurrentProcess; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  PRKSEMAPHORE v28; // rcx
  __int64 v29; // rdi
  LARGE_INTEGER v30; // rcx
  LARGE_INTEGER v31; // rbx
  LARGE_INTEGER v32; // r8
  CInpLockGuard *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // [rsp+20h] [rbp-28h]

  v2 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v7 = qword_1C018E820 == (_QWORD)KeGetCurrentThread();
  while ( 1 )
  {
    if ( v2 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4, v3, v5);
      if ( IsResourceAcquiredExclusiveLite )
      {
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
            LODWORD(v37) = 0;
            LOBYTE(v14.LowPart) = byte_1C0186D98 - 1;
            Template_xqx(
              v14.QuadPart,
              &AcquiredExclusiveUserCritEvent,
              v16.QuadPart,
              v15.QuadPart,
              v37,
              gullUserCritAcquireToken);
          }
          if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
            && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
          {
            LODWORD(v37) = 1000 * v15.QuadPart / gliQpcFreq.QuadPart;
            Template_xqx(
              (__int64)gullUserCritAcquireToken,
              &AcquiredExclusiveUserCritTelemetryEvent,
              v16.QuadPart,
              0LL,
              v37,
              gullUserCritAcquireToken);
          }
          *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
        }
        gptiCurrent = v9;
        gbValidateHandleForIL = 1;
      }
      else
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v17 = 0LL;
        while ( 1 )
        {
          v18 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
          if ( v18 )
            v17 = *v18;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v20, v19, v21, v22);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v25, v24, v26, v27) == gpepCSRSS
            && v17 != (struct tagTHREADINFO *)gptiTSRequest )
          {
            break;
          }
          if ( gbRITBlockedOnDIT )
          {
            if ( v17 == gptiRit )
              break;
            _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            v28 = gpsemRITBlockedOnDITWaiters;
          }
          else
          {
            if ( gbDITInHitTest != 1 || v17 == gptiRit )
              break;
            _InterlockedAdd(&gcDITHitTestWaiters, 1u);
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            v28 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
          }
          KeWaitForSingleObject(v28, UserRequest, 0, 0, 0LL);
        }
        v29 = PsGetCurrentThreadWin32Thread(v25, v24, v26);
        if ( v29 )
        {
          v31 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v29 + 8));
          if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
            && (qword_1C0186D80 & 0x200000010000000LL) != 0
            && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            LODWORD(v37) = 0;
            LOBYTE(v30.LowPart) = byte_1C0186D98 - 1;
            Template_xqx(
              v30.QuadPart,
              &AcquiredSharedUserCritEvent,
              v32.QuadPart,
              v31.QuadPart,
              v37,
              gullUserCritAcquireToken);
          }
          if ( v31.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
            && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
          {
            LODWORD(v37) = 1000 * v31.QuadPart / gliQpcFreq.QuadPart;
            Template_xqx(
              (__int64)gullUserCritAcquireToken,
              &AcquiredSharedUserCritTelemetryEvent,
              v32.QuadPart,
              0LL,
              v37,
              gullUserCritAcquireToken);
          }
          *(_QWORD *)(v29 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
        }
      }
      if ( v7 )
        RIMLockExclusive((__int64)&gInputLock);
    }
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)this);
    if ( (unsigned int)CInpLockGuard::isManipulationThreadInTermination(v33) || !*((_DWORD *)this + 10) )
      break;
    _InterlockedAdd((volatile signed __int32 *)this + 4, 1u);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
    if ( v7 )
    {
      qword_1C018E820 = 0LL;
      ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && !gbRITBlockedOnDIT )
    {
      v36 = (unsigned int)gcRITBlockedOnDITWaiters;
      if ( gcRITBlockedOnDITWaiters )
      {
        KeReleaseSemaphore(gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
        gcRITBlockedOnDITWaiters = 0;
      }
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    EtwTraceReleaseUserCrit(v35, v34, v36);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    CInpLockGuard::WaitForGuard(this);
    v2 = 1;
  }
}
