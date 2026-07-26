/*
 * XREFs of ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BAFC4 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00059D0 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C000F2B0 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C000F370 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ndisMBeginNormalMode @ 0x1C001EBBC (ndisMBeginNormalMode.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007547C (WPP_SF_DZq.c)
 *     ?CheckRegistryForFilterBindLogicMode@BindRegistry@Ndis@@YAKXZ @ 0x1C00AA080 (-CheckRegistryForFilterBindLogicMode@BindRegistry@Ndis@@YAKXZ.c)
 *     ?eraseAt@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAAX_K@Z @ 0x1C00AA7BC (-eraseAt@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AAD20 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00AB254 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00B12D8 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00B5798 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00BA9E4 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAF88 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ??A?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAAAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@_K@Z @ 0x1C00BBF78 (--A-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wis.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC16C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ??1NDIS_RESTART_INFORMATION@@QEAA@XZ @ 0x1C00BDC1C (--1NDIS_RESTART_INFORMATION@@QEAA@XZ.c)
 *     ??1KLockThisExclusive@@QEAA@XZ @ 0x1C00BDC70 (--1KLockThisExclusive@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDC84 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00BDD30 (ndisUpdateNoPauseOnSuspend.c)
 *     ndisUpdateMinimumStackVersion @ 0x1C00BDDB8 (ndisUpdateMinimumStackVersion.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00BF7E0 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00BFB08 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00C2F68 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00C3C08 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?IsAlive@BindState@Ndis@@QEBA_NXZ @ 0x1C00DA2BC (-IsAlive@BindState@Ndis@@QEBA_NXZ.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0105224 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall Ndis::BindEngine::Iterate(Ndis::BindEngine *this)
{
  char v1; // si
  _NDIS_MINIPORT_BLOCK *m_miniport; // rbx
  struct _NDIS_MINIPORT_BLOCK *v4; // rdx
  bool m_isDirty; // al
  char v6; // bl
  _NDIS_MINIPORT_BLOCK *v7; // rcx
  unsigned __int64 v8; // rbx
  Ndis::BindStack *p_Bindings; // rdi
  __int64 m_numElements; // r12
  NDIS_BIND_PROTOCOL_LINK *Myptr; // rcx
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  bool v13; // al
  char v14; // r15
  _NDIS_MINIPORT_BLOCK *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  struct _NDIS_MINIPORT_BLOCK *v19; // rdx
  bool v20; // al
  char v21; // di
  _NDIS_MINIPORT_BLOCK *v22; // rcx
  _NDIS_MINIPORT_BLOCK *v23; // rdi
  unsigned int v24; // edx
  struct _NDIS_MINIPORT_BLOCK *v25; // rdx
  bool v26; // al
  char v27; // bl
  _NDIS_MINIPORT_BLOCK *v28; // rcx
  _NDIS_MINIPORT_BLOCK *v29; // r12
  unsigned __int64 v30; // r15
  __int64 v31; // rax
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // rdi
  Ndis::BindState *p_BindState; // rbx
  int m_bindSources; // r8d
  unsigned __int16 v35; // cx
  bool v36; // cf
  NDIS_BIND_LINK_BASE *m_currentOperation; // rdi
  _NDIS_MINIPORT_BLOCK *v38; // r13
  struct _NDIS_MINIPORT_BLOCK *v39; // rdx
  bool v40; // al
  char v41; // bl
  _NDIS_MINIPORT_BLOCK *v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rax
  NDIS_BIND_LINK_BASE *v45; // rcx
  struct _NDIS_MINIPORT_BLOCK *v46; // rdx
  bool v47; // al
  char v48; // di
  _NDIS_MINIPORT_BLOCK *v49; // rcx
  __int64 v50; // rdi
  KPushLockBase *m_Lock; // r12
  __int64 v52; // rax
  NDIS_BIND_LINK_BASE *v53; // rcx
  struct _NDIS_MINIPORT_BLOCK *v54; // rdx
  bool v55; // al
  char v56; // bl
  _NDIS_MINIPORT_BLOCK *v57; // rcx
  _NDIS_MINIPORT_BLOCK *v58; // rdi
  unsigned __int64 v59; // rbx
  __int64 v60; // r13
  NDIS_BIND_LINK_BASE *v61; // rcx
  struct _NDIS_MINIPORT_BLOCK *v62; // rdx
  bool v63; // al
  char v64; // r15
  _NDIS_MINIPORT_BLOCK *v65; // rcx
  _NDIS_MINIPORT_BLOCK *v66; // rbx
  struct _NDIS_MINIPORT_BLOCK *v67; // rdx
  bool v68; // al
  char v69; // bl
  _NDIS_MINIPORT_BLOCK *v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rcx
  struct _NDIS_MINIPORT_BLOCK *v74; // rdx
  bool v75; // al
  char v76; // bl
  _NDIS_MINIPORT_BLOCK *v77; // rcx
  _NDIS_MINIPORT_BLOCK *v78; // rdi
  unsigned __int64 v79; // rbx
  __int64 v80; // rax
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v81; // r13
  NDIS_BIND_PROTOCOL_LINK *v82; // rax
  struct _NDIS_MINIPORT_BLOCK *v83; // rdx
  bool v84; // al
  char v85; // r15
  _NDIS_MINIPORT_BLOCK *v86; // rcx
  NDIS_BIND_PROTOCOL_LINK *v87; // rax
  _NDIS_MINIPORT_BLOCK *v88; // rbx
  _NDIS_MINIPORT_BLOCK *v89; // rbx
  Ndis::BindRegistry *v90; // rcx
  _NDIS_MINIPORT_BLOCK *v91; // rdi
  unsigned __int64 i; // rbx
  Ndis::BindState **v93; // rax
  unsigned __int64 v94; // rdx
  KLockHolder v96; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v97; // [rsp+50h] [rbp-B8h]
  struct NDIS_RESTART_INFORMATION v98; // [rsp+58h] [rbp-B0h] BYREF

  v1 = 0;
  *(_QWORD *)&v98.FilterInstanceBuffer.m_bufferSize = 0LL;
  v98.FilterInstanceBuffer._p = 0LL;
  memset(&v98, 0, 104);
  memset(&v98.RssCaps, 0, sizeof(v98.RssCaps));
  memset(&v98.ProtocolParameters, 0, 60);
  v96.m_Lock = &this->m_lock;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v96.m_Lock, 0LL);
  this->m_isDirty = 0;
  ExReleasePushLockExclusiveEx(&this->m_lock, 0LL);
  KeLeaveCriticalRegion();
  m_miniport = this->m_miniport;
  if ( this->m_miniport->InitMode && m_miniport->InitModeNotNeededAnymore )
  {
    ndisMBeginNormalMode((__int64)this->m_miniport);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&m_miniport->BindEngine.m_lock, 0LL);
    m_miniport->BindEngine.m_isDirty = 1;
    Ndis::BindEngine::EndPolicyUpdates(&m_miniport->BindEngine);
  }
  KeEnterCriticalRegion();
  v96.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&this->m_lock, 0LL);
  m_isDirty = this->m_isDirty;
  v6 = 0;
  v96.m_State = Exclusive;
  this->m_currentOperation = 0LL;
  do
  {
    v7 = this->m_miniport;
    v6 |= m_isDirty;
    this->m_isDirty = 0;
    Ndis::BindRules::Apply((Ndis::BindRules *)v7, v4);
    m_isDirty = this->m_isDirty;
  }
  while ( m_isDirty );
  this->m_isDirty = v6;
  if ( v6 )
    goto LABEL_126;
  v8 = 0LL;
  p_Bindings = &this->m_miniport->Bindings;
  m_numElements = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v8 != m_numElements )
  {
    if ( v8 >= p_Bindings->Protocols.m_numElements )
      __fastfail(5u);
    Myptr = p_Bindings->Protocols._p[v8]._Myptr;
    if ( Myptr->BindState.PretendBindingActive || Myptr->BindState.m_bindContext.m_numElements )
    {
      if ( Myptr->BindState.m_pauseReasons )
      {
        if ( Myptr->BindState.m_actualPauseState == DatapathRunning )
        {
          this->m_currentOperation = (NDIS_BIND_LINK_BASE *)Myptr;
          KLockHolder::ReleaseExclusive(&v96);
          ndisPauseProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v96);
          v13 = this->m_isDirty;
          v14 = 0;
          this->m_currentOperation = 0LL;
          do
          {
            v15 = this->m_miniport;
            v14 |= v13;
            this->m_isDirty = 0;
            Ndis::BindRules::Apply((Ndis::BindRules *)v15, v12);
            v13 = this->m_isDirty;
          }
          while ( v13 );
          this->m_isDirty = v14;
          if ( v14 )
            goto LABEL_126;
        }
      }
    }
    ++v8;
  }
  v16 = this->m_miniport->Bindings.Filters.m_numElements;
  while ( v16 )
  {
    v17 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::operator[](
            &this->m_miniport->Bindings.Filters,
            --v16);
    v18 = *(_QWORD *)v17;
    if ( *(_BYTE *)(*(_QWORD *)v17 + 9LL) || *(_DWORD *)(v18 + 52) )
    {
      if ( *(_DWORD *)(v18 + 36) )
      {
        if ( *(_DWORD *)(v18 + 40) == 1 )
        {
          this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v18;
          KLockHolder::ReleaseExclusive(&v96);
          ndisPauseFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v96);
          v20 = this->m_isDirty;
          v21 = 0;
          this->m_currentOperation = 0LL;
          do
          {
            v22 = this->m_miniport;
            v21 |= v20;
            this->m_isDirty = 0;
            Ndis::BindRules::Apply((Ndis::BindRules *)v22, v19);
            v20 = this->m_isDirty;
          }
          while ( v20 );
          this->m_isDirty = v21;
          if ( v21 )
            goto LABEL_126;
        }
      }
    }
  }
  if ( this->m_miniport->Bindings.Miniport.m_pauseReasons
    && this->m_miniport->Bindings.Miniport.m_actualPauseState == DatapathRunning )
  {
    KLockHolder::ReleaseExclusive(&v96);
    v23 = this->m_miniport;
    if ( (unsigned __int8)byte_1C0098763 >= 4u )
      WPP_SF_q(0xDu, &WPP_2c3eed846bc9384776062be0ec19a269_Traceguids, (__int64)this->m_miniport);
    ndisReferencePackage((__int64)&ndisPkgs);
    ndisMPauseMiniportInner(v23, v24);
    ndisDereferencePackage((__int64)&ndisPkgs);
    if ( (unsigned __int8)byte_1C0098763 >= 4u )
      WPP_SF_q(0xEu, &WPP_2c3eed846bc9384776062be0ec19a269_Traceguids, (__int64)v23);
    Ndis::BindEngine::BeginPolicyUpdates(&v23->BindEngine);
    v23->Bindings.Miniport.m_actualPauseState = DatapathPaused;
    Ndis::BindEngine::EndPolicyUpdates(&v23->BindEngine);
    KLockHolder::AcquireExclusive(&v96);
    v26 = this->m_isDirty;
    v27 = 0;
    this->m_currentOperation = 0LL;
    do
    {
      v28 = this->m_miniport;
      v27 |= v26;
      this->m_isDirty = 0;
      Ndis::BindRules::Apply((Ndis::BindRules *)v28, v25);
      v26 = this->m_isDirty;
    }
    while ( v26 );
    this->m_isDirty = v27;
    if ( v27 )
    {
LABEL_126:
      v1 = 1;
      goto LABEL_127;
    }
  }
  v29 = this->m_miniport;
  v30 = 0LL;
  v31 = this->m_miniport->Bindings.Protocols.m_numElements;
  v97 = v31;
  while ( v30 != v31 )
  {
    if ( v30 >= v29->Bindings.Protocols.m_numElements )
      __fastfail(5u);
    p = v29->Bindings.Protocols._p;
    p_BindState = &p[v30]._Myptr->BindState;
    if ( !p_BindState->m_unbindReasons
      || !p_BindState->PretendBindingActive && !p_BindState->m_bindContext.m_numElements )
    {
      goto LABEL_64;
    }
    m_bindSources = p_BindState->m_bindSources;
    p_BindState->m_bindSources = m_bindSources & 0xFFFFFFFB;
    if ( (m_bindSources != 0) != ((m_bindSources & 0xFFFFFFFB) != 0) )
    {
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFB);
      if ( p_BindState->m_bindSources )
      {
        if ( Ndis::BindState::SetBinding(p_BindState, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
          && (unsigned __int8)byte_1C0098763 >= 4u )
        {
          WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, p_BindState->m_bindSources, 0LL, 0LL);
        }
        if ( Ndis::BindState::SetBinding(
               p_BindState,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
          && (unsigned __int8)byte_1C0098763 >= 4u )
        {
          v35 = 12;
          goto LABEL_56;
        }
      }
      else if ( Ndis::BindState::SetBinding(p_BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
             && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        v35 = 13;
LABEL_56:
        WPP_SF_Zq(v35, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
      }
      v36 = (unsigned __int8)byte_1C0098763 < 4u;
      p_BindState->Miniport->BindEngine.m_isDirty = 1;
      if ( !v36 )
        WPP_SF_Zq(
          0xAu,
          &WPP_3377ebe788883e87541e6391b8d6bd11_Traceguids,
          &p[v30]._Myptr->BindDriver._p->_t.Name._Myptr->Length,
          p[v30]._Myptr->BindState.Miniport);
    }
    this->m_currentOperation = (NDIS_BIND_LINK_BASE *)p[v30];
    KLockHolder::ReleaseExclusive(&v96);
    m_currentOperation = this->m_currentOperation;
    v38 = this->m_miniport;
    if ( *((_BYTE *)m_currentOperation[1].BindState.Miniport->Reserved4.Buffer + 56) < 6u )
    {
      Ndis::BindEngine::BeginPolicyUpdates(&v38->BindEngine);
      m_currentOperation->BindState.m_actualPauseState = DatapathPaused;
      Ndis::BindEngine::EndPolicyUpdates(&v38->BindEngine);
    }
    m_currentOperation->BindState.PretendBindingActive = 0;
    ndisUnbindEachProtocolOpenOnMiniport(v38, (struct NDIS_BIND_PROTOCOL_LINK *)m_currentOperation);
    KLockHolder::AcquireExclusive(&v96);
    v40 = this->m_isDirty;
    v41 = 0;
    this->m_currentOperation = 0LL;
    do
    {
      v42 = this->m_miniport;
      v41 |= v40;
      this->m_isDirty = 0;
      Ndis::BindRules::Apply((Ndis::BindRules *)v42, v39);
      v40 = this->m_isDirty;
    }
    while ( v40 );
    this->m_isDirty = v41;
    if ( v41 )
      goto LABEL_126;
LABEL_64:
    v31 = v97;
    ++v30;
  }
  v43 = this->m_miniport->Bindings.Filters.m_numElements;
  while ( v43 )
  {
    v44 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::operator[](
            &this->m_miniport->Bindings.Filters,
            --v43);
    v45 = *(NDIS_BIND_LINK_BASE **)v44;
    if ( *(_DWORD *)(*(_QWORD *)v44 + 32LL)
      && (v45->BindState.PretendBindingActive || v45->BindState.m_bindContext.m_numElements) )
    {
      this->m_currentOperation = v45;
      KLockHolder::ReleaseExclusive(&v96);
      ndisDetachFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
      KLockHolder::AcquireExclusive(&v96);
      v47 = this->m_isDirty;
      v48 = 0;
      this->m_currentOperation = 0LL;
      do
      {
        v49 = this->m_miniport;
        v48 |= v47;
        this->m_isDirty = 0;
        Ndis::BindRules::Apply((Ndis::BindRules *)v49, v46);
        v47 = this->m_isDirty;
      }
      while ( v47 );
      this->m_isDirty = v48;
      if ( v48 )
        goto LABEL_126;
    }
  }
  v50 = 0LL;
  m_Lock = v96.m_Lock;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    do
    {
      v52 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::operator[](
              &this->m_miniport->Bindings.Filters,
              v50);
      v53 = *(NDIS_BIND_LINK_BASE **)v52;
      if ( !*(_DWORD *)(*(_QWORD *)v52 + 32LL)
        && !v53->BindState.PretendBindingActive
        && !v53->BindState.m_bindContext.m_numElements )
      {
        this->m_currentOperation = v53;
        ExReleasePushLockExclusiveEx(m_Lock, 0LL);
        KeLeaveCriticalRegion();
        ndisAttachFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
        KeEnterCriticalRegion();
        v96.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(m_Lock, 0LL);
        v55 = this->m_isDirty;
        v56 = 0;
        v96.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        do
        {
          v57 = this->m_miniport;
          v56 |= v55;
          this->m_isDirty = 0;
          Ndis::BindRules::Apply((Ndis::BindRules *)v57, v54);
          v55 = this->m_isDirty;
        }
        while ( v55 );
        this->m_isDirty = v56;
        if ( v56 )
          goto LABEL_126;
      }
    }
    while ( ++v50 < (unsigned __int64)this->m_miniport->Bindings.Filters.m_numElements );
  }
  v58 = this->m_miniport;
  v59 = 0LL;
  v60 = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v59 != v60 )
  {
    if ( v59 >= v58->Bindings.Protocols.m_numElements )
      __fastfail(5u);
    v61 = &v58->Bindings.Protocols._p[v59]._Myptr->NDIS_BIND_LINK_BASE;
    if ( !v61->BindState.m_unbindReasons
      && !v61->BindState.PretendBindingActive
      && !v61->BindState.m_bindContext.m_numElements )
    {
      this->m_currentOperation = v61;
      ExReleasePushLockExclusiveEx(m_Lock, 0LL);
      KeLeaveCriticalRegion();
      ndisBindProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation);
      KeEnterCriticalRegion();
      v96.m_Region.m_Entered = 1;
      ExAcquirePushLockExclusiveEx(m_Lock, 0LL);
      v63 = this->m_isDirty;
      v64 = 0;
      v96.m_State = Exclusive;
      this->m_currentOperation = 0LL;
      do
      {
        v65 = this->m_miniport;
        v64 |= v63;
        this->m_isDirty = 0;
        Ndis::BindRules::Apply((Ndis::BindRules *)v65, v62);
        v63 = this->m_isDirty;
      }
      while ( v63 );
      this->m_isDirty = v64;
      if ( v64 )
        goto LABEL_126;
    }
    ++v59;
  }
  v66 = this->m_miniport;
  ndisUpdateMinimumStackVersion(this->m_miniport, 0LL, 0LL);
  ndisUpdateNoPauseOnSuspend(v66);
  if ( !this->m_miniport->Bindings.Miniport.m_pauseReasons
    && this->m_miniport->Bindings.Miniport.m_actualPauseState == DatapathPaused )
  {
    KLockHolder::ReleaseExclusive(&v96);
    ndisMRestartMiniport(this->m_miniport, &v98);
    KLockHolder::AcquireExclusive(&v96);
    v68 = this->m_isDirty;
    v69 = 0;
    this->m_currentOperation = 0LL;
    do
    {
      v70 = this->m_miniport;
      v69 |= v68;
      this->m_isDirty = 0;
      Ndis::BindRules::Apply((Ndis::BindRules *)v70, v67);
      v68 = this->m_isDirty;
    }
    while ( v68 );
    this->m_isDirty = v69;
    if ( v69 )
      goto LABEL_126;
    m_Lock = v96.m_Lock;
  }
  ndisPostProcessRestartParametersAfterMiniport(this->m_miniport, &v98);
  v71 = 0LL;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    do
    {
      v72 = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::operator[](
              &this->m_miniport->Bindings.Filters,
              v71);
      v73 = *(_QWORD *)v72;
      if ( (*(_BYTE *)(*(_QWORD *)v72 + 9LL) || *(_DWORD *)(v73 + 52))
        && !*(_DWORD *)(v73 + 36)
        && !*(_DWORD *)(v73 + 40) )
      {
        this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v73;
        ExReleasePushLockExclusiveEx(m_Lock, 0LL);
        KeLeaveCriticalRegion();
        ndisRestartFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation, &v98);
        KeEnterCriticalRegion();
        v96.m_Region.m_Entered = 1;
        ExAcquirePushLockExclusiveEx(m_Lock, 0LL);
        v75 = this->m_isDirty;
        v76 = 0;
        v96.m_State = Exclusive;
        this->m_currentOperation = 0LL;
        do
        {
          v77 = this->m_miniport;
          v76 |= v75;
          this->m_isDirty = 0;
          Ndis::BindRules::Apply((Ndis::BindRules *)v77, v74);
          v75 = this->m_isDirty;
        }
        while ( v75 );
        this->m_isDirty = v76;
        if ( v76 )
          goto LABEL_126;
      }
    }
    while ( ++v71 < (unsigned __int64)this->m_miniport->Bindings.Filters.m_numElements );
  }
  ndisPostProcessRestartParametersAfterFilters(this->m_miniport, &v98);
  v78 = this->m_miniport;
  v79 = 0LL;
  v80 = this->m_miniport->Bindings.Protocols.m_numElements;
  v97 = v80;
  while ( v79 != v80 )
  {
    if ( v79 >= v78->Bindings.Protocols.m_numElements )
      __fastfail(5u);
    v81 = v78->Bindings.Protocols._p;
    v82 = v81[v79]._Myptr;
    if ( (v82->BindState.PretendBindingActive || v82->BindState.m_bindContext.m_numElements)
      && !v82->BindState.m_pauseReasons
      && v82->BindState.m_actualPauseState == DatapathPaused )
    {
      this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v82;
      ExReleasePushLockExclusiveEx(m_Lock, 0LL);
      KeLeaveCriticalRegion();
      ndisRestartProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation, &v98);
      KeEnterCriticalRegion();
      v96.m_Region.m_Entered = 1;
      ExAcquirePushLockExclusiveEx(m_Lock, 0LL);
      v84 = this->m_isDirty;
      v85 = 0;
      v96.m_State = Exclusive;
      this->m_currentOperation = 0LL;
      do
      {
        v86 = this->m_miniport;
        v85 |= v84;
        this->m_isDirty = 0;
        Ndis::BindRules::Apply((Ndis::BindRules *)v86, v83);
        v84 = this->m_isDirty;
      }
      while ( v84 );
      this->m_isDirty = v85;
      if ( v85 )
        goto LABEL_126;
    }
    v87 = v81[v79++]._Myptr;
    v87->BindState.m_AdditionalContext = 0LL;
    v80 = v97;
  }
  ndisPostProcessRestartParametersAfterProtocols(this->m_miniport, &v98);
  v88 = this->m_miniport;
  ndisUpdateMinimumStackVersion(this->m_miniport, 0LL, 0LL);
  ndisUpdateNoPauseOnSuspend(v88);
  v89 = this->m_miniport;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&v89->MiniportOwner.m_lock, 0LL);
  v89->MiniportOwner.m_owner = MiniportNotOwned;
  KeSetEvent(&v89->MiniportOwner.m_isUnowned.m_event, 0, 0);
  ExReleasePushLockExclusiveEx(&v89->MiniportOwner.m_lock, 0LL);
  KeLeaveCriticalRegion();
  if ( (unsigned int)Ndis::BindRegistry::CheckRegistryForFilterBindLogicMode(v90) == 1 )
  {
    v91 = this->m_miniport;
    for ( i = 0LL; i < v91->Bindings.Filters.m_numElements; ++i )
    {
      v93 = (Ndis::BindState **)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::operator[](
                                  &v91->Bindings.Filters,
                                  i);
      if ( !Ndis::BindState::IsAlive(*v93) )
      {
        Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::eraseAt(
          (__int64)&v91->Bindings.Filters,
          v94);
        --i;
      }
    }
  }
  ExReleasePushLockExclusiveEx(m_Lock, 0LL);
  v96.m_State = Unlocked;
  v96.m_Region.m_Entered = 0;
  KeLeaveCriticalRegion();
LABEL_127:
  KLockThisExclusive::~KLockThisExclusive((KLockThisExclusive *)&v96);
  NDIS_RESTART_INFORMATION::~NDIS_RESTART_INFORMATION(&v98);
  return v1;
}
