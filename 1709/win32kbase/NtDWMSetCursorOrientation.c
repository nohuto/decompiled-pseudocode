/*
 * XREFs of NtDWMSetCursorOrientation @ 0x1C00E5920
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
 *     ?SetMouseOrientation@CInputConfig@@QEAAJW4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C012FD14 (-SetMouseOrientation@CInputConfig@@QEAAJW4DISPLAYCONFIG_ROTATION@@@Z.c)
 */

__int64 __fastcall NtDWMSetCursorOrientation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rsi
  __int64 *DomainLockRef; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  ULONG v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  tagObjLock *v25; // [rsp+38h] [rbp+10h] BYREF

  v4 = a1;
  v5 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v9, v8, v10, v11);
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v25);
  v12 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v12[2];
      v12[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v12);
      RIMLockExclusive((__int64)DomainLockRef);
      v12 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v25);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v25);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v15, v14);
  if ( !CurrentProcess || CurrentProcess != g_pepDwm )
  {
    v19 = 5;
    goto LABEL_12;
  }
  v18 = CInputConfig::SetMouseOrientation(v17, v4);
  if ( v18 < 0 )
  {
    v19 = RtlNtStatusToDosError(v18);
LABEL_12:
    UserSetLastError(v19);
    goto LABEL_13;
  }
  v5 = 1LL;
LABEL_13:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v25);
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v5;
}
