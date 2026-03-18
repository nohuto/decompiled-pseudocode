/*
 * XREFs of ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C01F7774
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD780 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE190 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00DE704 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::MarkPathsApplyFailure(CCD_TOPOLOGY *this, const struct _LUID *a2, int a3, int a4)
{
  unsigned __int16 i; // r11
  __int64 v6; // rdx
  __int64 v7; // r10

  for ( i = 0; ; ++i )
  {
    v7 = *((_QWORD *)this + 8);
    if ( i >= *(_WORD *)(v7 + 20) )
      break;
    v6 = 264LL * i;
    if ( *(_DWORD *)(v6 + v7 + 64) == a2->LowPart
      && *(_DWORD *)(v6 + v7 + 68) == a2->HighPart
      && (a3 == -1 || *(_DWORD *)(v6 + v7 + 72) == a3) )
    {
      *(_DWORD *)(v6 + v7 + 240) = a4;
    }
  }
}
