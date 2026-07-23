/*
 * XREFs of MiEmptyAccessLogs @ 0x14013F820
 * Callers:
 *     <none>
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     MiQueuePageAccessLog @ 0x140006E9C (MiQueuePageAccessLog.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetNextSession @ 0x14007118C (MiGetNextSession.c)
 *     MmDetachSession @ 0x140073870 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400738F0 (MmAttachSession.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PsGetNextProcess @ 0x1404995D0 (PsGetNextProcess.c)
 */

void MiEmptyAccessLogs()
{
  _KPROCESS *i; // rcx
  __int64 NextProcess; // rax
  _KPROCESS *v2; // rdi
  __int64 v3; // r14
  LONG *SharedVm; // rsi
  LONG *v5; // rbx
  KIRQL v6; // al
  unsigned __int8 v7; // r15
  _QWORD *v8; // rcx
  _QWORD *j; // rcx
  LONG *v10; // rbx
  KIRQL v11; // al
  unsigned __int8 v12; // r15
  _QWORD *v13; // rcx
  void *NextSession; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  LONG *v18; // r14
  _QWORD *v19; // rbx
  __int64 v20; // rsi
  LONG *v21; // rax
  LONG *v22; // rdi
  KIRQL v23; // al
  unsigned __int8 v24; // r14
  _QWORD *v25; // rcx
  PSLIST_ENTRY v26; // rbx
  _SLIST_ENTRY *v27; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-50h] BYREF
  $5BC46E0569261879018906DEC3127961 v29; // [rsp+38h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14036CA80, &LockHandle);
  if ( dword_14036CA68 )
  {
    stru_14036CA48.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  else
  {
    do
    {
      stru_14036CA48.Parameter = (void *)2;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      for ( i = 0LL; ; i = v2 )
      {
        NextProcess = PsGetNextProcess(i);
        v2 = (_KPROCESS *)NextProcess;
        if ( !NextProcess )
          break;
        v3 = NextProcess + 1280;
        SharedVm = MiGetSharedVm(NextProcess + 1280);
        if ( *((_QWORD *)SharedVm + 5) )
        {
          KiStackAttachProcess(v2, 0, (__int64)&v29);
          if ( *((_QWORD *)SharedVm + 5) )
          {
            v5 = MiGetSharedVm(v3);
            v6 = ExAcquireSpinLockExclusive(v5);
            v5[1] = 0;
            v7 = v6;
            v8 = (_QWORD *)*((_QWORD *)SharedVm + 5);
            if ( v8 )
            {
              MiEmptyPageAccessLog(v8);
              *((_QWORD *)SharedVm + 5) = 0LL;
            }
            MiUnlockWorkingSetExclusive(v3, v7);
          }
          KiUnstackDetachProcess(&v29, 0LL);
        }
      }
      for ( j = 0LL; ; j = (_QWORD *)v15 )
      {
        NextSession = MiGetNextSession(j);
        v15 = (__int64)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession((ULONG_PTR)NextSession) >= 0 )
        {
          v16 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
          v18 = MiGetSharedVm(v16);
          if ( *((_QWORD *)v18 + 5) )
          {
            v10 = MiGetSharedVm(v17);
            v11 = ExAcquireSpinLockExclusive(v10);
            v10[1] = 0;
            v12 = v11;
            v13 = (_QWORD *)*((_QWORD *)v18 + 5);
            if ( v13 )
            {
              MiEmptyPageAccessLog(v13);
              *((_QWORD *)v18 + 5) = 0LL;
            }
            MiUnlockWorkingSetExclusive(v16, v12);
          }
          MmDetachSession(v15, (__int64)&v29);
        }
      }
      v19 = &unk_14036D180;
      v20 = 3LL;
      do
      {
        if ( v19[14] )
        {
          v21 = MiGetSharedVm((__int64)v19);
          v22 = v21;
          if ( *((_QWORD *)v21 + 5) )
          {
            v23 = ExAcquireSpinLockExclusive(v21);
            v22[1] = 0;
            v24 = v23;
            v25 = (_QWORD *)*((_QWORD *)v22 + 5);
            if ( v25 )
            {
              MiEmptyPageAccessLog(v25);
              *((_QWORD *)v22 + 5) = 0LL;
            }
            MiUnlockWorkingSetExclusive((__int64)v19, v24);
          }
        }
        v19 += 34;
        --v20;
      }
      while ( v20 );
      v26 = 0LL;
      if ( qword_14036CA40 )
      {
        v27 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_14036CA40, 0LL);
        if ( v27 )
          MiQueuePageAccessLog(v27);
      }
      KeAcquireInStackQueuedSpinLock(&qword_14036CA80, &LockHandle);
    }
    while ( stru_14036CA48.Parameter != (void *)2 );
    if ( !dword_14036CA68 )
    {
      v26 = P;
      P = 0LL;
    }
    stru_14036CA48.Parameter = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
  }
}
