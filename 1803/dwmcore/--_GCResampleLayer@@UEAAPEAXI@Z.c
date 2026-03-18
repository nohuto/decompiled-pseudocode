/*
 * XREFs of ??_GCResampleLayer@@UEAAPEAXI@Z @ 0x18015E5B0
 * Callers:
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x1801624A4 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x1800248D4 (--1CExternalLayer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CResampleLayer *__fastcall CResampleLayer::`scalar deleting destructor'(CResampleLayer *this, char a2)
{
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
