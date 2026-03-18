/*
 * XREFs of ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C0010EC0
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x1C0003040 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004480 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E8C8 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00108F0 (VidSchSubmitDeviceCommand.c)
 *     VidSchCancelDeviceCommand @ 0x1C00291D0 (VidSchCancelDeviceCommand.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C005E950 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::VidMmiOfferAllocationCallback(_QWORD *a1)
{
  __int64 v2; // rcx
  signed __int16 v3; // ax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1[12] + 8LL), 0xFFFFFFFF) == 1 )
  {
    v2 = a1[12];
    v3 = _InterlockedCompareExchange16((volatile signed __int16 *)(v2 + 4), 2, 1);
    if ( bTracingEnabled )
    {
      if ( v3 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_p(v2, &EventCompleteOfferAllocation, 1LL, a1);
    }
  }
}
