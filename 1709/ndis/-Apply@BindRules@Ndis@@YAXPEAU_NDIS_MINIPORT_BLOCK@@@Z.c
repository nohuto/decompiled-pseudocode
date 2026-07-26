/*
 * XREFs of ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC16C
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00B12D8 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00B5798 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00BA9E4 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00C5BE8 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000F194 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00B5080 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
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
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA890 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::Apply(struct _NDIS_MINIPORT_BLOCK *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct Ndis::BindStack *v3; // rdx
  Ndis::BindStack *p_Bindings; // rdi
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  struct Ndis::BindStack *v6; // rdx
  struct Ndis::BindStack *v7; // rdx
  struct _NDIS_MINIPORT_BLOCK *v8; // rdx
  struct Ndis::BindStack *v9; // rdx
  __int64 m_numElements; // r12
  BOOL v11; // r14d
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // r15
  NDIS_BIND_FILTER_LINK *Myptr; // r9
  struct Ndis::BindStack *v15; // r8
  struct Ndis::BindStack *v16; // rdx
  struct Ndis::BindStack *v17; // rdx
  struct Ndis::BindStack *v18; // rdx
  bool v19; // r8
  struct Ndis::BindStack *v20; // rdx
  struct Ndis::BindStack *v21; // r8
  __int64 v22; // r13
  unsigned __int64 v23; // r14
  BOOL v24; // r15d
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v25; // r12
  NDIS_BIND_FILTER_LINK *v26; // rsi
  int m_pauseReasons; // r8d
  unsigned int v28; // eax
  int v29; // r9d
  char v30; // al
  __int64 v31; // r13
  unsigned __int64 m; // rsi
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v33; // r12
  NDIS_BIND_PROTOCOL_LINK *v34; // r14
  int v35; // r8d
  unsigned int v36; // eax
  int v37; // r9d
  unsigned __int16 v38; // cx
  __int64 v39; // r15
  unsigned __int64 j; // rbx
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *v41; // r14
  __int64 v42; // r15
  unsigned __int64 k; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v44; // r14
  bool v45; // cf
  __int64 v46; // [rsp+28h] [rbp-79h] BYREF
  const wchar_t *v47; // [rsp+30h] [rbp-71h]

  if ( ndisMDoesMiniportNeedCoNdisNdProxy(this) )
    ndisBindEnumerateProtocolDrivers(
      (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_,
      (__int64)this);
  p_Bindings = &this->Bindings;
  Ndis::BindRules::ReEnableTemporaryUnbind((Ndis::BindRules *)&this->Bindings, v3);
  Ndis::BindRules::ReStartTemporaryPause((Ndis::BindRules *)this, v5);
  Ndis::BindRules::CheckForDriverLoaded((Ndis::BindRules *)&this->Bindings, v6);
  Ndis::BindRules::CheckForVBusDependency((Ndis::BindRules *)&this->Bindings, v7);
  Ndis::BindRules::UnbindIncompatibleDriversForMacChange((Ndis::BindRules *)this, v8);
  m_numElements = this->Bindings.Filters.m_numElements;
  v11 = 0;
  for ( i = 0LL; i != m_numElements; ++i )
  {
    if ( i >= this->Bindings.Filters.m_numElements )
      __fastfail(5u);
    p = this->Bindings.Filters._p;
    Myptr = p[i]._Myptr;
    if ( Myptr->BindState.m_bindContext.m_numElements || Myptr->BindState.m_bindSources )
    {
      if ( (Myptr->BindDriver._p->_t.FilterBindFlags & 2) == 0 )
      {
        v11 = p[i]._Myptr->BindState.m_unbindReasons != 0;
        continue;
      }
      if ( v11 )
      {
        if ( Ndis::BindState::SetBinding(&p[i]._Myptr->BindState, BindingDisabled, Reason_MissingModifyingFilter)
          && (unsigned __int8)byte_1C0098763 >= 4u )
        {
          ndisGetBindLinkNameForTracing(p[i]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)&v46);
          if ( (unsigned __int8)byte_1C0098763 >= 4u )
          {
            v38 = 28;
            goto LABEL_47;
          }
        }
      }
      else if ( Ndis::BindState::SetBinding(&p[i]._Myptr->BindState, BindingEnabled, Reason_MissingModifyingFilter)
             && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        ndisGetBindLinkNameForTracing(p[i]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)&v46);
        if ( (unsigned __int8)byte_1C0098763 >= 4u )
        {
          v38 = 27;
LABEL_47:
          WPP_SF_Zq(v38, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v47, v46);
          continue;
        }
      }
    }
  }
  if ( this->Bindings.Miniport.m_unbindReasons )
  {
    v39 = this->Bindings.Filters.m_numElements;
    for ( j = 0LL; j != v39; ++j )
    {
      if ( j >= this->Bindings.Filters.m_numElements )
        __fastfail(5u);
      v41 = this->Bindings.Filters._p;
      if ( Ndis::BindState::SetBinding(
             &v41[j]._Myptr->BindState,
             BindingEnabled,
             Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        ndisGetBindLinkNameForTracing(v41[j]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)&v46);
        if ( (unsigned __int8)byte_1C0098763 >= 4u )
          WPP_SF_Zq(0x19u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v47, v46);
      }
    }
    v42 = this->Bindings.Protocols.m_numElements;
    for ( k = 0LL; k != v42; ++k )
    {
      if ( k >= this->Bindings.Protocols.m_numElements )
        __fastfail(5u);
      v44 = this->Bindings.Protocols._p;
      if ( Ndis::BindState::SetBinding(
             &v44[k]._Myptr->BindState,
             BindingEnabled,
             Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        WPP_SF_Zq(
          0x1Au,
          &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
          &v44[k]._Myptr->BindDriver._p->_t.Name._Myptr->Length,
          v44[k]._Myptr->BindState.Miniport);
      }
    }
  }
  Ndis::BindRules::CheckMissingMandatoryFilter((Ndis::BindRules *)&this->Bindings, v9);
  Ndis::BindRules::CoalesceFilterAttachDuringBoot(
    (Ndis::BindRules *)this,
    (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings,
    v15);
  Ndis::BindRules::UnbindOnAttach((Ndis::BindRules *)&this->Bindings, v16);
  Ndis::BindRules::UnbindOnDetach((Ndis::BindRules *)&this->Bindings, v17);
  LOBYTE(v18) = this->InitMode != 0;
  Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot((Ndis::BindRules *)&this->Bindings, v18, v19);
  Ndis::BindRules::UnbindMiniportStack((Ndis::BindRules *)&this->Bindings, v20);
  Ndis::BindRules::PauseNeededForBind((Ndis::BindRules *)this, (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings, v21);
  v22 = this->Bindings.Filters.m_numElements;
  v23 = 0LL;
  v24 = this->Bindings.Miniport.m_pauseReasons == 0;
  while ( v23 != v22 )
  {
    if ( v23 >= p_Bindings->Filters.m_numElements )
      __fastfail(5u);
    v25 = p_Bindings->Filters._p;
    v26 = v25[v23]._Myptr;
    if ( v26->BindState.m_bindContext.m_numElements )
    {
      m_pauseReasons = v26->BindState.m_pauseReasons;
      if ( v24 )
        v28 = m_pauseReasons & 0xFFFFFFEF;
      else
        v28 = m_pauseReasons | 0x10;
      v26->BindState.m_pauseReasons = v28;
      v29 = v26->BindState.m_pauseReasons;
      if ( (m_pauseReasons != 0) == (v29 != 0) && v26->BindState.Miniport )
      {
        v30 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0098763 >= 5u )
          WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_pauseReasons, v29);
        v26->BindState.Miniport->BindEngine.m_isDirty = 1;
        v30 = 1;
      }
      if ( v30 )
      {
        if ( (unsigned __int8)byte_1C0098763 >= 4u )
        {
          ndisGetBindLinkNameForTracing(v25[v23]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)&v46);
          if ( (unsigned __int8)byte_1C0098763 >= 4u )
            WPP_SF_Zq(0x42u, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v47, v46);
        }
      }
      v24 = v25[v23]._Myptr->BindState.m_pauseReasons == 0;
    }
    ++v23;
  }
  v31 = p_Bindings->Protocols.m_numElements;
  for ( m = 0LL; m != v31; ++m )
  {
    if ( m >= p_Bindings->Protocols.m_numElements )
      __fastfail(5u);
    v33 = p_Bindings->Protocols._p;
    v34 = v33[m]._Myptr;
    v35 = v34->BindState.m_pauseReasons;
    if ( v24 )
      v36 = v35 & 0xFFFFFFEF;
    else
      v36 = v35 | 0x10;
    v34->BindState.m_pauseReasons = v36;
    v37 = v34->BindState.m_pauseReasons;
    if ( (v35 != 0) != (v37 != 0) || !v34->BindState.Miniport )
    {
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v35, v37);
      v45 = (unsigned __int8)byte_1C0098763 < 4u;
      v34->BindState.Miniport->BindEngine.m_isDirty = 1;
      if ( !v45 )
        WPP_SF_Zq(
          0x43u,
          &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
          &v33[m]._Myptr->BindDriver._p->_t.Name._Myptr->Length,
          v33[m]._Myptr->BindState.Miniport);
    }
  }
}
