/*
 * XREFs of ndisIsPowerReferencedForSelectiveSuspend @ 0x1C00702A0
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006EC2C (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006EE2C (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006F1B0 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisSelectiveSuspendStop @ 0x1C00710C8 (ndisSelectiveSuspendStop.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsPowerReferencedForSelectiveSuspend(__int64 a1, char a2)
{
  int v3; // eax

  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 512)
       || *(_DWORD *)(a1 + 516)
       || *(_DWORD *)(a1 + 528)
       || *(_DWORD *)(a1 + 532)
       || *(_DWORD *)(a1 + 520)
       || *(_DWORD *)(a1 + 524)
       || *(_DWORD *)(a1 + 576)
       || *(_DWORD *)(a1 + 508))
      && KeReadStateEvent((PRKEVENT)(a1 + 272)) )
    {
      return 1;
    }
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 504);
    if ( (v3 & 0x14) == 0 || (v3 & 0x200) != 0 )
      return 1;
  }
  return 0;
}
