/*
 * XREFs of IopFreeWaitCompletionPacket @ 0x1400DDB50
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x1400DB35C (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
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
