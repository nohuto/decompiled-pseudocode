/*
 * XREFs of _CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex4358::_AUTO_USING_PM_PrimaryClonePathIndex4358 @ 0x1C0089738
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EAC10 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopology_::_2_::_AUTO_USING_PM_PrimaryClonePathIndex4358::_AUTO_USING_PM_PrimaryClonePathIndex4358(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rcx

  *(_QWORD *)a1 = a2 + 48;
  v3 = *(unsigned __int16 *)(a2 + 20);
  v4 = 0;
  for ( *(_DWORD *)(a1 + 8) = v3; v4 < *(_DWORD *)(a1 + 8); *(_DWORD *)(v6 + *(_QWORD *)a1 + 204) = 0 )
  {
    v5 = v4++;
    v6 = 264 * v5;
    *(_DWORD *)(v6 + *(_QWORD *)a1 + 192) |= 4u;
  }
  return a1;
}
