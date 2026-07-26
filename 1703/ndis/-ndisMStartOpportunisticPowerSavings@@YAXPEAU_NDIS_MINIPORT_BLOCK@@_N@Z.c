/*
 * XREFs of ?ndisMStartOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1C00A30A8
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00B2AEC (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ndisSetMediaDisconnectTimer @ 0x1C0023B5C (ndisSetMediaDisconnectTimer.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C006F5F0 (ndisSelectiveSuspendClearStop.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C007083C (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall ndisMStartOpportunisticPowerSavings(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  bool v4; // zf

  if ( a1->MediaConnectState == MediaConnectStateDisconnected )
    ndisSetMediaDisconnectTimer((__int64)a1);
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendClearStop((__int64)a1, 8);
  if ( a2 )
  {
    v4 = a1->AoAc == 0LL;
    a1->PmInterruptedByPnp = 0;
    if ( !v4 )
      ndisAoAcClearStop(a1, NdisSSPnPOp);
  }
}
