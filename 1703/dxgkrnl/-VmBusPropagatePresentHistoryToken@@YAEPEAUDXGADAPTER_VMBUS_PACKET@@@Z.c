/*
 * XREFs of ?VmBusPropagatePresentHistoryToken@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00201C8 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111@Z @ 0x1C002A7A0 (-PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

unsigned __int8 __fastcall VmBusPropagatePresentHistoryToken(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  CRefCountedBuffer *v5; // rcx

  v3 = *((_QWORD *)a1 + 9);
  v5 = *(CRefCountedBuffer **)(v3 + 32);
  if ( v5 )
    CRefCountedBuffer::RefCountedBufferRelease(v5);
  DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
    *(PKSPIN_LOCK *)(v3 + 16),
    *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v3 + 24),
    a3);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), 0LL, 0);
  return 1;
}
