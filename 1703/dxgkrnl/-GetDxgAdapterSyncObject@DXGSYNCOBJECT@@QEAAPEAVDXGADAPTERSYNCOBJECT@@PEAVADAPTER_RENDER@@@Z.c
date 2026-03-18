/*
 * XREFs of ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016CC10
 * Callers:
 *     ?VmBusSignalFence@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0033000 (-VmBusSignalFence@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

struct DXGADAPTERSYNCOBJECT *__fastcall DXGSYNCOBJECT::GetDxgAdapterSyncObject(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2)
{
  if ( (*((_DWORD *)this + 37) & 4) != 0 )
    return DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2);
  if ( !a2 || *((struct ADAPTER_RENDER **)this + 31) == a2 )
    return (DXGSYNCOBJECT *)((char *)this + 232);
  return 0LL;
}
