/*
 * XREFs of ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C00A57F0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C001A6B0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::OnReadNotification(CBaseInput *this)
{
  CBaseInput *v1; // rdx
  char *v2; // rsi
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rsi
  __int64 *DomainLockRef; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  tagObjLock *v23; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CBaseInput *)*((_QWORD *)this + 8);
  v2 = (char *)this + 72;
  v3 = 0LL;
  if ( v1 != (CBaseInput *)((char *)this + 72) )
    v3 = *((_QWORD *)this + 8);
  if ( *((int *)this + 8) >= 0 )
  {
    (*(void (__fastcall **)(CBaseInput *, CBaseInput *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 48LL))(
      this,
      v1,
      *((unsigned int *)this + 6),
      *((unsigned int *)this + 10),
      *((_QWORD *)this + 6));
    if ( v3 )
      *((_QWORD *)this + 8) = v2;
  }
  v7 = CBaseInput::Read(this);
  if ( v3 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, v5, v8, v9);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v12 = EnterCritAvoidingDitHitTestHazard(0, 1);
    EtwTraceAcquiredExclusiveUserCrit(v14, v13, v15, v16);
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v23);
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
    tagObjLock::UnLock(v23);
    Win32FreePool(v3);
    UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  }
  return v7;
}
