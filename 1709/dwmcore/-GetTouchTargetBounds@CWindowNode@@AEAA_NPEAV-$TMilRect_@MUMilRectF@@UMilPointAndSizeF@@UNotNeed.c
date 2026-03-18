/*
 * XREFs of ?GetTouchTargetBounds@CWindowNode@@AEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A8F0
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18009A770 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009B140 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     <none>
 */

char __fastcall CWindowNode::GetTouchTargetBounds(_DWORD *a1, float *a2)
{
  int v2; // r8d
  char v3; // r9

  v2 = a1[174];
  v3 = 0;
  if ( a1[176] > v2 && a1[177] > a1[175] )
  {
    v3 = 1;
    *a2 = (float)(v2 - a1[170]);
    a2[1] = (float)(a1[175] - a1[171]);
    a2[2] = (float)(a1[176] - a1[170]);
    a2[3] = (float)(a1[177] - a1[171]);
  }
  return v3;
}
