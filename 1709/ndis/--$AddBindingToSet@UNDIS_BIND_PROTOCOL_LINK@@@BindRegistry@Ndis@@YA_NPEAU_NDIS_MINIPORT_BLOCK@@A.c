/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00F9C94
 * Callers:
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B07D8 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007547C (WPP_SF_DZq.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00ABCE8 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B4070 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00DA118 (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E5F98 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        NDIS_BIND_LINK_BASE **a4)
{
  Ndis::BindState *v8; // rbx
  unsigned int m_bindSources; // r8d
  unsigned __int16 v10; // cx
  bool v11; // cf
  NDIS_BIND_LINK_BASE *v12; // rax
  char v13; // al
  NDIS_BIND_LINK_BASE *v14; // rbx
  bool v15; // di
  __int64 v16; // rcx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  (*a4)->BindState.Miniport = a1;
  v8 = (Ndis::BindState *)*a4;
  m_bindSources = (*a4)->BindState.m_bindSources;
  (*a4)->BindState.m_bindSources = m_bindSources | 1;
  if ( m_bindSources )
    goto LABEL_17;
  if ( (unsigned __int8)byte_1C0098763 >= 5u )
    WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0, m_bindSources | 1);
  if ( v8->m_bindSources )
  {
    if ( Ndis::BindState::SetBinding(v8, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
      && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8->m_bindSources, 0LL, 0LL);
    }
    if ( !Ndis::BindState::SetBinding(
            v8,
            BindingEnabled,
            Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
      || (unsigned __int8)byte_1C0098763 < 4u )
    {
      goto LABEL_15;
    }
    v10 = 12;
    goto LABEL_14;
  }
  if ( Ndis::BindState::SetBinding(v8, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
    && (unsigned __int8)byte_1C0098763 >= 4u )
  {
    v10 = 13;
LABEL_14:
    WPP_SF_Zq(v10, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
  }
LABEL_15:
  v11 = (unsigned __int8)byte_1C0098763 < 4u;
  v8->Miniport->BindEngine.m_isDirty = 1;
  if ( !v11 )
    WPP_SF_Zq(
      0xAu,
      &WPP_11812016a7ea377450fd589117a883cb_Traceguids,
      (const wchar_t *)(*a4)[1].BindState.Miniport->MiniportAdapterContext,
      (*a4)->BindState.Miniport);
LABEL_17:
  NDIS_BIND_LINK_BASE::LinkToDriver(*a4, (struct NDIS_BIND_DRIVER_BASE *)(*a4)[1].BindState.Miniport);
  v12 = *a4;
  *a4 = 0LL;
  P = v12;
  v13 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertAt(
          a2,
          a3,
          (__int64 *)&P);
  v14 = (NDIS_BIND_LINK_BASE *)P;
  v15 = v13 == 0;
  if ( P )
  {
    v16 = *((_QWORD *)P + 10);
    if ( v16 )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v16 + 48)) )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((_QWORD *)v16);
      v14 = (NDIS_BIND_LINK_BASE *)P;
    }
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v14);
    ExFreePoolWithTag(v14, 0x4C745042u);
  }
  if ( v15 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}
