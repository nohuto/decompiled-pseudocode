/*
 * XREFs of ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18014C828
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetColorSpace(CVisual *this)
{
  __int64 v1; // rcx
  _DWORD *i; // rcx

  v1 = *((_QWORD *)this + 26);
  if ( (*(_DWORD *)(v1 + 4) & 0x2000) == 0 )
    return 1LL;
  for ( i = (_DWORD *)(v1 + 12); (*i & 0x7F000000) != 0x13000000; i = (_DWORD *)((char *)i + (*i & 0xFFFFFF) + 4) )
    ;
  return (unsigned int)i[1];
}
