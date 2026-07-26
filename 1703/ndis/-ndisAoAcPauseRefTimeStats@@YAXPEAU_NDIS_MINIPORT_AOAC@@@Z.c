/*
 * XREFs of ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0070C90
 * Callers:
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C00706DC (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0070C34 (-ndisAoAcPauseRefTimeAccumulation@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00713D8 (-ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAoAcPauseRefTimeStats(struct _NDIS_MINIPORT_AOAC *a1)
{
  unsigned __int64 *p_CurrentRefStartTime; // rcx
  __int64 v2; // rdx

  p_CurrentRefStartTime = &a1->CsRefTimes[0].CurrentRefStartTime;
  v2 = 16LL;
  do
  {
    if ( *p_CurrentRefStartTime )
    {
      *(p_CurrentRefStartTime - 1) += MEMORY[0xFFFFF78000000008] - *p_CurrentRefStartTime;
      *p_CurrentRefStartTime = 0LL;
    }
    p_CurrentRefStartTime += 2;
    --v2;
  }
  while ( v2 );
}
