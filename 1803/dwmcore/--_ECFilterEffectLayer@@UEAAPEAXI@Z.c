/*
 * XREFs of ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x18015E4C0
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180007E98 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     ??1CExternalLayer@@UEAA@XZ @ 0x1800248D4 (--1CExternalLayer@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CFilterEffectLayer *__fastcall CFilterEffectLayer::`vector deleting destructor'(CFilterEffectLayer *this, char a2)
{
  *(_QWORD *)this = &CFilterEffectLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
