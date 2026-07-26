/*
 * XREFs of NdisIMQueueMiniportCallback @ 0x1C005E650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ndisMProcessDeferred @ 0x1C006098C (ndisMProcessDeferred.c)
 *     ndisMQueueNewWorkItem @ 0x1C0060E9C (ndisMQueueNewWorkItem.c)
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
  char v10; // cl
  int v11; // eax
  int v12; // ebx

  p_Lock = &a1->Lock;
  v7 = 0;
  v8 = KfRaiseIrql(2u);
  if ( KeGetCurrentThread() == a1->MiniportThread )
  {
    KeAcquireSpinLockAtDpcLevel(p_Lock);
    a1->MiniportThread = KeGetCurrentThread();
    v10 = 1;
    a1->LockDbg = 724093;
  }
  else
  {
    KeAcquireSpinLockAtDpcLevel(p_Lock);
    v10 = 0;
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 724098;
    if ( !a1->LockAcquired )
    {
      v10 = 1;
      a1->LockDbgX = 724099;
      a1->LockAcquired = 1;
      a1->LockThread = KeGetCurrentThread();
    }
  }
  if ( v10 )
  {
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    a2(a1->MiniportAdapterContext, a3);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 724111;
    ndisMProcessDeferred(a1);
    a1->LockAcquired = 0;
    *(_QWORD *)&a1->LockDbg = 0LL;
    a1->LockThread = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  }
  else
  {
    v11 = ndisMQueueNewWorkItem(a1, v9, a3, a2);
    a1->MiniportThread = 0LL;
    v12 = v11;
    a1->LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    v7 = -1073741670;
    if ( !v12 )
      v7 = 259;
  }
  if ( v8 != 2 )
    KeLowerIrql(v8);
  return v7;
}
