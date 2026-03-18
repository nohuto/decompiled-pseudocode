/*
 * XREFs of VidSchiProcessCompletedQueuePacket @ 0x1C000F018
 * Callers:
 *     VidSchiSubmitDeviceCommand @ 0x1C0071560 (VidSchiSubmitDeviceCommand.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00B30EC (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008DA0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacket(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  struct _VIDSCH_QUEUE_PACKET *result; // rax

  result = a1;
  do
    result = VidSchiProcessCompletedQueuePacketInternal(result, a2, a3);
  while ( result );
  return result;
}
