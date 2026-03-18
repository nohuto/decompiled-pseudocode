/*
 * XREFs of IopFreeWaitCompletionPacket @ 0x140011888
 * Callers:
 *     IopFreeCompletionListPackets @ 0x140429154 (IopFreeCompletionListPackets.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall IopFreeWaitCompletionPacket(__int64 a1, void *a2)
{
  void *v2; // rsi
  unsigned __int64 v5; // rbx

  v2 = *(void **)(a1 + 80);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_BYTE *)(a1 + 104) = 0;
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 96));
  __writecr8(v5);
  ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  ObfDereferenceObjectWithTag(a2, 0x746C6644u);
  return ObfDereferenceObjectWithTag((PVOID)a1, 0x746C6644u);
}
