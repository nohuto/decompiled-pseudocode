/*
 * XREFs of ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00BB794
 * Callers:
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BB6E4 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C005F2E8 (WPP_SF_DZq.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00B3770 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00BF0D4 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E77E8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

char __fastcall Ndis::BindRegistry::AddBindingToSet<NDIS_BIND_PROTOCOL_LINK>(
        _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        __int64 a3,
        Ndis::BindState **a4)
{
  Ndis::BindState *v8; // rbx
  unsigned int m_bindSources; // eax
  int v10; // r9d
  int m_unbindReasons; // r8d
  int v12; // r8d
  bool v13; // cf
  Ndis::BindState *v14; // rdi
  __int64 v15; // rbx
  char *m_AdditionalContext; // rsi
  _NDIS_MINIPORT_BLOCK **v17; // rsi
  Ndis::BindState *v18; // rdi
  _NDIS_MINIPORT_BLOCK *v19; // rax
  Ndis::BindState *v20; // rax
  char v21; // al
  NDIS_BIND_LINK_BASE *v22; // rbx
  bool v23; // di
  unsigned __int16 v25; // cx
  volatile signed __int32 *v26; // rcx
  KLockHolder v27; // [rsp+30h] [rbp-48h] BYREF
  PVOID P; // [rsp+80h] [rbp+8h] BYREF

  (*a4)->Miniport = a1;
  v8 = *a4;
  m_bindSources = (*a4)->m_bindSources;
  v10 = m_bindSources | 1;
  v8->m_bindSources = m_bindSources | 1;
  if ( m_bindSources )
    goto LABEL_11;
  if ( (unsigned __int8)byte_1C0099623 >= 5u )
  {
    WPP_SF_dd(0xAu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0, v10);
    v10 = v8->m_bindSources;
  }
  if ( v10 )
  {
    m_unbindReasons = v8->m_unbindReasons;
    v8->m_unbindReasons = m_unbindReasons & 0xFFFFFFFE;
    if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFFFFFFE) != 0) || !v8->Miniport )
    {
      if ( (unsigned __int8)byte_1C0099623 >= 5u )
        WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_unbindReasons, m_unbindReasons & 0xFFFFFFFE);
      v13 = (unsigned __int8)byte_1C0099623 < 4u;
      v8->Miniport->BindEngine.m_isDirty = 1;
      if ( !v13 )
        WPP_SF_DZq(0xBu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v8->m_bindSources, 0LL, 0LL);
    }
    v12 = v8->m_unbindReasons;
    v8->m_unbindReasons = v12 & 0xFFFBFFE3;
    if ( (v12 != 0) == ((v12 & 0xFFFBFFE3) != 0) && v8->Miniport )
      goto LABEL_9;
    if ( (unsigned __int8)byte_1C0099623 >= 5u )
      WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v12, v12 & 0xFFFBFFE3);
    v13 = (unsigned __int8)byte_1C0099623 < 4u;
    v8->Miniport->BindEngine.m_isDirty = 1;
    if ( v13 )
      goto LABEL_9;
    v25 = 12;
    goto LABEL_27;
  }
  if ( Ndis::BindState::SetBinding(v8, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
    && (unsigned __int8)byte_1C0099623 >= 4u )
  {
    v25 = 13;
LABEL_27:
    WPP_SF_Zq(v25, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, 0LL, 0LL);
  }
LABEL_9:
  v13 = (unsigned __int8)byte_1C0099623 < 4u;
  v8->Miniport->BindEngine.m_isDirty = 1;
  if ( !v13 )
    WPP_SF_Zq(
      0xAu,
      &WPP_b7f2c8797aae3571e103ec8967b74e0e_Traceguids,
      *((const wchar_t **)(*a4)[1].m_AdditionalContext + 3),
      (*a4)->Miniport);
LABEL_11:
  v14 = *a4;
  v15 = qword_1C00996D8 + 8;
  v27.m_Lock = (KPushLockBase *)(qword_1C00996D8 + 8);
  m_AdditionalContext = (char *)v14[1].m_AdditionalContext;
  KeEnterCriticalRegion();
  v27.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v15, 0LL);
  v17 = (_NDIS_MINIPORT_BLOCK **)(m_AdditionalContext + 8);
  v27.m_State = Exclusive;
  v18 = v14 + 1;
  v19 = *v17;
  if ( (_NDIS_MINIPORT_BLOCK **)(*v17)->NextMiniport != v17 )
    __fastfail(3u);
  v18->Miniport = v19;
  *(_QWORD *)&v18->AllowBindDespiteMandatory = v17;
  v19->NextMiniport = (_NDIS_MINIPORT_BLOCK *)v18;
  *v17 = (_NDIS_MINIPORT_BLOCK *)v18;
  KLockHolder::~KLockHolder(&v27);
  v20 = *a4;
  *a4 = 0LL;
  P = v20;
  v21 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertAt(
          a2,
          a3,
          &P);
  v22 = (NDIS_BIND_LINK_BASE *)P;
  v23 = v21 == 0;
  if ( P )
  {
    v26 = (volatile signed __int32 *)*((_QWORD *)P + 10);
    if ( v26 )
    {
      if ( !_InterlockedDecrement(v26 + 12) )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v26);
      v22 = (NDIS_BIND_LINK_BASE *)P;
    }
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v22);
    ExFreePoolWithTag(v22, 0x4C745042u);
  }
  if ( v23 )
    return 0;
  a1->BindEngine.m_isDirty = 1;
  return 1;
}
