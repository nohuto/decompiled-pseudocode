/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B1634
 * Callers:
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B1584 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007391C (WPP_SF_DZq.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B1B18 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 *     ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00B26AC (-LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00BFCC4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00DBF50 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        __int64 a3,
        NDIS_BIND_LINK_BASE **a4)
{
  Ndis::BindState *v8; // rbx
  int m_bindSources; // r8d
  int m_unbindReasons; // r8d
  int v11; // r8d
  bool v12; // cf
  NDIS_BIND_LINK_BASE *v13; // rax
  char v14; // al
  NDIS_BIND_LINK_BASE *v15; // rbx
  bool v16; // di
  unsigned __int16 v18; // cx
  volatile signed __int32 *v19; // rcx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  (*a4)->BindState.Miniport = a1;
  v8 = (Ndis::BindState *)*a4;
  m_bindSources = (*a4)->BindState.m_bindSources;
  (*a4)->BindState.m_bindSources = m_bindSources | 1;
  if ( m_bindSources != 0 )
    goto LABEL_11;
  if ( (unsigned __int8)byte_1C0092623 >= 5u )
    WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_bindSources, m_bindSources | 1);
  if ( v8->m_bindSources )
  {
    m_unbindReasons = v8->m_unbindReasons;
    v8->m_unbindReasons = m_unbindReasons & 0xFFFFFFFE;
    if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFFFFFE) != 0) || !v8->Miniport )
    {
      if ( (unsigned __int8)byte_1C0092623 >= 5u )
        WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_unbindReasons, m_unbindReasons & 0xFFFFFFFE);
      v12 = (unsigned __int8)byte_1C0092623 < 4u;
      v8->Miniport->BindEngine.m_isDirty = 1;
      if ( !v12 )
        WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8->m_bindSources, 0LL, 0LL);
    }
    v11 = v8->m_unbindReasons;
    v8->m_unbindReasons = v11 & 0xFFFBFFE3;
    if ( (v11 != 0) == ((v11 & 0xFFFBFFE3) != 0) && v8->Miniport )
      goto LABEL_9;
    if ( (unsigned __int8)byte_1C0092623 >= 5u )
      WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v11, v11 & 0xFFFBFFE3);
    v12 = (unsigned __int8)byte_1C0092623 < 4u;
    v8->Miniport->BindEngine.m_isDirty = 1;
    if ( v12 )
      goto LABEL_9;
    v18 = 12;
    goto LABEL_26;
  }
  if ( Ndis::BindState::SetBinding(v8, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
    && (unsigned __int8)byte_1C0092623 >= 4u )
  {
    v18 = 13;
LABEL_26:
    WPP_SF_Zq(v18, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
  }
LABEL_9:
  v12 = (unsigned __int8)byte_1C0092623 < 4u;
  v8->Miniport->BindEngine.m_isDirty = 1;
  if ( !v12 )
    WPP_SF_Zq(
      0xAu,
      &WPP_ae77cdcf3d7d3f019c4f0d9a724dcfbd_Traceguids,
      *(const wchar_t **)&(*a4)[1].BindState.Miniport->Reserved4.Length,
      (*a4)->BindState.Miniport);
LABEL_11:
  NDIS_BIND_LINK_BASE::LinkToDriver(*a4, (struct NDIS_BIND_DRIVER_BASE *)&(*a4)[1].BindState.Miniport->NextMiniport);
  v13 = *a4;
  *a4 = 0LL;
  P = v13;
  v14 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>>::insertAt(
          a2,
          a3,
          &P);
  v15 = (NDIS_BIND_LINK_BASE *)P;
  v16 = v14 == 0;
  if ( P )
  {
    v19 = (volatile signed __int32 *)*((_QWORD *)P + 10);
    if ( v19 )
    {
      if ( !_InterlockedDecrement(v19 + 14) )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v19);
      v15 = (NDIS_BIND_LINK_BASE *)P;
    }
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v15);
    ExFreePoolWithTag(v15, 0x4C745042u);
  }
  if ( v16 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}
