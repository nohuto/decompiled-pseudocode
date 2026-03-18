/*
 * XREFs of UserThreadCallout @ 0x1C003B840
 * Callers:
 *     <none>
 * Callees:
 *     xxxCreateThreadInfo @ 0x1C00052F0 (xxxCreateThreadInfo.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     GreCleanDC @ 0x1C0080350 (GreCleanDC.c)
 *     RtlGetExpWinVer @ 0x1C008078C (RtlGetExpWinVer.c)
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int ThreadInfo; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v12; // rsi
  __int64 ProcessSectionBaseAddress; // rax
  LARGE_INTEGER *v14; // rbx
  struct tagTHREADINFO *v15; // rbx
  __int64 *v16; // rsi
  __int64 v17; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v20; // rbx
  __int64 *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 ThreadWin32Thread; // rbx
  tagObjLock *DomainLockRef; // rbx
  tagObjLock *v27; // rbx
  tagObjLock *v28; // [rsp+50h] [rbp+18h] BYREF
  tagObjLock *v29; // [rsp+58h] [rbp+20h] BYREF

  ThreadInfo = 0;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return ThreadInfo;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Thread, a2, a3, a4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v20 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v20;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v28);
    v21 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
      do
      {
        gpducstulHead = v21[2];
        v21[2] = 0LL;
        tagObjLock::UnLock(DomainLockRef);
        HMUnlockObject(*v21);
        RIMLockExclusive((__int64)DomainLockRef);
        v21 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v28);
    ThreadWin32Thread = W32GetThreadWin32Thread(Thread, v22, v23, v24);
    *(_DWORD *)(ThreadWin32Thread + 464) |= 1u;
    if ( (int)IsxxxFullScreenCleanupSupported() >= 0 )
      xxxFullScreenCleanup();
    if ( gbVideoInitialized || !gbRemoteSession )
      GreCleanDC(*(HDC *)(gpDispInfo + 48));
    if ( (*(_DWORD *)(ThreadWin32Thread + 1184) & 2) != 0 )
      LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = 0;
    if ( (*(_DWORD *)(ThreadWin32Thread + 1184) & 1) == 0 )
    {
      if ( (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 )
        GetAppCompatFlags2QuadWord(gptiCurrent);
      xxxDestroyThreadInfo();
    }
LABEL_14:
    UserSessionSwitchLeaveCrit(v17);
    return ThreadInfo;
  }
  if ( !gbNoMorePowerCallouts )
  {
    if ( !gbUserInitialized )
    {
      _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread(Thread, a2, a3, a4) + 1184), 0);
      return ThreadInfo;
    }
    v8 = W32GetThreadWin32Thread(Thread, a2, a3, a4);
    if ( v8 )
    {
      ThreadProcess = PsGetThreadProcess(Thread);
      v12 = ThreadProcess;
      if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v12);
        *(_DWORD *)(v8 + 608) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(v8 + 608) = 0;
      }
    }
    v14 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7, v6, v9, v10);
    if ( v14 )
      v14[1] = KeQueryPerformanceCounter(0LL);
    v15 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v15;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v29);
    v16 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      v27 = (tagObjLock *)GetDomainLockRef(8LL);
      do
      {
        gpducstulHead = v16[2];
        v16[2] = 0LL;
        tagObjLock::UnLock(v27);
        HMUnlockObject(*v16);
        RIMLockExclusive((__int64)v27);
        v16 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v29);
    ThreadInfo = xxxCreateThreadInfo(Thread);
    if ( (ThreadInfo & 0x80000000) == 0 && (int)IsGetAppCompatFlags2QuadWordSupported() >= 0 )
      GetAppCompatFlags2QuadWord(gptiCurrent);
    goto LABEL_14;
  }
  return 3221225473LL;
}
