/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x1C003BA60
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C003C480 (NtUserEnumDisplayDevices.c)
 *     NtUserEnumDisplaySettings @ 0x1C005C380 (NtUserEnumDisplaySettings.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C0064560 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserQueryDisplayConfig @ 0x1C0064780 (NtUserQueryDisplayConfig.c)
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C00A09B0 (NtGdiDestroyOPMProtectedOutput.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00A1CF0 (AcquireCriticalSectionAndCheckState.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00E7630 (NtUserFunctionalizeDisplayConfig.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C003C194 (EtwTraceReleaseUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall UserSessionSwitchEnterCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  __int64 *v6; // rdi
  tagObjLock *i; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  tagObjLock *DomainLockRef; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  LARGE_INTEGER *v18; // rbx
  struct tagTHREADINFO *v19; // rbx
  __int64 *v20; // rdi
  tagObjLock *v21; // rbx
  tagObjLock *v22; // [rsp+40h] [rbp+8h] BYREF
  tagObjLock *v23; // [rsp+48h] [rbp+10h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v22);
  v6 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
    do
    {
      gpducstulHead = v6[2];
      v6[2] = 0LL;
      tagObjLock::UnLock(DomainLockRef);
      HMUnlockObject(*v6);
      RIMLockExclusive((__int64)DomainLockRef);
      v6 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  for ( i = v22; ; i = v23 )
  {
    tagObjLock::UnLock(i);
    if ( !LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
      break;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    ++gcSwitchInProgressWaiters;
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread(), v10, v11, v12) == gptiRit
      && !gbRITBlockedOnDIT
      && gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemSwitchInProgressWaiters, UserRequest, 0, 0, 0LL);
    v18 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15, v14, v16, v17);
    if ( v18 )
      v18[1] = KeQueryPerformanceCounter(0LL);
    v19 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v19;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v23);
    v20 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      v21 = (tagObjLock *)GetDomainLockRef(8LL);
      do
      {
        gpducstulHead = v20[2];
        v20[2] = 0LL;
        tagObjLock::UnLock(v21);
        HMUnlockObject(*v20);
        RIMLockExclusive((__int64)v21);
        v20 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
  }
  return 0LL;
}
