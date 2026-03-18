/*
 * XREFs of ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x18013BF70
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18003BAAC (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CExternalLayer@@UEAA@XZ @ 0x180081460 (--1CExternalLayer@@UEAA@XZ.c)
 */

CFilterEffectLayer *__fastcall CFilterEffectLayer::`vector deleting destructor'(CFilterEffectLayer *this, char a2)
{
  *(_QWORD *)this = &CFilterEffectLayer::`vftable';
  CExternalLayer::~CExternalLayer(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
