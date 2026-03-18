/*
 * XREFs of ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x180165A3C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x18016494C (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ?ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ @ 0x180165B14 (-ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ.c)
 *     ?ResetSourceFrameCounters@CFlipChain@@IEAAXXZ @ 0x180165DD8 (-ResetSourceFrameCounters@CFlipChain@@IEAAXXZ.c)
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1801667DC (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 */

__int64 __fastcall CFlipChain::ProcessResetSourceFrameCounters(
        CFlipChain *this,
        struct CResourceTable *a2,
        const struct MILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS *a3)
{
  CFlipChain *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  CFlipChain::CSyncSharedDataGuard::CSyncSharedDataGuard((CFlipChain::CSyncSharedDataGuard *)&v5, this);
  CFlipChain::ReadSharedDataFromDwm(this);
  CFlipChain::ResetSourceFrameCounters(this);
  if ( v5 )
    CFlipChain::WriteSharedDataToDwm(v5);
  return 0LL;
}
