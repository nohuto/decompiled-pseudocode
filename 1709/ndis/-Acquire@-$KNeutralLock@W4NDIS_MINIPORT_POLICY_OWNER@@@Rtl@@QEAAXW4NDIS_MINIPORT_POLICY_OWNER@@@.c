/*
 * XREFs of ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C63E8
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001F834 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisSetDevicePower @ 0x1C001FA4C (ndisSetDevicePower.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x1C00C3B58 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 * Callees:
 *     ?TryAcquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C6320 (-TryAcquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNE.c)
 *     ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C00EBBD4 (-Wait@-$KWaitEventBase@U-$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ.c)
 */

char __fastcall Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(__int64 a1, int a2)
{
  char result; // al

  while ( 1 )
  {
    result = Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::TryAcquire(a1, a2);
    if ( result )
      break;
    KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(a1 + 16);
  }
  return result;
}
