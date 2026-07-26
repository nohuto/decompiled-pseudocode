/*
 * XREFs of ndisMInvokeDevicePowerNotify @ 0x1C00A7C40
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0011DF4 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00EA84C (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMPowerPolicy @ 0x1C00F5B54 (ndisMPowerPolicy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

void __fastcall ndisMInvokeDevicePowerNotify(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 3784);
  if ( *(_QWORD *)(v2 + 856) && *(_DWORD *)(v2 + 904) == 1 )
  {
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_q(0x9Cu, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a1);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v2 + 856))(*(_QWORD *)(a1 + 24), a2);
    if ( (unsigned __int8)byte_1C0092615 >= 4u )
      WPP_SF_qD(0x9Du, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, a1, v5);
  }
}
