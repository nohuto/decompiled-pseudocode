/*
 * XREFs of ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00BFB08
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_DZq @ 0x1C007547C (WPP_SF_DZq.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00BFBBC (ndisInitializeMiniportRestartAttributes.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C0103E1C (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 */

void __fastcall ndisMRestartMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  int v4; // edi

  ndisInitializeMiniportRestartAttributes(a1, a2);
  a2->MiniportMacOptionsToPreserve = a1->MacOptions & 0x80;
  if ( (unsigned __int8)byte_1C0098763 >= 4u )
    WPP_SF_q(0x12u, &WPP_2c3eed846bc9384776062be0ec19a269_Traceguids, (__int64)a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = ndisMRestartMiniportInner(a1, &a2->Attributes);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098763 >= 4u )
    WPP_SF_qD(0x13u, &WPP_2c3eed846bc9384776062be0ec19a269_Traceguids, (__int64)a1, v4);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( v4 )
  {
    a1->Bindings.Miniport.m_LastErrorCode = v4;
    if ( Ndis::BindState::SetBinding(&a1->Bindings.Miniport, BindingDisabled, Reason_LastRestartAttemptFailed)
      && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      WPP_SF_DZq(0x14u, &WPP_2c3eed846bc9384776062be0ec19a269_Traceguids, v4, &a1->pAdapterInstanceName->Length, a1);
    }
  }
  else
  {
    a1->Bindings.Miniport.m_actualPauseState = DatapathRunning;
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
