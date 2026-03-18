/*
 * XREFs of _CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex4358::__AUTO_USING_PM_PrimaryClonePathIndex4358 @ 0x1C00AB160
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00AA7F4 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex4358::__AUTO_USING_PM_PrimaryClonePathIndex4358(
        __int64 *a1)
{
  unsigned int i; // r8d
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  for ( i = 0; i < *((_DWORD *)a1 + 2); *(_DWORD *)(v3 + *a1 + 192) &= ~4u )
  {
    v2 = i++;
    v3 = 264 * v2;
    *(_DWORD *)(v3 + *a1 + 204) = 0;
    result = *a1;
  }
  return result;
}
