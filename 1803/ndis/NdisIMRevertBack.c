/*
 * XREFs of NdisIMRevertBack @ 0x1C005E7F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisMProcessDeferred @ 0x1C006098C (ndisMProcessDeferred.c)
 */

void __fastcall NdisIMRevertBack(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned __int64 *p_Lock; // rdi

  p_Lock = &a1->Lock;
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 724026;
  ndisMProcessDeferred(a1);
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  if ( a2 == -1 )
  {
    KeReleaseSpinLockFromDpcLevel(p_Lock);
  }
  else
  {
    a1->LockAcquired = 0;
    a1->LockDbgX = 0;
    a1->LockThread = 0LL;
    KeReleaseSpinLock(p_Lock, a2);
  }
}
