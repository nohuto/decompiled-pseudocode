/*
 * XREFs of ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00DD9EC
 * Callers:
 *     ?ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0078330 (-ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C000C19C (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00A5300 (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXKK_K@Z @ 0x1C00A5338 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXKK_K@Z.c)
 */

__int64 __fastcall ndisMRawInvokeOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  unsigned __int64 Oid; // rsi
  int v6; // eax
  unsigned int v7; // edi
  unsigned __int64 v9; // [rsp+20h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qD(0xEBu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)a1, Oid);
  ndisDrainWatchdog((struct _NDIS_REFCOUNT_BLOCK *)a1->PendingOidWatchdog.m_ptr);
  ndisArmWatchdog(
    (struct _NDIS_REFCOUNT_BLOCK *)a1->PendingOidWatchdog.m_ptr,
    a1,
    (_NDIS_REFCOUNT_STACK_ENTRY)35,
    (_NDIS_REFCOUNT_STACK_ENTRY)35000,
    Oid);
  if ( ndisVerifierNdisDispatch && (DriverHandle->Flags & 2) != 0 )
    v6 = ndisVerifierNdisDispatch->NdisMiniportOidRequestHandler(
           a1->MiniportAdapterContext,
           a2,
           a1,
           a1->VerifierContext,
           DriverHandle->UnhookedCharacteristics._Myptr->OidRequestHandler);
  else
    v6 = DriverHandle->UnhookedCharacteristics._Myptr->OidRequestHandler(a1->MiniportAdapterContext, a2);
  v7 = v6;
  if ( v6 != 259 )
    ndisDisarmWatchdogAsync(a1->PendingOidWatchdog.m_ptr);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    LODWORD(v9) = v7;
    WPP_SF_qdD(0xECu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)a1, Oid, v9);
  }
  return v7;
}
