/*
 * XREFs of ?Reset@CFlipChain@@IEAAXXZ @ 0x180165C70
 * Callers:
 *     ??1CFlipChain@@MEAA@XZ @ 0x1801649AC (--1CFlipChain@@MEAA@XZ.c)
 *     ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x1801657FC (-ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x180165CC0 (-ResetBuffers@CFlipChain@@IEAAJXZ.c)
 *     ?ResetSourceFrameCounters@CFlipChain@@IEAAXXZ @ 0x180165DD8 (-ResetSourceFrameCounters@CFlipChain@@IEAAXXZ.c)
 */

void __fastcall CFlipChain::Reset(CFlipChain *this)
{
  CFlipChain::ResetBuffers(this);
  *((_DWORD *)this + 44) = 0;
  CFlipChain::ResetSourceFrameCounters(this);
  *((_DWORD *)this + 64) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 232, 0x58u);
  *((_BYTE *)this + 288) &= 0xFCu;
  ReleaseInterface<IBitmapLock>((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 11);
}
