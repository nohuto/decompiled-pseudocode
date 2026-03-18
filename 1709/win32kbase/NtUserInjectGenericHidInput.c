/*
 * XREFs of NtUserInjectGenericHidInput @ 0x1C00E8FE0
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
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C010828C (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C010B6E0 (RIMIDE_InjectGenericHidInput.c)
 *     InputExtensibilityCalloutGuard @ 0x1C0129DB0 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserInjectGenericHidInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v7; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rsi
  __int64 *DomainLockRef; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID CurrentProcess; // rax
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  tagObjLock *v25; // [rsp+58h] [rbp+20h] BYREF

  v4 = a3;
  v7 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v11, v10, v12, v13);
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v25);
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
  tagObjLock::UnLock(v25);
  InputExtensibilityCalloutGuard();
  if ( (unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL)
    || (CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16)) != 0LL && CurrentProcess == g_pepDwm )
  {
    if ( v4 && (unsigned int)RIMIDE_InjectGenericHidInput(a1, v16, a2, v4) )
    {
      v7 = 1LL;
      goto LABEL_15;
    }
    v19 = 87;
  }
  else
  {
    v19 = 5;
  }
  UserSetLastError(v19);
LABEL_15:
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v7;
}
