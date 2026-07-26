/*
 * XREFs of ndisMTimerDpc @ 0x1C0063460
 * Callers:
 *     <none>
 * Callees:
 *     NdisMSetTimer @ 0x1C0025410 (NdisMSetTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C00503A4 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050488 (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C006098C (ndisMProcessDeferred.c)
 */

void __fastcall ndisMTimerDpc(
        struct _KDPC *Dpc,
        _LIST_ENTRY *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _NDIS_MINIPORT_BLOCK *Flink; // rdi
  __int64 Clock; // r15
  char v7; // r14
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  void **i; // rcx
  _LIST_ENTRY *v12; // rax
  _LIST_ENTRY *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v20; // [rsp+68h] [rbp+10h]

  Flink = (struct _NDIS_MINIPORT_BLOCK *)DeferredContext[9].Flink;
  Clock = 0LL;
  if ( HIBYTE(dword_1C009AF18) )
  {
    v7 = 1;
    ndisTraceDpcStart((__int64)Flink, 2u);
    Clock = WmiGetClock(0LL, 0LL, v8, v9);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel(&Flink->Lock);
  CurrentThread = KeGetCurrentThread();
  for ( Flink->LockDbg = 655728; ; Flink->LockDbg = 655732 )
  {
    Flink->MiniportThread = CurrentThread;
    if ( !Flink->LockAcquired )
      break;
    Flink->MiniportThread = 0LL;
    Flink->LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(&Flink->Lock);
    v20 = 0;
    do
      ++v20;
    while ( v20 < 0x32 );
    KeAcquireSpinLockAtDpcLevel(&Flink->Lock);
    CurrentThread = KeGetCurrentThread();
  }
  Flink->LockAcquired = 1;
  Flink->LockDbgX = 655732;
  Flink->LockThread = KeGetCurrentThread();
  if ( (Flink->DriverHandle->Flags & 2) != 0 )
  {
    KeAcquireSpinLockAtDpcLevel(&Flink->TimerQueueLock);
    for ( i = (void **)&Flink->TimerQueue; ; i = (void **)&v12[9].Blink )
    {
      v12 = (_LIST_ENTRY *)*i;
      if ( !*i )
        break;
      if ( v12 == DeferredContext )
      {
        if ( !HIDWORD(DeferredContext[3].Blink) )
          *i = DeferredContext[9].Blink;
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&Flink->TimerQueueLock);
  }
  if ( (Flink->Flags & 2) != 0 )
  {
    NdisMSetTimer(DeferredContext, 10);
  }
  else if ( (Flink->PnPFlags & 0x1000000) == 0 )
  {
    v13 = DeferredContext[8].Flink;
    Flink->MiniportThread = 0LL;
    Flink->LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(&Flink->Lock);
    ((void (__fastcall *)(_QWORD, _LIST_ENTRY *, _QWORD, _QWORD))v13)(0LL, DeferredContext[8].Blink, 0LL, 0LL);
    KeAcquireSpinLockAtDpcLevel(&Flink->Lock);
    Flink->MiniportThread = KeGetCurrentThread();
    Flink->LockDbg = 655796;
    ndisMProcessDeferred(Flink, v14, v15, v16);
  }
  Flink->LockAcquired = 0;
  Flink->LockDbgX = 0;
  Flink->LockThread = 0LL;
  Flink->MiniportThread = 0LL;
  Flink->LockDbg = 0;
  KeReleaseSpinLockFromDpcLevel(&Flink->Lock);
  if ( v7 )
  {
    v19 = WmiGetClock(0LL, 0LL, v17, v18);
    ndisTraceDpcEnd((__int64)Flink, 2u, v19 - Clock);
  }
}
