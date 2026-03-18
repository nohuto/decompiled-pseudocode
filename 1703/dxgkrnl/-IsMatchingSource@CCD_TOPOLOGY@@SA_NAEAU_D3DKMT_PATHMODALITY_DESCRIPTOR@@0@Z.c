/*
 * XREFs of ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C0002DC8
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CCD_TOPOLOGY::IsMatchingSource(
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a2)
{
  return *((_DWORD *)a1 + 6) == *((_DWORD *)a2 + 6)
      && *((_DWORD *)a1 + 4) == *((_DWORD *)a2 + 4)
      && *((_DWORD *)a1 + 5) == *((_DWORD *)a2 + 5);
}
