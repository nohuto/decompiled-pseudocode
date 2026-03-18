/*
 * XREFs of IopCancelWaitCompletionPacket @ 0x140087944
 * Callers:
 *     IopCloseWaitCompletionPacket @ 0x140068960 (IopCloseWaitCompletionPacket.c)
 *     NtCancelWaitCompletionPacket @ 0x1400877D8 (NtCancelWaitCompletionPacket.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeDeregisterObjectNotification @ 0x140087A64 (KeDeregisterObjectNotification.c)
 *     ObpGetWaitObject @ 0x140087EFC (ObpGetWaitObject.c)
 *     KeRemoveQueueEntry @ 0x140087FA8 (KeRemoveQueueEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

char __fastcall IopCancelWaitCompletionPacket(_QWORD *Object, char a2, unsigned __int8 a3)
{
  char *v3; // rbp
  __int16 *WaitObject; // rax
  __int16 *v8; // rcx
  char v9; // al
  void *v10; // rdi

  v3 = (char *)Object[10];
  WaitObject = (__int16 *)ObpGetWaitObject(v3 - 48);
  v8 = 0LL;
  if ( WaitObject != &ObpDefaultObject )
    v8 = WaitObject;
  v9 = KeDeregisterObjectNotification(v8);
  v10 = (void *)Object[11];
  if ( !v9 && (!a2 || !(unsigned __int8)KeRemoveQueueEntry(Object[11], Object)) )
    return 0;
  Object[11] = 0LL;
  *((_BYTE *)Object + 104) = 0;
  KxReleaseSpinLock(Object + 12);
  __writecr8(a3);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return 1;
}
