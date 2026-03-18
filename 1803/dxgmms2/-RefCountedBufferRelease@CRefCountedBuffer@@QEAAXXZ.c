/*
 * XREFs of ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00159C0
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000D930 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010550 (VidSchiCompleteFlipEntry.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0012384 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0013570 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C002CDEC (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002F760 (-SubmitRenderToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002FCF8 (-VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedBuffer::RefCountedBufferRelease(CRefCountedBuffer *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(this, 0);
}
