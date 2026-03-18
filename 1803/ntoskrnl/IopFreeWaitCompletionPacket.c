/*
 * XREFs of IopFreeWaitCompletionPacket @ 0x14013FCD8
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x14013E050 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall IopFreeWaitCompletionPacket(_QWORD *Object, PVOID a2)
{
  void *v2; // rsi
  KIRQL v5; // al
  unsigned __int64 v6; // rbx

  v2 = (void *)Object[10];
  v5 = KeAcquireSpinLockRaiseToDpc(Object + 12);
  Object[11] = 0LL;
  v6 = v5;
  *((_BYTE *)Object + 104) = 0;
  KxReleaseSpinLock(Object + 12);
  __writecr8(v6);
  ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  ObfDereferenceObjectWithTag(a2, 0x746C6644u);
  return ObfDereferenceObjectWithTag(Object, 0x746C6644u);
}
