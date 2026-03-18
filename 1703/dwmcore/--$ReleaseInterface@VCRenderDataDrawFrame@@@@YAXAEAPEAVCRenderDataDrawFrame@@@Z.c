/*
 * XREFs of ??$ReleaseInterface@VCRenderDataDrawFrame@@@@YAXAEAPEAVCRenderDataDrawFrame@@@Z @ 0x180160000
 * Callers:
 *     ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x180160020 (-EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEA.c)
 * Callees:
 *     ?Release@CRenderDataDrawFrame@@QEAAKXZ @ 0x180160140 (-Release@CRenderDataDrawFrame@@QEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CRenderDataDrawFrame>(CRenderDataDrawFrame **a1)
{
  CRenderDataDrawFrame *v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CRenderDataDrawFrame::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
