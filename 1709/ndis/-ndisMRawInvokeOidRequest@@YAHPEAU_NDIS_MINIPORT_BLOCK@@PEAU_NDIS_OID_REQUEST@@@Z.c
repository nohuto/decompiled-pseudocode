/*
 * XREFs of ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00E790C
 * Callers:
 *     ?ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007C4D0 (-ndisMpHookInvokeOidRequestHandler@@YAHPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C000D664 (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B98A8 (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00B98E0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 */

__int64 __fastcall ndisMRawInvokeOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  unsigned __int64 Oid; // rsi
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v9[2]; // [rsp+20h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0xFAu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)a1, Oid);
  if ( a1->DriverHandle->HookType != NdisMiniportHookDriverTypeWdi )
  {
    ndisDrainWatchdog((struct _NDIS_REFCOUNT_BLOCK *)a1->PendingOidWatchdog.m_ptr);
    ndisArmWatchdog(
      (struct _NDIS_REFCOUNT_BLOCK *)a1->PendingOidWatchdog.m_ptr,
      a1,
      (_NDIS_REFCOUNT_STACK_ENTRY)35,
      DriverHandle->UnhookedCharacteristics._Myptr->OidRequestHandler,
      0x88B8u,
      Oid);
  }
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
  if ( v6 != 259 && a1->DriverHandle->HookType != NdisMiniportHookDriverTypeWdi )
    ndisDisarmWatchdogAsync(a1->PendingOidWatchdog.m_ptr);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v9[0] = v7;
    WPP_SF_qdD(0xFBu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)a1, Oid, *(_QWORD *)v9);
  }
  return v7;
}
