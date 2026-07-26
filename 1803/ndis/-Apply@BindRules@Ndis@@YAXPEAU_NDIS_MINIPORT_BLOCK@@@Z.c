/*
 * XREFs of ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BBD08
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00B8B64 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BC30C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001A8C4 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
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

void __fastcall Ndis::BindRules::Apply(struct _NDIS_MINIPORT_BLOCK *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct Ndis::BindStack *v3; // rdx
  Ndis::BindStack *p_Bindings; // rbp
  struct _NDIS_MINIPORT_BLOCK *v5; // rdx
  struct Ndis::BindStack *v6; // rdx
  struct Ndis::BindStack *v7; // rdx
  struct _NDIS_MINIPORT_BLOCK *v8; // rdx
  struct Ndis::BindStack *v9; // rdx
  struct Ndis::BindStack *v10; // rdx
  struct Ndis::BindStack *v11; // rdx
  struct Ndis::BindStack *v12; // r8
  struct Ndis::BindStack *v13; // rdx
  struct Ndis::BindStack *v14; // rdx
  struct Ndis::BindStack *v15; // rdx
  bool v16; // r8
  struct Ndis::BindStack *v17; // rdx
  struct Ndis::BindStack *v18; // r8
  __int64 m_numElements; // r15
  unsigned __int64 v20; // rbx
  BOOL v21; // esi
  wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK> > *p; // r14
  NDIS_BIND_FILTER_LINK *Myptr; // rdi
  int m_pauseReasons; // r8d
  int v25; // r9d
  char v26; // al
  __int64 v27; // r15
  unsigned __int64 i; // rbx
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v29; // r14
  NDIS_BIND_PROTOCOL_LINK *v30; // rdi
  int v31; // r8d
  int v32; // r9d
  bool v33; // cf
  _QWORD v34[20]; // [rsp+20h] [rbp-C8h] BYREF

  if ( ndisMDoesMiniportNeedCoNdisNdProxy(this) )
    ndisBindEnumerateProtocolDrivers(lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_, this);
  p_Bindings = &this->Bindings;
  Ndis::BindRules::ReEnableTemporaryUnbind((Ndis::BindRules *)&this->Bindings, v3);
  Ndis::BindRules::ReStartTemporaryPause((Ndis::BindRules *)this, v5);
  Ndis::BindRules::CheckForDriverLoaded((Ndis::BindRules *)&this->Bindings, v6);
  Ndis::BindRules::CheckForVBusDependency((Ndis::BindRules *)&this->Bindings, v7);
  Ndis::BindRules::UnbindIncompatibleDriversForMacChange((Ndis::BindRules *)this, v8);
  Ndis::BindRules::CheckMissingModifyingFilter((Ndis::BindRules *)&this->Bindings, v9);
  Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange((Ndis::BindRules *)&this->Bindings, v10);
  Ndis::BindRules::CheckMissingMandatoryFilter((Ndis::BindRules *)&this->Bindings, v11);
  Ndis::BindRules::CoalesceFilterAttachDuringBoot(
    (Ndis::BindRules *)this,
    (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings,
    v12);
  Ndis::BindRules::UnbindOnAttach((Ndis::BindRules *)&this->Bindings, v13);
  Ndis::BindRules::UnbindOnDetach((Ndis::BindRules *)&this->Bindings, v14);
  LOBYTE(v15) = this->InitMode != 0;
  Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot((Ndis::BindRules *)&this->Bindings, v15, v16);
  Ndis::BindRules::UnbindMiniportStack((Ndis::BindRules *)&this->Bindings, v17);
  Ndis::BindRules::PauseNeededForBind((Ndis::BindRules *)this, (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings, v18);
  m_numElements = this->Bindings.Filters.m_numElements;
  v20 = 0LL;
  v21 = p_Bindings->Miniport.m_pauseReasons == 0;
  while ( v20 != m_numElements )
  {
    if ( v20 >= p_Bindings->Filters.m_numElements )
      __fastfail(5u);
    p = p_Bindings->Filters._p;
    Myptr = p[v20]._Myptr;
    if ( Myptr->BindState.m_bindContext.m_numElements )
    {
      m_pauseReasons = Myptr->BindState.m_pauseReasons;
      if ( v21 )
        v25 = m_pauseReasons & 0xFFFFFFEF;
      else
        v25 = m_pauseReasons | 0x10;
      Myptr->BindState.m_pauseReasons = v25;
      if ( (m_pauseReasons != 0) == (v25 != 0) && Myptr->BindState.Miniport )
      {
        v26 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0099623 >= 5u )
          WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, m_pauseReasons, v25);
        Myptr->BindState.Miniport->BindEngine.m_isDirty = 1;
        v26 = 1;
      }
      if ( v26 && (unsigned __int8)byte_1C0099623 >= 4u )
      {
        ndisGetBindLinkNameForTracing(p[v20]._Myptr, (struct NDIS_PNPTRACE_LOCALS *)v34);
        if ( (unsigned __int8)byte_1C0099623 >= 4u )
          WPP_SF_Zq(0x42u, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v34[1], v34[0]);
      }
      v21 = p[v20]._Myptr->BindState.m_pauseReasons == 0;
    }
    ++v20;
  }
  v27 = p_Bindings->Protocols.m_numElements;
  for ( i = 0LL; i != v27; ++i )
  {
    if ( i >= p_Bindings->Protocols.m_numElements )
      __fastfail(5u);
    v29 = p_Bindings->Protocols._p;
    v30 = v29[i]._Myptr;
    v31 = v30->BindState.m_pauseReasons;
    if ( v21 )
      v32 = v31 & 0xFFFFFFEF;
    else
      v32 = v31 | 0x10;
    v30->BindState.m_pauseReasons = v32;
    if ( (v31 != 0) != (v32 != 0) || !v30->BindState.Miniport )
    {
      if ( (unsigned __int8)byte_1C0099623 >= 5u )
        WPP_SF_dd(0xFu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v31, v32);
      v33 = (unsigned __int8)byte_1C0099623 < 4u;
      v30->BindState.Miniport->BindEngine.m_isDirty = 1;
      if ( !v33 )
        WPP_SF_Zq(
          0x43u,
          &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
          &v29[i]._Myptr->BindDriver._p->_t.Name._Myptr->Length,
          v29[i]._Myptr->BindState.Miniport);
    }
  }
}
