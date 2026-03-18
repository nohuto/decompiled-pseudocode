/*
 * XREFs of ?VidSchiIncrementFlipOnDmaPacketCounter@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z @ 0x1C0024D5C
 * Callers:
 *     ?VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D0F8 (-VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiIncrementFlipOnDmaPacketCounter(struct _VIDSCH_QUEUE_PACKET *a1, unsigned int a2)
{
  if ( !*((_DWORD *)a1 + 12) && (*((_DWORD *)a1 + 18) & 4) != 0 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 32LL)
                                            + 8LL * *((unsigned int *)a1 + 44)
                                            + 3008)
                                + 2948LL),
      a2);
}
