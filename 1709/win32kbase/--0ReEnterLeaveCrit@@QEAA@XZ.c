/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003BB04
 * Callers:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0019990 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     GreCreateCompatibleDC @ 0x1C0055490 (GreCreateCompatibleDC.c)
 *     UserGetDesktopDC @ 0x1C005C284 (UserGetDesktopDC.c)
 *     UserDeleteW32Thread @ 0x1C007DB50 (UserDeleteW32Thread.c)
 *     UserDeleteW32Process @ 0x1C0080810 (UserDeleteW32Process.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C0092420 (ResetAccessibilityCountersOnMouseInput.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  __int64 *v9; // rdi
  tagObjLock *DomainLockRef; // rbx
  tagObjLock *v12; // [rsp+30h] [rbp+8h] BYREF

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)this = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4, v3, v5, v6);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v8 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v12);
    v9 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
      do
      {
        gpducstulHead = v9[2];
        v9[2] = 0LL;
        tagObjLock::UnLock(DomainLockRef);
        HMUnlockObject(*v9);
        RIMLockExclusive((__int64)DomainLockRef);
        v9 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v12);
  }
  return this;
}
