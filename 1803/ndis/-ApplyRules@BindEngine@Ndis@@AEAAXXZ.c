/*
 * XREFs of ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BCBB8
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BC30C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BF290 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00C7270 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 * Callees:
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A8C4 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BCF40 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00BD158 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD34C (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00BD5A0 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD79C (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD8F8 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00BDB54 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BDC9C (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BDED8 (-RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BE018 (-CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BE0D0 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BE2C8 (-CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BE384 (-CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BE518 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BE68C (-ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00BFD18 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD3B4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindEngine::ApplyRules(Ndis::BindEngine *this)
{
  bool m_isDirty; // al
  char v3; // bp
  _NDIS_MINIPORT_BLOCK *m_miniport; // rbx
  struct _NDIS_MINIPORT_BLOCK *v5; // rcx
  struct Ndis::BindStack *v6; // rdx
  Ndis::BindStack *p_Bindings; // rdi
  struct _NDIS_MINIPORT_BLOCK *v8; // rdx
  struct Ndis::BindStack *v9; // rdx
  struct Ndis::BindStack *v10; // rdx
  struct _NDIS_MINIPORT_BLOCK *v11; // rdx
  struct Ndis::BindStack *v12; // rdx
  struct Ndis::BindStack *v13; // rdx
  struct Ndis::BindStack *v14; // rdx
  struct Ndis::BindStack *v15; // r8
  struct Ndis::BindStack *v16; // rdx
  struct Ndis::BindStack *v17; // rdx
  struct Ndis::BindStack *v18; // rdx
  bool v19; // r8
  struct Ndis::BindStack *v20; // rdx
  struct Ndis::BindStack *v21; // r8
  __int64 m_numElements; // r12
  unsigned __int64 v23; // rbx
  enum PAUSE_OR_RESTART v24; // r15d
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // r14
  Ndis::BindState *p_BindState; // rcx
  __int64 v27; // r12
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v29; // r14
  _QWORD v30[20]; // [rsp+20h] [rbp-D8h] BYREF

  m_isDirty = this->m_isDirty;
  v3 = 0;
  do
  {
    m_miniport = this->m_miniport;
    v3 |= m_isDirty;
    v5 = this->m_miniport;
    this->m_isDirty = 0;
    if ( ndisMDoesMiniportNeedCoNdisNdProxy(v5) )
      ndisBindEnumerateProtocolDrivers(lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_, m_miniport);
    p_Bindings = &m_miniport->Bindings;
    Ndis::BindRules::ReEnableTemporaryUnbind((Ndis::BindRules *)&m_miniport->Bindings, v6);
    Ndis::BindRules::ReStartTemporaryPause((Ndis::BindRules *)m_miniport, v8);
    Ndis::BindRules::CheckForDriverLoaded((Ndis::BindRules *)&m_miniport->Bindings, v9);
    Ndis::BindRules::CheckForVBusDependency((Ndis::BindRules *)&m_miniport->Bindings, v10);
    Ndis::BindRules::UnbindIncompatibleDriversForMacChange((Ndis::BindRules *)m_miniport, v11);
    Ndis::BindRules::CheckMissingModifyingFilter((Ndis::BindRules *)&m_miniport->Bindings, v12);
    Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange((Ndis::BindRules *)&m_miniport->Bindings, v13);
    Ndis::BindRules::CheckMissingMandatoryFilter((Ndis::BindRules *)&m_miniport->Bindings, v14);
    Ndis::BindRules::CoalesceFilterAttachDuringBoot(
      (Ndis::BindRules *)m_miniport,
      (struct _NDIS_MINIPORT_BLOCK *)&m_miniport->Bindings,
      v15);
    Ndis::BindRules::UnbindOnAttach((Ndis::BindRules *)&m_miniport->Bindings, v16);
    Ndis::BindRules::UnbindOnDetach((Ndis::BindRules *)&m_miniport->Bindings, v17);
    LOBYTE(v18) = m_miniport->InitMode != 0;
    Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot((Ndis::BindRules *)&m_miniport->Bindings, v18, v19);
    Ndis::BindRules::UnbindMiniportStack((Ndis::BindRules *)&m_miniport->Bindings, v20);
    Ndis::BindRules::PauseNeededForBind(
      (Ndis::BindRules *)m_miniport,
      (struct _NDIS_MINIPORT_BLOCK *)&m_miniport->Bindings,
      v21);
    m_numElements = m_miniport->Bindings.Filters.m_numElements;
    v23 = 0LL;
    v24 = p_Bindings->Miniport.m_pauseReasons == 0;
    while ( v23 != m_numElements )
    {
      if ( v23 >= p_Bindings->Filters.m_numElements )
        __fastfail(5u);
      p = p_Bindings->Filters._p;
      p_BindState = &p[v23]._Myptr->BindState;
      if ( p_BindState->m_bindContext.m_numElements )
      {
        if ( Ndis::BindState::SetPause(p_BindState, v24, PauseReason_LowerDriverPaused)
          && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[v23]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)v30);
          if ( (unsigned __int8)byte_1C0099623 >= 4u )
            WPP_SF_Zq(0x42u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v30[1], v30[0]);
        }
        v24 = p[v23]._Myptr->BindState.m_pauseReasons == 0;
      }
      ++v23;
    }
    v27 = p_Bindings->Protocols.m_numElements;
    for ( i = 0LL; i != v27; ++i )
    {
      if ( i >= p_Bindings->Protocols.m_numElements )
        __fastfail(5u);
      v29 = p_Bindings->Protocols._p;
      if ( Ndis::BindState::SetPause(&v29[i]._Myptr->BindState, v24, PauseReason_LowerDriverPaused)
        && (unsigned __int8)byte_1C0099623 >= 4u )
      {
        WPP_SF_Zq(
          0x43u,
          &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
          &v29[i]._Myptr->BindDriver._p->_t.Name._Myptr->Length,
          v29[i]._Myptr->BindState.Miniport);
      }
    }
    m_isDirty = this->m_isDirty;
  }
  while ( m_isDirty );
  this->m_isDirty = v3;
}
