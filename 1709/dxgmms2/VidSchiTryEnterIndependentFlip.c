/*
 * XREFs of VidSchiTryEnterIndependentFlip @ 0x1C0015064
 * Callers:
 *     VidSchiUpdatePresentParameters @ 0x1C00044A0 (VidSchiUpdatePresentParameters.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0005730 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008DA0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchConfirmToken @ 0x1C0014F90 (VidSchConfirmToken.c)
 * Callees:
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0015090 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x1C00150F0 (VidSchiFlushPendingTokenList.c)
 */

char __fastcall VidSchiTryEnterIndependentFlip(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  char result; // al
  __int64 v4; // r8
  unsigned int v5; // r10d
  __int64 v6; // r11

  result = VidSchiCheckPlaneIndependentFlipCondition(a1, a2, a3);
  if ( result )
    return VidSchiFlushPendingTokenList(v6, v5, v4);
  return result;
}
