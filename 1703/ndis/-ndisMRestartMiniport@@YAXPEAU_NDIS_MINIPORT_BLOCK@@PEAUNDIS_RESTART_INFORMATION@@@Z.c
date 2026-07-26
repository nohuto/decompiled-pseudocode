/*
 * XREFs of ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00AB4E4
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00B2BA4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_DZq @ 0x1C007391C (WPP_SF_DZq.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00AB5F8 (ndisInitializeMiniportRestartAttributes.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00F6D74 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 */

void __fastcall ndisMRestartMiniport(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  int v4; // edi

  ndisInitializeMiniportRestartAttributes();
  a2->MiniportMacOptionsToPreserve = a1->MacOptions & 0x80;
  if ( (unsigned __int8)byte_1C0092623 >= 4u )
    WPP_SF_q(0x12u, &WPP_13438080fb613be0f003217e669c8259_Traceguids, (__int64)a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  v4 = ndisMRestartMiniportInner(a1, &a2->Attributes);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0092623 >= 4u )
    WPP_SF_qD(0x13u, &WPP_13438080fb613be0f003217e669c8259_Traceguids, (__int64)a1, v4);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( v4 )
  {
    a1->Bindings.Miniport.m_LastErrorCode = v4;
    if ( Ndis::BindState::SetBinding(&a1->Bindings.Miniport, BindingDisabled, Reason_LastRestartAttemptFailed)
      && (unsigned __int8)byte_1C0092623 >= 4u )
    {
      WPP_SF_DZq(0x14u, &WPP_13438080fb613be0f003217e669c8259_Traceguids, v4, &a1->pAdapterInstanceName->Length, a1);
    }
  }
  else
  {
    a1->Bindings.Miniport.m_actualPauseState = DatapathRunning;
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
