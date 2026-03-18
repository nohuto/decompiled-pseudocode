/*
 * XREFs of ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0020580
 * Callers:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0004764 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004B50 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0005730 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008DA0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0011510 (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_D.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall _VIDSCH_SYNC_POINT::`scalar deleting destructor'(_QWORD *P)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)P[3];
  if ( v2 != P + 4 && v2 )
    ExFreePoolWithTag(v2, 0);
  P[3] = 0LL;
  *((_DWORD *)P + 16) = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
