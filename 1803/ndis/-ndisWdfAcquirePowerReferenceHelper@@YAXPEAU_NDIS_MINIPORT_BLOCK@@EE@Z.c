/*
 * XREFs of ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006F2A4
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006F4C0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006F6C0 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisSelectiveSuspendStop @ 0x1C0071928 (ndisSelectiveSuspendStop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006F340 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

void __fastcall ndisWdfAcquirePowerReferenceHelper(struct _NDIS_MINIPORT_BLOCK *a1, char a2, char a3)
{
  int v6; // eax
  unsigned __int8 v7; // dl
  int v8; // ebx

  v6 = ((__int64 (__fastcall *)(void *))a1->DriverHandle->CxBlock->Chars.EvtCxPowerReference)(a1->MiniportAdapterContext);
  v8 = v6;
  if ( v6 < 0 && (unsigned __int8)byte_1C0099616 >= 2u )
    WPP_SF_qD(0x20u, &WPP_250ba6082b573e143e643b46f787ca55_Traceguids, (__int64)a1, v6);
  if ( v8 != 259 && (a2 || a3) )
    ndisWdfSelectiveSuspendResumeOperations(a1, v7, v8 < 0);
}
