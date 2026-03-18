/*
 * XREFs of ?GetInverseDesktopMPOTransform@COverlayContext@@QEAAXPEAVCMILMatrix@@@Z @ 0x1800C4BC8
 * Callers:
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBUtagRECT@@@Z @ 0x18013F0D4 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005B0B8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@_ea_18005B0B8.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall COverlayContext::GetInverseDesktopMPOTransform(COverlayContext *this, struct CMILMatrix *a2)
{
  int v2; // eax
  float v3; // xmm1_4
  float v4[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 1183) )
  {
    v2 = *((_DWORD *)this + 18);
    v4[0] = 0.0;
    v4[1] = 0.0;
    v3 = (float)*((int *)this + 19);
    v4[2] = (float)v2;
    v4[3] = v3;
    CMILMatrix::InferAffineMatrix((__int64)a2, (float *)this + 14, v4);
  }
  else
  {
    *((_WORD *)a2 + 32) = 32085;
    *(_OWORD *)a2 = _xmm;
    *((_OWORD *)a2 + 1) = _xmm;
    *((_OWORD *)a2 + 2) = _xmm;
    *((_OWORD *)a2 + 3) = _xmm;
  }
}
