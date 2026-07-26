/*
 * XREFs of ndisMDpc @ 0x1C0063004
 * Callers:
 *     ndis5InterruptDpc @ 0x1C0062DC0 (ndis5InterruptDpc.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C0062E70 (ndis5QueuedMiniportDpcWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C00503A4 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050488 (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C006098C (ndisMProcessDeferred.c)
 */

void __fastcall ndisMDpc(__int64 a1, __int64 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  void (__fastcall *v4)(void *); // r15
  __int64 Clock; // r14
  char v6; // bp
  __int64 v7; // r8
  __int64 v8; // r9
  KSYNCHRONIZE_ROUTINE *EnableInterruptHandler; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  PKINTERRUPT *p_InterruptObject; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned int v16; // [rsp+68h] [rbp+20h]

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a2 + 104);
  v4 = *(void (__fastcall **)(void *))(a2 + 32);
  Clock = 0LL;
  if ( HIBYTE(dword_1C009AF18) )
  {
    v6 = 1;
    ndisTraceDpcStart((__int64)v2, 1u);
    Clock = WmiGetClock(0LL, 0LL, v7, v8);
  }
  else
  {
    v6 = 0;
  }
  KeAcquireSpinLockAtDpcLevel(&v2->Lock);
  v2->MiniportThread = KeGetCurrentThread();
  v2->LockDbg = 656736;
  if ( *(_BYTE *)(a2 + 8) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
  }
  else
  {
    while ( v2->LockAcquired )
    {
      v2->MiniportThread = 0LL;
      v2->LockDbg = 0;
      KeReleaseSpinLockFromDpcLevel(&v2->Lock);
      v16 = 0;
      do
        ++v16;
      while ( v16 < 0x32 );
      KeAcquireSpinLockAtDpcLevel(&v2->Lock);
      v2->MiniportThread = KeGetCurrentThread();
      v2->LockDbg = 656749;
    }
    v2->LockAcquired = 1;
    v2->LockDbgX = 656749;
    v2->LockThread = KeGetCurrentThread();
    v2->MiniportThread = 0LL;
    v2->LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(&v2->Lock);
    v4(v2->MiniportAdapterContext);
    KeAcquireSpinLockAtDpcLevel(&v2->Lock);
    v2->MiniportThread = KeGetCurrentThread();
    v2->LockDbg = 656755;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF) == 1 && *(_BYTE *)(a2 + 8) )
      KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
    p_InterruptObject = &v2->Interrupt->InterruptObject;
    if ( p_InterruptObject )
    {
      EnableInterruptHandler = (KSYNCHRONIZE_ROUTINE *)v2->EnableInterruptHandler;
      if ( EnableInterruptHandler )
        KeSynchronizeExecution(*p_InterruptObject, EnableInterruptHandler, v2->MiniportAdapterContext);
    }
    ndisMProcessDeferred(v2, (__int64)EnableInterruptHandler, v10, v11);
    v2->LockAcquired = 0;
    v2->LockDbgX = 0;
    v2->LockThread = 0LL;
  }
  v2->MiniportThread = 0LL;
  v2->LockDbg = 0;
  KeReleaseSpinLockFromDpcLevel(&v2->Lock);
  if ( v6 )
  {
    v15 = WmiGetClock(0LL, 0LL, v13, v14);
    ndisTraceDpcEnd((__int64)v2, 1u, v15 - Clock);
  }
}
