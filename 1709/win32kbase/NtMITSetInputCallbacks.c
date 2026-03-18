/*
 * XREFs of NtMITSetInputCallbacks @ 0x1C00863D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     UserSetMITInputCallbacks @ 0x1C00864E4 (UserSetMITInputCallbacks.c)
 */

__int64 __fastcall NtMITSetInputCallbacks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  PVOID CurrentProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rdi
  bool v24; // bl
  __int64 v25; // r8
  __int64 *DomainLockRef; // rbx
  tagObjLock *v27; // [rsp+20h] [rbp-28h] BYREF

  v7 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v11, v10, v12, v13);
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v27);
  v14 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v14[2];
      v14[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v14);
      RIMLockExclusive((__int64)DomainLockRef);
      v14 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v27);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v16, v15);
  if ( CurrentProcess
    && CurrentProcess == g_pepDwm
    && (v23 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v23, 0LL),
        v24 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v23 + 40),
        ExReleasePushLockSharedEx(v23, 0LL),
        KeLeaveCriticalRegion(),
        !v24) )
  {
    v7 = UserSetMITInputCallbacks(a1, a2, v25, a4);
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v7;
}
