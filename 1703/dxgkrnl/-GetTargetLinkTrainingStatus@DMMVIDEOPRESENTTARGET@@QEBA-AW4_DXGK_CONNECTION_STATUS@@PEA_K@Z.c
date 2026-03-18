/*
 * XREFs of ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00A4494
 * Callers:
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z @ 0x1C01D97D4 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D9940 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(__int64 a1, _QWORD *a2)
{
  if ( a2 )
    *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 512) + 16LL);
  return *(unsigned int *)(*(_QWORD *)(a1 + 512) + 24LL);
}
