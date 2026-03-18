/*
 * XREFs of ?SetHeatMapProperties@CVisual@@QEAAXUHeatMapProperty@1@@Z @ 0x1801A8D48
 * Callers:
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x1801A8598 (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetHeatMapProperties(__int64 a1, _QWORD *a2)
{
  char **v2; // r10
  __int64 v3; // rcx

  v2 = (char **)(a1 + 216);
  v3 = *a2 - `CVisual::SetHeatMapProperties'::`2'::sc_defaultValue;
  if ( *a2 == `CVisual::SetHeatMapProperties'::`2'::sc_defaultValue )
  {
    v3 = a2[1];
    if ( !v3 )
      v3 = *((unsigned int *)a2 + 4);
  }
  if ( v3 )
    CSparseStorage::SetData(v2, 6, 0x14u, a2);
  else
    *((_DWORD *)*v2 + 1) &= ~0x4000000u;
}
