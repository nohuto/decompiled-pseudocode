/*
 * XREFs of ?IsPointInRect@CWindowNode@@SA_NAEBUD2D_POINT_2F@@AEBUtagRECT@@@Z @ 0x18001E6E0
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001E560 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowNode::IsPointInRect(const struct D2D_POINT_2F *a1, const struct tagRECT *a2)
{
  bool result; // al
  float y; // xmm1_4

  result = 0;
  if ( a1->x >= (float)a2->left && (float)a2->right > a1->x )
  {
    y = a1->y;
    if ( y >= (float)a2->top )
      return (float)a2->bottom > y;
  }
  return result;
}
