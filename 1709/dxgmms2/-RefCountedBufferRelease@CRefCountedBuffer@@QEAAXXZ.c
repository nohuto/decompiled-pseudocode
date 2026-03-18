/*
 * XREFs of ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0015590
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C00029E0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0005730 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0011AB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0011D98 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0029EDC (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D0F8 (-VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedBuffer::RefCountedBufferRelease(CRefCountedBuffer *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 1, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(this, 0);
}
