/*
 * XREFs of ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030440
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030F04 (-VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0031108 (-VidSchiRundownHardwarePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z.c)
 * Callees:
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030AC8 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiCompleteHwQueueWaitPacket(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v3 + 24) = a1;
  WdLogEvent5_WdEvent(v3);
  VidSchiFreeCompletedHwQueuePacket(a1);
}
