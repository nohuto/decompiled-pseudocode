/*
 * XREFs of NtMITDisableMouseIntercept @ 0x1C00E63F0
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
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C008B9E4 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtMITDisableMouseIntercept(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rdi
  __int64 *DomainLockRef; // rbx
  __int64 v12; // rdi
  bool v13; // bl
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  tagObjLock *v22; // [rsp+30h] [rbp+8h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v7, v6, v8, v9);
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v22);
  v10 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v10[2];
      v10[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v10);
      RIMLockExclusive((__int64)DomainLockRef);
      v10 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v22);
  v12 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v12, 0LL);
  v13 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v12 + 40);
  ExReleasePushLockSharedEx(v12, 0LL);
  KeLeaveCriticalRegion();
  if ( !v13 )
  {
    v14 = 5;
LABEL_12:
    v20 = 0;
    UserSetLastError(v14);
    goto LABEL_13;
  }
  v15 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  if ( v15 )
    LOBYTE(v15) = CMouseProcessor::MouseInterceptState::Disable(v15 + 2904);
  v20 = (unsigned __int8)v15;
  if ( !(_BYTE)v15 )
  {
    v14 = 5023;
    goto LABEL_12;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v20;
}
