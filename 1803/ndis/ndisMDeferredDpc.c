/*
 * XREFs of ndisMDeferredDpc @ 0x1C0062F10
 * Callers:
 *     <none>
 * Callees:
 *     ndisMProcessDeferred @ 0x1C006098C (ndisMProcessDeferred.c)
 */

void __fastcall ndisMDeferredDpc(
        struct _KDPC *Dpc,
        struct _NDIS_MINIPORT_BLOCK *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KSPIN_LOCK *p_Lock; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // [rsp+38h] [rbp+10h]

  p_Lock = &DeferredContext->Lock;
  KeAcquireSpinLockAtDpcLevel(&DeferredContext->Lock);
  CurrentThread = KeGetCurrentThread();
  for ( DeferredContext->LockDbg = 656901; ; DeferredContext->LockDbg = 656903 )
  {
    DeferredContext->MiniportThread = CurrentThread;
    if ( !DeferredContext->LockAcquired )
      break;
    DeferredContext->MiniportThread = 0LL;
    DeferredContext->LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(p_Lock);
    v10 = 0;
    do
      ++v10;
    while ( v10 < 0x32 );
    KeAcquireSpinLockAtDpcLevel(p_Lock);
    CurrentThread = KeGetCurrentThread();
  }
  DeferredContext->LockAcquired = 1;
  DeferredContext->LockDbgX = 656903;
  DeferredContext->LockThread = KeGetCurrentThread();
  ndisMProcessDeferred(DeferredContext, v6, v7, v8);
  DeferredContext->LockDbgX = 0;
  DeferredContext->LockThread = 0LL;
  DeferredContext->MiniportThread = 0LL;
  DeferredContext->LockDbg = 0;
  DeferredContext->LockAcquired = 0;
  KeReleaseSpinLockFromDpcLevel(p_Lock);
}
