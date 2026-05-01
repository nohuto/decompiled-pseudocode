/*
 * XREFs of ?PointerMove@HotTrackingElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18027E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DetectHotTrackChange@HotTrackingElement@@QEAA@PEAV1@@Z @ 0x18027D6DC (--0DetectHotTrackChange@HotTrackingElement@@QEAA@PEAV1@@Z.c)
 *     ??1DetectHotTrackChange@HotTrackingElement@@QEAA@XZ @ 0x18027D88C (--1DetectHotTrackChange@HotTrackingElement@@QEAA@XZ.c)
 *     ?PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18028B060 (-PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 */

void __fastcall HotTrackingElement::PointerMove(
        HotTrackingElement *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  HotTrackingElement::DetectHotTrackChange::DetectHotTrackChange((HotTrackingElement::DetectHotTrackChange *)v4, this);
  CMultitaskingViewElementBase::PointerMove(this, a2);
  HotTrackingElement::DetectHotTrackChange::~DetectHotTrackChange((HotTrackingElement::DetectHotTrackChange *)v4);
}
