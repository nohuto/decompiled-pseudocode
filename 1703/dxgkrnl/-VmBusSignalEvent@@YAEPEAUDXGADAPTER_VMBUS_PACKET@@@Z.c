/*
 * XREFs of ?VmBusSignalEvent@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0032FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VmBusSignalEvent(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  struct _KEVENT *v2; // rdi

  v1 = *((_QWORD *)a1 + 9);
  v2 = *(struct _KEVENT **)(v1 + 16);
  KeSetEvent(v2, 0, 0);
  if ( *(_BYTE *)(v1 + 24) )
    ObfDereferenceObject(v2);
  return 0;
}
