/*
 * XREFs of ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18013BF30
 * Callers:
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@@Z @ 0x18013DEF4 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CExternalLayer@@UEAA@XZ @ 0x180081460 (--1CExternalLayer@@UEAA@XZ.c)
 */

CColorTransformLayer *__fastcall CColorTransformLayer::`vector deleting destructor'(
        CColorTransformLayer *this,
        char a2)
{
  *(_QWORD *)this = &CColorTransformLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
