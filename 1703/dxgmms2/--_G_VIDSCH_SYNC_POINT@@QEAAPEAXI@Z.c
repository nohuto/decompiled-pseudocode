/*
 * XREFs of ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0012EF8
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C0003040 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004480 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E8C8 (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0010C6C (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_D.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall _VIDSCH_SYNC_POINT::`scalar deleting destructor'(_QWORD *P)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)P[3];
  if ( v2 != P + 4 && v2 )
    ExFreePoolWithTag(v2, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
