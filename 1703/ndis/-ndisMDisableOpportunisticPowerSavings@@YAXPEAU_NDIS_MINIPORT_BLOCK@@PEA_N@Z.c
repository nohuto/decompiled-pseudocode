/*
 * XREFs of ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x1C00A3008
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00B2AEC (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ndisCancelMediaDisconnectTimer @ 0x1C00235D4 (ndisCancelMediaDisconnectTimer.c)
 *     ndisSelectiveSuspendStop @ 0x1C006F934 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0070E94 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?TryAcquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A7550 (-TryAcquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNE.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A75C8 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 */

void __fastcall ndisMDisableOpportunisticPowerSavings(struct _NDIS_MINIPORT_BLOCK *a1, bool *a2)
{
  bool v4; // zf

  *a2 = 0;
  ndisCancelMediaDisconnectTimer((__int64)a1);
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendStop(a1, 8);
  if ( !(unsigned __int8)Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::TryAcquire(&a1->MiniportOwner, 2LL) )
  {
    v4 = a1->AoAc == 0LL;
    a1->PmInterruptedByPnp = 1;
    *a2 = 1;
    if ( !v4 )
      ndisAoAcStop(a1, 8, RunAsynchronous);
    if ( !a1->DoNotBlockOnMiniportLock )
      Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(&a1->MiniportOwner, 2LL);
  }
}
