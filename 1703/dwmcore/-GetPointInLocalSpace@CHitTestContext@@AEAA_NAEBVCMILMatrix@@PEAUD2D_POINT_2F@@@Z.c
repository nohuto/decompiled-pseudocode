/*
 * XREFs of ?GetPointInLocalSpace@CHitTestContext@@AEAA_NAEBVCMILMatrix@@PEAUD2D_POINT_2F@@@Z @ 0x18001256C
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180012408 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18001262C (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHitTestContext::GetPointInLocalSpace(
        CHitTestContext *this,
        const struct CMILMatrix *a2,
        struct D2D_POINT_2F *a3)
{
  bool result; // al
  float v4; // xmm5_4
  float v5; // xmm0_4
  float v6; // xmm4_4
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  float v11; // xmm2_4

  result = 0;
  v4 = (float)(*((float *)a2 + 3) * *((float *)this + 22)) - *(float *)a2;
  v5 = (float)(*((float *)a2 + 3) * *((float *)this + 23)) - *((float *)a2 + 1);
  v6 = (float)(*((float *)a2 + 7) * *((float *)this + 23)) - *((float *)a2 + 5);
  v7 = (float)(*((float *)this + 22) * *((float *)a2 + 7)) - *((float *)a2 + 4);
  if ( (float)(v4 * v6) != (float)(v5 * v7) )
  {
    v8 = (float)(v4 * v6) - (float)(v5 * v7);
    v9 = *((float *)a2 + 15);
    result = 1;
    v10 = (float)(v9 * *((float *)this + 23)) - *((float *)a2 + 13);
    v11 = (float)(v9 * *((float *)this + 22)) - *((float *)a2 + 12);
    a3->x = (float)((float)(v10 * v7) - (float)(v11 * v6)) / v8;
    a3->y = (float)((float)(v11 * v5) - (float)(v10 * v4)) / v8;
  }
  return result;
}
