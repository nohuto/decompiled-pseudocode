/*
 * XREFs of MiEmptyAccessLogs @ 0x140230750
 * Callers:
 *     <none>
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiGetNextSession @ 0x1400B15E4 (MiGetNextSession.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiCheckAndProcessCcAccessLog @ 0x140230700 (MiCheckAndProcessCcAccessLog.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PsGetNextProcess @ 0x1404FD830 (PsGetNextProcess.c)
 */

void MiEmptyAccessLogs()
{
  _KPROCESS *i; // rcx
  LONG *SharedVm; // rsi
  LONG *v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rdx
  KIRQL v5; // r15
  _QWORD *v6; // rcx
  __int64 NextProcess; // rax
  _KPROCESS *v8; // rdi
  _QWORD *j; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  LONG *v12; // r14
  LONG *v13; // rbx
  KIRQL v14; // al
  __int64 v15; // rdx
  KIRQL v16; // r15
  _QWORD *v17; // rcx
  _KPROCESS *NextSession; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  __int64 v21; // rsi
  LONG *v22; // rax
  LONG *v23; // rdi
  KIRQL v24; // al
  __int64 v25; // rdx
  KIRQL v26; // r14
  _QWORD *v27; // rcx
  PSLIST_ENTRY v28; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v30; // [rsp+38h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140388C80, &LockHandle);
  if ( dword_140388C68 )
  {
    stru_140388C48.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  else
  {
    do
    {
      stru_140388C48.Parameter = (void *)2;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      for ( i = 0LL; ; i = v8 )
      {
        NextProcess = PsGetNextProcess(i);
        v8 = (_KPROCESS *)NextProcess;
        if ( !NextProcess )
          break;
        SharedVm = MiGetSharedVm(NextProcess + 1280);
        if ( *((_QWORD *)SharedVm + 5) )
        {
          KiStackAttachProcess(v8, 0, (__int64)&v30);
          if ( *((_QWORD *)SharedVm + 5) )
          {
            v2 = MiGetSharedVm((__int64)&v8[1].IdealNode[12]);
            v3 = ExAcquireSpinLockExclusive(v2);
            v2[1] = 0;
            v5 = v3;
            v6 = (_QWORD *)*((_QWORD *)SharedVm + 5);
            if ( v6 )
            {
              MiEmptyPageAccessLog(v6);
              *((_QWORD *)SharedVm + 5) = 0LL;
            }
            LOBYTE(v4) = v5;
            MiUnlockWorkingSetExclusive((__int64)&v8[1].IdealNode[12], v4);
          }
          KiUnstackDetachProcess(&v30, 0LL);
        }
      }
      for ( j = 0LL; ; j = (_QWORD *)v19 )
      {
        NextSession = (_KPROCESS *)MiGetNextSession(j);
        v19 = (__int64)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession, (__int64)&v30) >= 0 )
        {
          v10 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
          v12 = MiGetSharedVm(v10);
          if ( *((_QWORD *)v12 + 5) )
          {
            v13 = MiGetSharedVm(v11);
            v14 = ExAcquireSpinLockExclusive(v13);
            v13[1] = 0;
            v16 = v14;
            v17 = (_QWORD *)*((_QWORD *)v12 + 5);
            if ( v17 )
            {
              MiEmptyPageAccessLog(v17);
              *((_QWORD *)v12 + 5) = 0LL;
            }
            LOBYTE(v15) = v16;
            MiUnlockWorkingSetExclusive(v10, v15);
          }
          MmDetachSession(v19, (__int64)&v30);
        }
      }
      v20 = &unk_140389440;
      v21 = 3LL;
      do
      {
        if ( v20[14] )
        {
          v22 = MiGetSharedVm((__int64)v20);
          v23 = v22;
          if ( *((_QWORD *)v22 + 5) )
          {
            v24 = ExAcquireSpinLockExclusive(v22);
            v23[1] = 0;
            v26 = v24;
            v27 = (_QWORD *)*((_QWORD *)v23 + 5);
            if ( v27 )
            {
              MiEmptyPageAccessLog(v27);
              *((_QWORD *)v23 + 5) = 0LL;
            }
            LOBYTE(v25) = v26;
            MiUnlockWorkingSetExclusive((__int64)v20, v25);
          }
        }
        v20 += 34;
        --v21;
      }
      while ( v21 );
      v28 = 0LL;
      MiCheckAndProcessCcAccessLog(0LL, 1);
      KeAcquireInStackQueuedSpinLock(&qword_140388C80, &LockHandle);
    }
    while ( stru_140388C48.Parameter != (void *)2 );
    if ( !dword_140388C68 )
    {
      v28 = ListEntry;
      ListEntry = 0LL;
    }
    stru_140388C48.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v28 )
      ExFreePoolWithTag(v28, 0);
  }
}
