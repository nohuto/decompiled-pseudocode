/*
 * XREFs of ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800B0CC0
 * Callers:
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x1800B12A4 (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B1304 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1800B139C (-ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHA.c)
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x18012D914 (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 *     ?GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180163D90 (-GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180163F5C (-ReleaseDeviceResources@CFlipChain@@QEAAXXZ.c)
 * Callees:
 *     ?ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ @ 0x1800B10E4 (-ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ.c)
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
