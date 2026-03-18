/*
 * XREFs of ??_GCHDRConvertLayer@@UEAAPEAXI@Z @ 0x18014AC00
 * Callers:
 *     ?PushHDRConversionLayer@CDrawingContext@@AEAAJXZ @ 0x18014D534 (-PushHDRConversionLayer@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHDRConvertLayer@@UEAA@XZ @ 0x18014AACC (--1CHDRConvertLayer@@UEAA@XZ.c)
 */

CHDRConvertLayer *__fastcall CHDRConvertLayer::`scalar deleting destructor'(CHDRConvertLayer *this, char a2)
{
  CHDRConvertLayer::~CHDRConvertLayer(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
