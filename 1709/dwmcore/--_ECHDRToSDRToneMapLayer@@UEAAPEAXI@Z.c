/*
 * XREFs of ??_ECHDRToSDRToneMapLayer@@UEAAPEAXI@Z @ 0x18013BFB0
 * Callers:
 *     ?PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ @ 0x18013DFD0 (-PushHDRToneMapVPBltLayer@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CExternalLayer@@UEAA@XZ @ 0x180081460 (--1CExternalLayer@@UEAA@XZ.c)
 */

CHDRToSDRToneMapLayer *__fastcall CHDRToSDRToneMapLayer::`vector deleting destructor'(
        CHDRToSDRToneMapLayer *this,
        char a2)
{
  *(_QWORD *)this = &CHDRToSDRToneMapLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
