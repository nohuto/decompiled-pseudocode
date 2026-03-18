/*
 * XREFs of NtDWMCommitInputSystemOutputConfig @ 0x1C00E5800
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ?CommitConfiguration@CInputConfig@@QEAAJXZ @ 0x1C012FC0C (-CommitConfiguration@CInputConfig@@QEAAJXZ.c)
 */

__int64 __fastcall NtDWMCommitInputSystemOutputConfig(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rsi
  __int64 *DomainLockRef; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  CInputConfig *v16; // rcx
  NTSTATUS v17; // eax
  ULONG v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  tagObjLock *v24; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v8, v7, v9, v10);
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v24);
  v11 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v11[2];
      v11[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v11);
      RIMLockExclusive((__int64)DomainLockRef);
      v11 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v24);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v24);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
  if ( !CurrentProcess || CurrentProcess != g_pepDwm )
  {
    v18 = 5;
    goto LABEL_12;
  }
  v17 = CInputConfig::CommitConfiguration(v16);
  if ( v17 < 0 )
  {
    v18 = RtlNtStatusToDosError(v17);
LABEL_12:
    UserSetLastError(v18);
    goto LABEL_13;
  }
  v4 = 1LL;
LABEL_13:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v24);
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return v4;
}
