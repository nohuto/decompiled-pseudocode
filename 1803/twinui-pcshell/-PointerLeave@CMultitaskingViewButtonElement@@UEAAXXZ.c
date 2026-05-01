/*
 * XREFs of ?PointerLeave@CMultitaskingViewButtonElement@@UEAAXXZ @ 0x180296B40
 * Callers:
 *     <none>
 * Callees:
 *     ?PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ @ 0x18028AF60 (-PointerLeave@CMultitaskingViewElementBase@@UEAAXXZ.c)
 *     ??0CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@PEAV1@@Z @ 0x180296A68 (--0CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@PEAV1@@Z.c)
 *     ??1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ @ 0x180296AA0 (--1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ.c)
 */

void __fastcall CMultitaskingViewButtonElement::PointerLeave(CMultitaskingViewButtonElement *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  CMultitaskingViewButtonElement::CDetectRenderModeChange::CDetectRenderModeChange(
    (CMultitaskingViewButtonElement::CDetectRenderModeChange *)v2,
    this);
  CMultitaskingViewElementBase::PointerLeave(this);
  CMultitaskingViewButtonElement::CDetectRenderModeChange::~CDetectRenderModeChange((CMultitaskingViewButtonElement::CDetectRenderModeChange *)v2);
}
