/*
 * XREFs of ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x18016494C
 * Callers:
 *     ?GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1801653C0 (-GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1801659C0 (-ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHA.c)
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x180165A3C (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180165A80 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180165BAC (-ReleaseDeviceResources@CFlipChain@@QEAAXXZ.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x180166688 (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 * Callees:
 *     ?ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ @ 0x180165B14 (-ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ.c)
 */

CFlipChain::CSyncSharedDataGuard *__fastcall CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard(
        CFlipChain::CSyncSharedDataGuard *this,
        struct CFlipChain *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
    CFlipChain::ReadSharedDataFromDwm(a2);
  return this;
}
