/*
 * XREFs of IopCancelWaitCompletionPacket @ 0x1400E281C
 * Callers:
 *     NtCancelWaitCompletionPacket @ 0x1400E0F58 (NtCancelWaitCompletionPacket.c)
 *     IopCloseWaitCompletionPacket @ 0x1400E2760 (IopCloseWaitCompletionPacket.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeDeregisterObjectNotification @ 0x1400E293C (KeDeregisterObjectNotification.c)
 *     ObpGetWaitObject @ 0x1400E2DAC (ObpGetWaitObject.c)
 *     KeRemoveQueueEntry @ 0x140126168 (KeRemoveQueueEntry.c)
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
  if ( !v8 && (!a2 || !(unsigned __int8)KeRemoveQueueEntry(Object[11], Object)) )
    return 0;
  *((_BYTE *)Object + 104) = 0;
  Object[11] = 0LL;
  KxReleaseSpinLock(Object + 12);
  __writecr8(a3);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return 1;
}
