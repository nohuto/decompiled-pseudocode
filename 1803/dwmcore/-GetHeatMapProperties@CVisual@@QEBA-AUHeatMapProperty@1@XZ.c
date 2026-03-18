/*
 * XREFs of ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ @ 0x180161A3C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetHeatMapProperties(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 i; // rcx

  v2 = *(_QWORD *)(a1 + 216);
  if ( (*(_DWORD *)(v2 + 4) & 0x4000000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0x6000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *(_OWORD *)a2 = *(_OWORD *)(i + 4);
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(i + 20);
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 4) = 0LL;
    *(_QWORD *)(a2 + 12) = 0LL;
  }
  return a2;
}
