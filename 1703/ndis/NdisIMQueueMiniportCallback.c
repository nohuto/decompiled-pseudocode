/*
 * XREFs of NdisIMQueueMiniportCallback @ 0x1C005DEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ndisMProcessDeferred @ 0x1C005FF14 (ndisMProcessDeferred.c)
 *     ndisMQueueNewWorkItem @ 0x1C0060450 (ndisMQueueNewWorkItem.c)
 */

__int64 __fastcall NdisIMQueueMiniportCallback(
        struct _NDIS_MINIPORT_BLOCK *a1,
        void (__fastcall *a2)(void *, __int64),
        __int64 a3)
{
  unsigned __int64 *p_Lock; // rbp
  unsigned int v7; // esi
  KIRQL v8; // r14
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ebx

  p_Lock = &a1->Lock;
  v7 = 0;
  v8 = KfRaiseIrql(2u);
  if ( KeGetCurrentThread() == a1->MiniportThread )
  {
    KeAcquireSpinLockAtDpcLevel(p_Lock);
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 723992;
LABEL_5:
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    a2(a1->MiniportAdapterContext, a3);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 724010;
    ndisMProcessDeferred(a1);
    a1->LockAcquired = 0;
    *(_QWORD *)&a1->LockDbg = 0LL;
    a1->LockThread = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    goto LABEL_8;
  }
  KeAcquireSpinLockAtDpcLevel(p_Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 723997;
  if ( !a1->LockAcquired )
  {
    a1->LockAcquired = 1;
    a1->LockDbgX = 723998;
    a1->LockThread = KeGetCurrentThread();
    goto LABEL_5;
  }
  v10 = ndisMQueueNewWorkItem(a1, v9, a3, a2);
  a1->MiniportThread = 0LL;
  v11 = v10;
  a1->LockDbg = 0;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  v7 = -1073741670;
  if ( !v11 )
    v7 = 259;
LABEL_8:
  if ( v8 != 2 )
    KeLowerIrql(v8);
  return v7;
}
