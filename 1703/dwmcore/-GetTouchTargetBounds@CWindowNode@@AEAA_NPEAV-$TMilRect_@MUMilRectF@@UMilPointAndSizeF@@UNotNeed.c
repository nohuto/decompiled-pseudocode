/*
 * XREFs of ?GetTouchTargetBounds@CWindowNode@@AEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180051F5C
 * Callers:
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001E560 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800528C0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     <none>
 */

char __fastcall CWindowNode::GetTouchTargetBounds(_DWORD *a1, float *a2)
{
  int v2; // r8d
  char v3; // r9

  v2 = a1[167];
  v3 = 0;
  if ( a1[169] > v2 && a1[170] > a1[168] )
  {
    v3 = 1;
    *a2 = (float)(v2 - a1[163]);
    a2[1] = (float)(a1[168] - a1[164]);
    a2[2] = (float)(a1[169] - a1[163]);
    a2[3] = (float)(a1[170] - a1[164]);
  }
  return v3;
}
