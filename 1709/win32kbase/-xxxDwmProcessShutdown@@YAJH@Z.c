/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007A88C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C00EB8F0 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C0035F20 (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     GreLockDwmState @ 0x1C003CA30 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C003CA70 (GreUnlockDwmState.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C007ACF4 (-IsMobileCore@@YAEXZ.c)
 *     xxxDwmControl @ 0x1C007AF70 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C007B0B4 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C007B0EC (GreSfmCleanupPresentHistory.c)
 *     CloseMITPortAndEndpoints @ 0x1C007B2E0 (CloseMITPortAndEndpoints.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(unsigned int a1)
{
  CTokenManager *v2; // rcx
  unsigned int v3; // esi
  unsigned int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int CurrentProcessId; // eax
  struct tagTHREADINFO *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // rdi
  __int64 *DomainLockRef; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  LARGE_INTEGER *v30; // rbx
  struct tagTHREADINFO *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // rdi
  __int64 *v37; // rbx
  tagObjLock *v38; // [rsp+58h] [rbp+10h] BYREF

  v2 = g_pTokenManager;
  v3 = 0;
  if ( g_pTokenManager )
  {
    *(_QWORD *)g_pTokenManager = 0LL;
    CTokenManager::DeleteAllTokensInternal(v2);
  }
  CloseMITPortAndEndpoints(0LL);
  v4 = a1;
  if ( IsMobileCore() )
    v4 = 0;
  if ( g_bDwmIsShuttingDown )
    v4 = 0;
  if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
    v3 = xxxDwmStopRedirection(a1);
  if ( (_DWORD)gdwInAtomicOperation )
  {
    v5 = (unsigned int)gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v5, (unsigned int)gdwInAtomicOperation, v6, v7);
  GreSfmCleanupPresentHistory();
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10, v11);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v19 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v21, v20, v22, v23);
  gptiCurrent = v19;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v38);
  v24 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v24[2];
      v24[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v24);
      RIMLockExclusive((__int64)DomainLockRef);
      v24 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v38);
  GreLockDwmState();
  SetDwmApiPort(0LL);
  if ( g_pepDwm )
  {
    ObfDereferenceObject(g_pepDwm);
    g_pepDwm = 0LL;
  }
  GreUnlockDwmState();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
    v3 = UserEnableConsoleMode(1LL);
    v30 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v27, v26, v28, v29);
    if ( v30 )
      v30[1] = KeQueryPerformanceCounter(0LL);
    v31 = EnterCritAvoidingDitHitTestHazard(0, 1);
    EtwTraceAcquiredExclusiveUserCrit(v33, v32, v34, v35);
    gptiCurrent = v31;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v38);
    v36 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      v37 = GetDomainLockRef(8);
      do
      {
        gpducstulHead = v36[2];
        v36[2] = 0LL;
        tagObjLock::UnLock((tagObjLock *)v37);
        HMUnlockObject(*v36);
        RIMLockExclusive((__int64)v37);
        v36 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v38);
  }
  g_bDwmIsShuttingDown = 0;
  if ( v4 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v3;
}
