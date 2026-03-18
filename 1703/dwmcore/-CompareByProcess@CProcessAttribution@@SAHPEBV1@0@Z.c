/*
 * XREFs of ?CompareByProcess@CProcessAttribution@@SAHPEBV1@0@Z @ 0x18014E5F8
 * Callers:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CompareByProcess@CProcessAttribution@@SAHPEBX0@Z @ 0x18014E610 (-CompareByProcess@CProcessAttribution@@SAHPEBX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessAttribution::CompareByProcess(
        const struct CProcessAttribution *a1,
        const struct CProcessAttribution *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a1 + 8);
  if ( v2 == *((_DWORD *)a2 + 8) )
    return (unsigned int)(*((_DWORD *)a1 + 4) - *((_DWORD *)a2 + 4));
  else
    return (unsigned int)(v2 - *((_DWORD *)a2 + 8));
}
