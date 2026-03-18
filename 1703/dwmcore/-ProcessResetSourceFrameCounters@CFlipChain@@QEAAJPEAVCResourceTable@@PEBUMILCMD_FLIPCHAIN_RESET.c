/*
 * XREFs of ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x18012D914
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z @ 0x1800B0CC0 (--0CSyncSharedDataGuard@CFlipChain@@QEAA@PEAV1@@Z.c)
 *     ?ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ @ 0x1800B10E4 (-ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ.c)
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1800B1154 (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 *     ?ResetSourceFrameCounters@CFlipChain@@IEAAXXZ @ 0x1801640FC (-ResetSourceFrameCounters@CFlipChain@@IEAAXXZ.c)
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
