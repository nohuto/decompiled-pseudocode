/*
 * XREFs of ndisRequestedDevicePowerIrpComplete @ 0x1C00127A0
 * Callers:
 *     ndisSetSystemPower @ 0x1C00A79CC (ndisSetSystemPower.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_qqq @ 0x1C0043A1C (Template_qqq.c)
 *     Template_qq @ 0x1C004FC94 (Template_qq.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00B5B80 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 */

void __fastcall ndisRequestedDevicePowerIrpComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  int v10; // ecx

  v6 = a1;
  LOBYTE(a1) = byte_1C0092615;
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
  {
    WPP_SF_q(56LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, v6);
    LOBYTE(a1) = byte_1C0092615;
  }
  v7 = *(_QWORD *)(a4 + 184);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 64LL);
  *(_OWORD *)(a4 + 48) = *(_OWORD *)a5;
  if ( (int)*a5 < 0 )
  {
    if ( (unsigned __int8)a1 >= 2u )
      WPP_SF_q(58LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, v6);
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(v8 + 5256);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400000) != 0 )
      Template_qqq(v10, (unsigned int)&IrpSetPowerFailed, (unsigned int)&NDIS_PROVIDER_ID, *a5, 143, v6);
    IofCompleteRequest((PIRP)a4, 0);
  }
  else
  {
    if ( (unsigned __int8)a1 >= 4u )
      WPP_SF_qD(57LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, v6, *(unsigned int *)(v7 + 24));
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      Template_qq(a1, &PowerIrpComplete, &NDIS_PROVIDER_ID, (unsigned int)v6, *(_DWORD *)(v7 + 24));
    PoSetPowerState(*(PDEVICE_OBJECT *)(v7 + 40), SystemPowerState, *(POWER_STATE *)(v7 + 24));
    v9 = *(_QWORD *)(a4 + 184);
    *(_OWORD *)(v9 - 72) = *(_OWORD *)v9;
    *(_OWORD *)(v9 - 56) = *(_OWORD *)(v9 + 16);
    *(_OWORD *)(v9 - 40) = *(_OWORD *)(v9 + 32);
    *(_QWORD *)(v9 - 24) = *(_QWORD *)(v9 + 48);
    *(_BYTE *)(v9 - 69) = 0;
    IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 3864), (PIRP)a4);
  }
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(59LL, &WPP_8366cf1575bf39c3737a7bb71aad7eff_Traceguids, v6);
}
