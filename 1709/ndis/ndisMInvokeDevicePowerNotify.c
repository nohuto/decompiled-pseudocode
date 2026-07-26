/*
 * XREFs of ndisMInvokeDevicePowerNotify @ 0x1C00C6600
 * Callers:
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C001F834 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00F3E24 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisMPowerPolicy @ 0x1C0105D94 (ndisMPowerPolicy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

void __fastcall ndisMInvokeDevicePowerNotify(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  int v5; // eax

  v2 = *(_QWORD *)(a1 + 3784);
  if ( *(_QWORD *)(v2 + 856) && *(_DWORD *)(v2 + 904) == 1 )
  {
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_q(0x9Cu, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v2 + 856))(*(_QWORD *)(a1 + 24), a2);
    if ( (unsigned __int8)byte_1C0098755 >= 4u )
      WPP_SF_qD(0x9Du, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1, v5);
  }
}
