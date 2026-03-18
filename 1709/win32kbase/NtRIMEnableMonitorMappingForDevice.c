/*
 * XREFs of NtRIMEnableMonitorMappingForDevice @ 0x1C00FFDD0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0009030 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01015C0 (RIMEnableMonitorMappingForDevice.c)
 */

__int64 __fastcall NtRIMEnableMonitorMappingForDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rdi
  __int64 *DomainLockRef; // rbx
  __int64 v19; // r8
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  tagObjLock *v25; // [rsp+58h] [rbp+20h] BYREF

  if ( !(unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return 3221225506LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7, v6, v8, v9);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v12 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v14, v13, v15, v16);
  gptiCurrent = v12;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v25);
  v17 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v17[2];
      v17[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v17);
      RIMLockExclusive((__int64)DomainLockRef);
      v17 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v25);
  LOBYTE(v19) = 1;
  v20 = RIMEnableMonitorMappingForDevice(a1, a2, v19, a3);
  UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  return v20;
}
