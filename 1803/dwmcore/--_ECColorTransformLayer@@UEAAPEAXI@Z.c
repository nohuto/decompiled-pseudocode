/*
 * XREFs of ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18015E480
 * Callers:
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@@Z @ 0x1801620D8 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x1800248D4 (--1CExternalLayer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CColorTransformLayer *__fastcall CColorTransformLayer::`vector deleting destructor'(
        CColorTransformLayer *this,
        char a2)
{
  *(_QWORD *)this = &CColorTransformLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
