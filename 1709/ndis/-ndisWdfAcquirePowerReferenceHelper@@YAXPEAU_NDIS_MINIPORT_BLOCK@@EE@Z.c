/*
 * XREFs of ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006EA10
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006EC2C (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006EE2C (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisSelectiveSuspendStop @ 0x1C00710C8 (ndisSelectiveSuspendStop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006EAAC (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

void __fastcall ndisWdfAcquirePowerReferenceHelper(struct _NDIS_MINIPORT_BLOCK *a1, char a2, char a3)
{
  int v6; // eax
  unsigned __int8 v7; // dl
  int v8; // ebx

  v6 = ((__int64 (__fastcall *)(void *))a1->DriverHandle->CxBlock->Chars.EvtCxPowerReference)(a1->MiniportAdapterContext);
  v8 = v6;
  if ( v6 < 0 && (unsigned __int8)byte_1C0098756 >= 2u )
    WPP_SF_qD(0x20u, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, (__int64)a1, v6);
  if ( v8 != 259 && (a2 || a3) )
    ndisWdfSelectiveSuspendResumeOperations(a1, v7, v8 < 0);
}
