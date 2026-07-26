/*
 * XREFs of NdisIMRevertBack @ 0x1C005DDF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisMProcessDeferred @ 0x1C005FF50 (ndisMProcessDeferred.c)
 */

void __fastcall NdisIMRevertBack(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned __int64 *p_Lock; // rdi

  p_Lock = &a1->Lock;
  KeAcquireSpinLockAtDpcLevel(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 723918;
  ndisMProcessDeferred(a1);
  a1->MiniportThread = 0LL;
  if ( a2 == -1 )
  {
    a1->LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(p_Lock);
  }
  else
  {
    a1->LockAcquired = 0;
    *(_QWORD *)&a1->LockDbg = 0LL;
    a1->LockThread = 0LL;
    KeReleaseSpinLock(p_Lock, a2);
  }
}
