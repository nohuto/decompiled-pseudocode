/*
 * XREFs of MiEmptyAccessLogs @ 0x14016A490
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiGetNextSession @ 0x140074C24 (MiGetNextSession.c)
 *     MiDrainSystemAccessLog @ 0x14007A2A4 (MiDrainSystemAccessLog.c)
 *     MiGetSessionVm @ 0x14007FBD8 (MiGetSessionVm.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmDetachSession @ 0x14008A5E0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008A660 (MmAttachSession.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiCheckAndProcessCcAccessLog @ 0x14016A630 (MiCheckAndProcessCcAccessLog.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PsGetNextProcess @ 0x140538C80 (PsGetNextProcess.c)
 */

void MiEmptyAccessLogs()
{
  PSLIST_ENTRY v0; // rdi
  _KPROCESS *i; // rcx
  __int64 NextProcess; // rax
  _KPROCESS *v3; // rbx
  __int64 v4; // rsi
  _QWORD *j; // rcx
  _KPROCESS *NextSession; // rax
  __int64 v7; // rbx
  unsigned __int64 SessionVm; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v12[48]; // [rsp+38h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1403CBF40, &LockHandle);
  if ( dword_1403CBF28 )
  {
    stru_1403CBF08.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  else
  {
    v0 = 0LL;
    do
    {
      stru_1403CBF08.Parameter = (void *)2;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      for ( i = 0LL; ; i = v3 )
      {
        NextProcess = PsGetNextProcess(i);
        v3 = (_KPROCESS *)NextProcess;
        if ( !NextProcess )
          break;
        v4 = NextProcess + 1280;
        if ( *((_QWORD *)MiGetSharedVm(NextProcess + 1280) + 6) )
        {
          KiStackAttachProcess(v3, 0, (__int64)v12);
          MiDrainSystemAccessLog(v4);
          KiUnstackDetachProcess((__int64)v12, 0LL);
        }
      }
      for ( j = 0LL; ; j = (_QWORD *)v7 )
      {
        NextSession = (_KPROCESS *)MiGetNextSession(j);
        v7 = (__int64)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession, (__int64)v12) >= 0 )
        {
          SessionVm = MiGetSessionVm();
          MiDrainSystemAccessLog(SessionVm);
          MmDetachSession(v7, (__int64)v12);
        }
      }
      v9 = &unk_1403CC6C0;
      v10 = 3LL;
      do
      {
        if ( v9[14] )
          MiDrainSystemAccessLog((__int64)v9);
        v9 += 34;
        --v10;
      }
      while ( v10 );
      MiCheckAndProcessCcAccessLog(0LL, 1LL);
      KeAcquireInStackQueuedSpinLock(&qword_1403CBF40, &LockHandle);
    }
    while ( stru_1403CBF08.Parameter != (void *)2 );
    if ( !dword_1403CBF28 )
    {
      v0 = ListEntry;
      ListEntry = 0LL;
    }
    stru_1403CBF08.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
}
