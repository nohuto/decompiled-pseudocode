/*
 * XREFs of ?GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z @ 0x1800904CC
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18005C264 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090590 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHitTestContext::GetPointInLocalSpace(
        CHitTestContext *this,
        const struct CMILMatrix *a2,
        struct D2D_POINT_2F *a3)
{
  bool result; // al
  float v4; // xmm0_4
  float v5; // xmm7_4
  float v6; // xmm6_4
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  float v10; // xmm2_4

  result = 0;
  v4 = (float)(*((float *)this + 22) * *((float *)a2 + 7)) - *((float *)a2 + 4);
  v5 = (float)(*((float *)a2 + 3) * *((float *)this + 22)) - *(float *)a2;
  v6 = (float)(*((float *)a2 + 7) * *((float *)this + 23)) - *((float *)a2 + 5);
  v7 = (float)(*((float *)a2 + 3) * *((float *)this + 23)) - *((float *)a2 + 1);
  if ( (float)(v5 * v6) != (float)(v7 * v4) )
  {
    v8 = (float)(v5 * v6) - (float)(v7 * v4);
    result = 1;
    v9 = (float)(*((float *)a2 + 15) * *((float *)this + 22)) - *((float *)a2 + 12);
    v10 = (float)(*((float *)a2 + 15) * *((float *)this + 23)) - *((float *)a2 + 13);
    a3->y = (float)((float)(v9 * v7) - (float)(v10 * v5)) / v8;
    a3->x = (float)((float)(v10 * v4) - (float)(v9 * v6)) / v8;
  }
  return result;
}
