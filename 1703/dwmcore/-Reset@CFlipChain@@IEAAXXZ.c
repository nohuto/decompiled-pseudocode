/*
 * XREFs of ?Reset@CFlipChain@@IEAAXXZ @ 0x180163F9C
 * Callers:
 *     ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x18012D750 (-ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z.c)
 *     ??1CFlipChain@@MEAA@XZ @ 0x180163988 (--1CFlipChain@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x180163FE4 (-ResetBuffers@CFlipChain@@IEAAJXZ.c)
 *     ?ResetSourceFrameCounters@CFlipChain@@IEAAXXZ @ 0x1801640FC (-ResetSourceFrameCounters@CFlipChain@@IEAAXXZ.c)
 */

void __fastcall CFlipChain::Reset(CFlipChain *this)
{
  CFlipChain::ResetBuffers(this);
  *((_DWORD *)this + 42) = 0;
  CFlipChain::ResetSourceFrameCounters(this);
  *((_DWORD *)this + 62) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 224, 0x58u);
  *((_BYTE *)this + 280) &= 0xFCu;
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
}
