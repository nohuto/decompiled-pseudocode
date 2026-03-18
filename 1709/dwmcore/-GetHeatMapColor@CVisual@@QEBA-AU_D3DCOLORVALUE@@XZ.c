/*
 * XREFs of ?GetHeatMapColor@CVisual@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x18013DAB8
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CVisual::GetHeatMapColor(CVisual *this, struct _D3DCOLORVALUE *__return_ptr retstr)
{
  __int64 v2; // rcx
  __int64 i; // rcx

  v2 = *((_QWORD *)this + 26);
  if ( (*(_DWORD *)(v2 + 4) & 0x4000000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0x6000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)(i + 4);
  }
  else
  {
    retstr->r = 0.0;
    *(_QWORD *)&retstr->g = 0LL;
    retstr->a = 0.0;
  }
  return retstr;
}
