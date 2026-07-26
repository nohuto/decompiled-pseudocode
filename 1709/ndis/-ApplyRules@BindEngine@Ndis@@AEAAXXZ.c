/*
 * XREFs of ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BBB74
 * Callers:
 *     _lambda_6f963cc78749a40f491d93071c0901d2_::operator() @ 0x1C00B4284 (_lambda_6f963cc78749a40f491d93071c0901d2_--operator().c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C103C (ndisMSetMiniportReadyForBinding.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00C2F68 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00C3C08 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000F194 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00B5080 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00BBF04 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00BC3D0 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BC5C4 (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00BC828 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BCA24 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BCB84 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00BCDE8 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BCF38 (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BD178 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD35C (-CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD41C (-CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BD5B4 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD728 (-ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BDA20 (-RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BDB64 (-CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA890 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindEngine::ApplyRules(Ndis::BindEngine *this)
{
  char v2; // bp
  _NDIS_MINIPORT_BLOCK *m_miniport; // rbx
  struct _NDIS_MINIPORT_BLOCK *v4; // rcx
  struct Ndis::BindStack *v5; // rdx
  Ndis::BindStack *p_Bindings; // rdi
  struct _NDIS_MINIPORT_BLOCK *v7; // rdx
  struct Ndis::BindStack *v8; // rdx
  struct Ndis::BindStack *v9; // rdx
  struct _NDIS_MINIPORT_BLOCK *v10; // rdx
  struct Ndis::BindStack *v11; // rdx
  struct Ndis::BindStack *v12; // rdx
  struct Ndis::BindStack *v13; // rdx
  struct Ndis::BindStack *v14; // r8
  struct Ndis::BindStack *v15; // rdx
  struct Ndis::BindStack *v16; // rdx
  struct Ndis::BindStack *v17; // rdx
  bool v18; // r8
  struct Ndis::BindStack *v19; // rdx
  struct Ndis::BindStack *v20; // r8
  __int64 m_numElements; // r12
  unsigned __int64 v22; // rbx
  enum PAUSE_OR_RESTART v23; // r15d
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // r14
  Ndis::BindState *p_BindState; // rcx
  __int64 v26; // r12
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v28; // r14
  _QWORD v29[20]; // [rsp+20h] [rbp-D8h] BYREF

  v2 = 0;
  do
  {
    m_miniport = this->m_miniport;
    v2 |= this->m_isDirty;
    v4 = this->m_miniport;
    this->m_isDirty = 0;
    if ( ndisMDoesMiniportNeedCoNdisNdProxy(v4) )
      ndisBindEnumerateProtocolDrivers(
        (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_,
        (__int64)m_miniport);
    p_Bindings = &m_miniport->Bindings;
    Ndis::BindRules::ReEnableTemporaryUnbind((Ndis::BindRules *)&m_miniport->Bindings, v5);
    Ndis::BindRules::ReStartTemporaryPause((Ndis::BindRules *)m_miniport, v7);
    Ndis::BindRules::CheckForDriverLoaded((Ndis::BindRules *)&m_miniport->Bindings, v8);
    Ndis::BindRules::CheckForVBusDependency((Ndis::BindRules *)&m_miniport->Bindings, v9);
    Ndis::BindRules::UnbindIncompatibleDriversForMacChange((Ndis::BindRules *)m_miniport, v10);
    Ndis::BindRules::CheckMissingModifyingFilter((Ndis::BindRules *)&m_miniport->Bindings, v11);
    Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange((Ndis::BindRules *)&m_miniport->Bindings, v12);
    Ndis::BindRules::CheckMissingMandatoryFilter((Ndis::BindRules *)&m_miniport->Bindings, v13);
    Ndis::BindRules::CoalesceFilterAttachDuringBoot(
      (Ndis::BindRules *)m_miniport,
      (struct _NDIS_MINIPORT_BLOCK *)&m_miniport->Bindings,
      v14);
    Ndis::BindRules::UnbindOnAttach((Ndis::BindRules *)&m_miniport->Bindings, v15);
    Ndis::BindRules::UnbindOnDetach((Ndis::BindRules *)&m_miniport->Bindings, v16);
    LOBYTE(v17) = m_miniport->InitMode != 0;
    Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot((Ndis::BindRules *)&m_miniport->Bindings, v17, v18);
    Ndis::BindRules::UnbindMiniportStack((Ndis::BindRules *)&m_miniport->Bindings, v19);
    Ndis::BindRules::PauseNeededForBind(
      (Ndis::BindRules *)m_miniport,
      (struct _NDIS_MINIPORT_BLOCK *)&m_miniport->Bindings,
      v20);
    m_numElements = m_miniport->Bindings.Filters.m_numElements;
    v22 = 0LL;
    v23 = p_Bindings->Miniport.m_pauseReasons == 0;
    while ( v22 != m_numElements )
    {
      if ( v22 >= p_Bindings->Filters.m_numElements )
        __fastfail(5u);
      p = p_Bindings->Filters._p;
      p_BindState = &p[v22]._Myptr->BindState;
      if ( p_BindState->m_bindContext.m_numElements )
      {
        if ( Ndis::BindState::SetPause(p_BindState, v23, PauseReason_LowerDriverPaused)
          && (unsigned __int8)byte_1C0098763 >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[v22]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)v29);
          if ( (unsigned __int8)byte_1C0098763 >= 4u )
            WPP_SF_Zq(0x42u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v29[1], v29[0]);
        }
        v23 = p[v22]._Myptr->BindState.m_pauseReasons == 0;
      }
      ++v22;
    }
    v26 = p_Bindings->Protocols.m_numElements;
    for ( i = 0LL; i != v26; ++i )
    {
      if ( i >= p_Bindings->Protocols.m_numElements )
        __fastfail(5u);
      v28 = p_Bindings->Protocols._p;
      if ( Ndis::BindState::SetPause(&v28[i]._Myptr->BindState, v23, PauseReason_LowerDriverPaused)
        && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        WPP_SF_Zq(
          0x43u,
          &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
          &v28[i]._Myptr->BindDriver._p->_t.Name._Myptr->Length,
          v28[i]._Myptr->BindState.Miniport);
      }
    }
  }
  while ( this->m_isDirty );
  this->m_isDirty = v2;
}
