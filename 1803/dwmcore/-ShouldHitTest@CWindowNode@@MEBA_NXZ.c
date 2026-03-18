/*
 * XREFs of ?ShouldHitTest@CWindowNode@@MEBA_NXZ @ 0x18008FE20
 * Callers:
 *     ?HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180049F10 (-HitTestContent@CVisual@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004A7F0 (-GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180091AB0 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowNode::ShouldHitTest(CWindowNode *this)
{
  bool result; // al

  result = 0;
  if ( !*((_BYTE *)this + 914) )
    return *((_QWORD *)this + 75) != 0LL;
  return result;
}
