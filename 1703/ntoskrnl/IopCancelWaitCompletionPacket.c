/*
 * XREFs of IopCancelWaitCompletionPacket @ 0x14005135C
 * Callers:
 *     NtCancelWaitCompletionPacket @ 0x14004DA50 (NtCancelWaitCompletionPacket.c)
 *     IopCloseWaitCompletionPacket @ 0x14004FA40 (IopCloseWaitCompletionPacket.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeRemoveQueueEntry @ 0x140031CA4 (KeRemoveQueueEntry.c)
 *     KeDeregisterObjectNotification @ 0x140051420 (KeDeregisterObjectNotification.c)
 *     ObpGetWaitObject @ 0x1400518A0 (ObpGetWaitObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 */

char __fastcall IopCancelWaitCompletionPacket(_QWORD *Object, char a2, unsigned __int8 a3)
{
  char *v3; // rbp
  __int16 *WaitObject; // rax
  char v8; // al
  void *v9; // rdi

  v3 = (char *)Object[10];
  WaitObject = (__int16 *)ObpGetWaitObject(v3 - 48);
  if ( WaitObject == &ObpDefaultObject )
    WaitObject = 0LL;
  v8 = KeDeregisterObjectNotification(WaitObject, Object);
  v9 = (void *)Object[11];
  if ( !v8 && (!a2 || !KeRemoveQueueEntry(Object[11], Object)) )
    return 0;
  *((_BYTE *)Object + 104) = 0;
  KxReleaseSpinLock(Object + 12);
  __writecr8(a3);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return 1;
}
