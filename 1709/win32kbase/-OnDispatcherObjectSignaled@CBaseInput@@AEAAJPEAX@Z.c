/*
 * XREFs of ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C0019A84
 * Callers:
 *     ?_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z @ 0x1C00198A0 (-_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::OnDispatcherObjectSignaled(CBaseInput *this, void *a2)
{
  __int64 v2; // rax
  void **v3; // r8
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rbp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rcx
  struct _KEVENT *v12; // rcx
  unsigned int v14; // eax
  tagObjLock *DomainLockRef; // rbx
  tagObjLock *v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = (void **)((char *)this + 192);
  while ( *v3 != a2 )
  {
    v2 = (unsigned int)(v2 + 1);
    v3 += 8;
    if ( (unsigned int)v2 >= 0xC )
    {
      v14 = 12;
      goto LABEL_6;
    }
  }
  v14 = *((_DWORD *)this + 16 * v2 + 40);
LABEL_6:
  if ( v14 == 12 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v6 = v14;
    v7 = 3LL * v14;
    if ( *((_BYTE *)&unk_1C015E070 + 24 * v14 + 16) )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(3221225473LL, a2, v3, 12LL);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v9 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v9;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v16);
      v10 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
        do
        {
          gpducstulHead = v10[2];
          v10[2] = 0LL;
          tagObjLock::UnLock(DomainLockRef);
          HMUnlockObject(*v10);
          RIMLockExclusive((__int64)DomainLockRef);
          v10 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
      }
      tagObjLock::UnLock(v16);
      v5 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C015E070 + v7 + 1))(this);
      UserSessionSwitchLeaveCrit(v11);
    }
    else
    {
      v5 = (*((__int64 (__fastcall **)(CBaseInput *, void *, void **, __int64))&unk_1C015E070 + 3 * v14 + 1))(
             this,
             a2,
             v3,
             12LL);
    }
    v12 = (struct _KEVENT *)*((_QWORD *)this + 8 * v6 + 25);
    if ( v12 )
      KeSetEvent(v12, 1, 0);
  }
  return v5;
}
