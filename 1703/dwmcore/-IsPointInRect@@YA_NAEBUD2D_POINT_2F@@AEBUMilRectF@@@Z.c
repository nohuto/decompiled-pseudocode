/*
 * XREFs of ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x180013AE8
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18001262C (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001E560 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001EA38 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPointInRect(const struct D2D_POINT_2F *a1, const struct MilRectF *a2)
{
  bool result; // al
  float y; // xmm1_4

  result = 0;
  if ( a1->x >= *(float *)a2 && *((float *)a2 + 2) > a1->x )
  {
    y = a1->y;
    if ( y >= *((float *)a2 + 1) )
      return *((float *)a2 + 3) > y;
  }
  return result;
}
