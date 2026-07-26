/*
 * XREFs of ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00B2BA4
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00B2AEC (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0016BE4 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0016CA4 (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ?ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0016E58 (-ndisPostProcessRestartParametersAfterMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 *     ndisMBeginNormalMode @ 0x1C00233C8 (ndisMBeginNormalMode.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     WPP_SF_DZq @ 0x1C007391C (WPP_SF_DZq.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00AB4E4 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00AF730 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00AF8D8 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00AFD6C (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00B202C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B2734 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00B338C (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x1C00B36A4 (-GetActualBindingState@BindState@Ndis@@QEAA-AW4BINDING_ENABLED_OR_DISABLED@@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B4FFC (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B50E4 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00B5B80 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00B7B68 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BBD34 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00BF038 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BF54C (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00F6BC8 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall Ndis::BindEngine::Iterate(Ndis::BindEngine *this)
{
  _NDIS_MINIPORT_BLOCK *m_miniport; // rsi
  char v3; // di
  struct _NDIS_MINIPORT_BLOCK *v4; // rdx
  bool m_isDirty; // al
  char v6; // si
  struct _NDIS_MINIPORT_BLOCK *v7; // rcx
  _NDIS_MINIPORT_BLOCK *v8; // rsi
  unsigned int v9; // r14d
  unsigned int m_numElements; // r15d
  NDIS_BIND_PROTOCOL_LINK *Myptr; // rcx
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  NDIS_BIND_FILTER_LINK *v14; // rcx
  Ndis::BindStack *p_Bindings; // r15
  unsigned int v16; // r12d
  unsigned int v17; // eax
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *p; // r13
  Ndis::BindState *p_BindState; // rsi
  __int64 v20; // rsi
  unsigned __int64 v21; // r14
  NDIS_BIND_FILTER_LINK *v22; // rcx
  unsigned __int64 v23; // rsi
  NDIS_BIND_FILTER_LINK *v24; // rcx
  _NDIS_MINIPORT_BLOCK *v25; // rsi
  unsigned int v26; // r14d
  unsigned int v27; // r15d
  NDIS_BIND_LINK_BASE *v28; // rcx
  unsigned __int64 v30; // rsi
  NDIS_BIND_FILTER_LINK *v31; // rcx
  _NDIS_MINIPORT_BLOCK *v32; // rsi
  unsigned int v33; // r14d
  unsigned int v34; // r13d
  wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK> > *v35; // r12
  NDIS_BIND_PROTOCOL_LINK *v36; // rax
  NDIS_BIND_PROTOCOL_LINK *v37; // rax
  NDIS_BIND_LINK_BASE *v38; // rcx
  _NDIS_MINIPORT_BLOCK *v39; // rsi
  unsigned int v40; // edx
  int m_bindSources; // r8d
  NDIS_BIND_LINK_BASE *m_currentOperation; // rsi
  _NDIS_MINIPORT_BLOCK *v43; // r14
  unsigned __int16 v44; // cx
  bool v45; // cf
  KLockHolder v46; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v47; // [rsp+50h] [rbp-B8h]
  struct NDIS_RESTART_INFORMATION v48; // [rsp+58h] [rbp-B0h] BYREF

  *(_QWORD *)&v48.FilterInstanceBuffer.m_bufferSize = 0LL;
  v48.FilterInstanceBuffer._p = 0LL;
  memset(&v48, 0, 104);
  memset(&v48.RssCaps, 0, sizeof(v48.RssCaps));
  memset(&v48.ProtocolParameters, 0, 60);
  v46.m_Lock = &this->m_lock;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v46.m_Lock, 0LL);
  this->m_isDirty = 0;
  ExReleasePushLockExclusiveEx(&this->m_lock, 0LL);
  KeLeaveCriticalRegion();
  m_miniport = this->m_miniport;
  v3 = 1;
  if ( this->m_miniport->InitMode && m_miniport->InitModeNotNeededAnymore )
  {
    ndisMBeginNormalMode((__int64)this->m_miniport);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&m_miniport->BindEngine.m_lock, 0LL);
    m_miniport->BindEngine.m_isDirty = 1;
    Ndis::BindEngine::EndPolicyUpdates(&m_miniport->BindEngine);
  }
  KeEnterCriticalRegion();
  v46.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&this->m_lock, 0LL);
  m_isDirty = this->m_isDirty;
  v6 = 0;
  v46.m_State = Exclusive;
  this->m_currentOperation = 0LL;
  do
  {
    v7 = this->m_miniport;
    v6 |= m_isDirty;
    this->m_isDirty = 0;
    Ndis::BindRules::Apply(v7, v4);
    m_isDirty = this->m_isDirty;
  }
  while ( m_isDirty );
  this->m_isDirty = v6;
  if ( v6 )
    goto LABEL_53;
  v8 = this->m_miniport;
  v9 = 0;
  m_numElements = this->m_miniport->Bindings.Protocols.m_numElements;
  while ( v9 != m_numElements )
  {
    if ( v9 >= (unsigned __int64)v8->Bindings.Protocols.m_numElements )
      __fastfail(0xBAD0FFu);
    Myptr = v8->Bindings.Protocols._p[v9]._Myptr;
    if ( Myptr->BindState.PretendBindingActive || Myptr->BindState.m_bindContext.m_numElements )
    {
      if ( Myptr->BindState.m_pauseReasons )
      {
        if ( Myptr->BindState.m_actualPauseState == DatapathRunning )
        {
          this->m_currentOperation = (NDIS_BIND_LINK_BASE *)Myptr;
          KLockHolder::ReleaseExclusive(&v46);
          ndisPauseProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v46);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            goto LABEL_53;
        }
      }
    }
    ++v9;
  }
  v12 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v13 = v12 - 1;
    do
    {
      if ( v13 >= this->m_miniport->Bindings.Filters.m_numElements )
        __fastfail(0xBAD0FFu);
      v14 = this->m_miniport->Bindings.Filters._p[v13]._Myptr;
      if ( v14->BindState.PretendBindingActive || v14->BindState.m_bindContext.m_numElements )
      {
        if ( v14->BindState.m_pauseReasons )
        {
          if ( v14->BindState.m_actualPauseState == DatapathRunning )
          {
            this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v14;
            KLockHolder::ReleaseExclusive(&v46);
            ndisPauseFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
            KLockHolder::AcquireExclusive(&v46);
            this->m_currentOperation = 0LL;
            Ndis::BindEngine::ApplyRules(this);
            if ( this->m_isDirty )
              goto LABEL_53;
          }
        }
      }
      --v13;
      --v12;
    }
    while ( v12 );
  }
  if ( this->m_miniport->Bindings.Miniport.m_pauseReasons
    && this->m_miniport->Bindings.Miniport.m_actualPauseState == DatapathRunning )
  {
    KLockHolder::ReleaseExclusive(&v46);
    v39 = this->m_miniport;
    if ( (unsigned __int8)byte_1C0092623 >= 4u )
      WPP_SF_q(0xDu, &WPP_13438080fb613be0f003217e669c8259_Traceguids, (__int64)this->m_miniport);
    ndisReferencePackage((__int64)&ndisPkgs);
    ndisMPauseMiniportInner(v39, v40);
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    if ( (unsigned __int8)byte_1C0092623 >= 4u )
      WPP_SF_q(0xEu, &WPP_13438080fb613be0f003217e669c8259_Traceguids, (__int64)v39);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&v39->BindEngine.m_lock, 0LL);
    v39->Bindings.Miniport.m_actualPauseState = DatapathPaused;
    Ndis::BindEngine::EndPolicyUpdates(&v39->BindEngine);
    KLockHolder::AcquireExclusive(&v46);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( this->m_isDirty )
      goto LABEL_53;
  }
  p_Bindings = &this->m_miniport->Bindings;
  v16 = 0;
  v17 = this->m_miniport->Bindings.Protocols.m_numElements;
  v47 = v17;
  while ( v16 != v17 )
  {
    if ( v16 >= (unsigned __int64)p_Bindings->Protocols.m_numElements )
      __fastfail(0xBAD0FFu);
    p = p_Bindings->Protocols._p;
    p_BindState = &p[v16]._Myptr->BindState;
    if ( !p_BindState->m_unbindReasons
      || !p_BindState->PretendBindingActive && !p_BindState->m_bindContext.m_numElements )
    {
      goto LABEL_31;
    }
    m_bindSources = p_BindState->m_bindSources;
    p_BindState->m_bindSources = m_bindSources & 0xFFFFFFFB;
    if ( (m_bindSources != 0) != ((m_bindSources & 0xFFFFFFFB) != 0) )
    {
      if ( (unsigned __int8)byte_1C0092623 >= 5u )
        WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFB);
      if ( p_BindState->m_bindSources )
      {
        if ( Ndis::BindState::SetBinding(p_BindState, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
          && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, p_BindState->m_bindSources, 0LL, 0LL);
        }
        if ( Ndis::BindState::SetBinding(
               p_BindState,
               BindingEnabled,
               Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
          && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          v44 = 12;
          goto LABEL_115;
        }
      }
      else if ( Ndis::BindState::SetBinding(p_BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
             && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        v44 = 13;
LABEL_115:
        WPP_SF_Zq(v44, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
      }
      v45 = (unsigned __int8)byte_1C0092623 < 4u;
      p_BindState->Miniport->BindEngine.m_isDirty = 1;
      if ( !v45 )
        WPP_SF_Zq(
          0xAu,
          &WPP_03e361cb92a83bde9a2acafdc35d9f77_Traceguids,
          &p[v16]._Myptr->BindDriver._p->_t.Name._Myptr->Length,
          p[v16]._Myptr->BindState.Miniport);
    }
    this->m_currentOperation = (NDIS_BIND_LINK_BASE *)p[v16];
    KLockHolder::ReleaseExclusive(&v46);
    m_currentOperation = this->m_currentOperation;
    v43 = this->m_miniport;
    if ( *((_BYTE *)m_currentOperation[1].BindState.Miniport->Reserved28 + 56) < 6u )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(&v43->BindEngine.m_lock, 0LL);
      m_currentOperation->BindState.m_actualPauseState = DatapathPaused;
      Ndis::BindEngine::EndPolicyUpdates(&v43->BindEngine);
    }
    m_currentOperation->BindState.PretendBindingActive = 0;
    ndisUnbindEachProtocolOpenOnMiniport(v43, (struct NDIS_BIND_PROTOCOL_LINK *)m_currentOperation);
    KLockHolder::AcquireExclusive(&v46);
    this->m_currentOperation = 0LL;
    Ndis::BindEngine::ApplyRules(this);
    if ( this->m_isDirty )
      goto LABEL_53;
LABEL_31:
    v17 = v47;
    ++v16;
  }
  v20 = this->m_miniport->Bindings.Filters.m_numElements;
  if ( this->m_miniport->Bindings.Filters.m_numElements )
  {
    v21 = v20 - 1;
    while ( 1 )
    {
      if ( v21 >= this->m_miniport->Bindings.Filters.m_numElements )
        __fastfail(0xBAD0FFu);
      v22 = this->m_miniport->Bindings.Filters._p[v21]._Myptr;
      if ( v22->BindState.m_unbindReasons )
      {
        if ( Ndis::BindState::GetActualBindingState(&v22->BindState) == BindingEnabled )
        {
          this->m_currentOperation = v38;
          KLockHolder::ReleaseExclusive(&v46);
          ndisDetachFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v46);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            break;
        }
      }
      --v21;
      if ( !--v20 )
        goto LABEL_37;
    }
  }
  else
  {
LABEL_37:
    v23 = 0LL;
    if ( this->m_miniport->Bindings.Filters.m_numElements )
    {
      while ( 1 )
      {
        if ( v23 >= this->m_miniport->Bindings.Filters.m_numElements )
          __fastfail(0xBAD0FFu);
        v24 = this->m_miniport->Bindings.Filters._p[v23]._Myptr;
        if ( !v24->BindState.m_unbindReasons
          && !v24->BindState.PretendBindingActive
          && !v24->BindState.m_bindContext.m_numElements )
        {
          this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v24;
          KLockHolder::ReleaseExclusive(&v46);
          ndisAttachFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v46);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            break;
        }
        if ( ++v23 >= this->m_miniport->Bindings.Filters.m_numElements )
          goto LABEL_43;
      }
    }
    else
    {
LABEL_43:
      v25 = this->m_miniport;
      v26 = 0;
      v27 = this->m_miniport->Bindings.Protocols.m_numElements;
      while ( v26 != v27 )
      {
        if ( v26 >= (unsigned __int64)v25->Bindings.Protocols.m_numElements )
          __fastfail(0xBAD0FFu);
        v28 = &v25->Bindings.Protocols._p[v26]._Myptr->NDIS_BIND_LINK_BASE;
        if ( !v28->BindState.m_unbindReasons
          && !v28->BindState.PretendBindingActive
          && !v28->BindState.m_bindContext.m_numElements )
        {
          this->m_currentOperation = v28;
          KLockHolder::ReleaseExclusive(&v46);
          ndisBindProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation);
          KLockHolder::AcquireExclusive(&v46);
          this->m_currentOperation = 0LL;
          Ndis::BindEngine::ApplyRules(this);
          if ( this->m_isDirty )
            goto LABEL_53;
        }
        ++v26;
      }
      ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
      if ( this->m_miniport->Bindings.Miniport.m_pauseReasons
        || this->m_miniport->Bindings.Miniport.m_actualPauseState
        || (KLockHolder::ReleaseExclusive(&v46),
            ndisMRestartMiniport(this->m_miniport, &v48),
            KLockHolder::AcquireExclusive(&v46),
            this->m_currentOperation = 0LL,
            Ndis::BindEngine::ApplyRules(this),
            !this->m_isDirty) )
      {
        ndisPostProcessRestartParametersAfterMiniport(this->m_miniport, &v48);
        v30 = 0LL;
        if ( this->m_miniport->Bindings.Filters.m_numElements )
        {
          while ( 1 )
          {
            if ( v30 >= this->m_miniport->Bindings.Filters.m_numElements )
              __fastfail(0xBAD0FFu);
            v31 = this->m_miniport->Bindings.Filters._p[v30]._Myptr;
            if ( (v31->BindState.PretendBindingActive || v31->BindState.m_bindContext.m_numElements)
              && !v31->BindState.m_pauseReasons
              && v31->BindState.m_actualPauseState == DatapathPaused )
            {
              this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v31;
              KLockHolder::ReleaseExclusive(&v46);
              ndisRestartFilter(this->m_miniport, (struct NDIS_BIND_FILTER_LINK *)this->m_currentOperation, &v48);
              KLockHolder::AcquireExclusive(&v46);
              this->m_currentOperation = 0LL;
              Ndis::BindEngine::ApplyRules(this);
              if ( this->m_isDirty )
                break;
            }
            if ( ++v30 >= this->m_miniport->Bindings.Filters.m_numElements )
              goto LABEL_67;
          }
        }
        else
        {
LABEL_67:
          ndisPostProcessRestartParametersAfterFilters(this->m_miniport, &v48);
          v32 = this->m_miniport;
          v33 = 0;
          v34 = this->m_miniport->Bindings.Protocols.m_numElements;
          while ( v33 != v34 )
          {
            if ( v33 >= (unsigned __int64)v32->Bindings.Protocols.m_numElements )
              __fastfail(0xBAD0FFu);
            v35 = v32->Bindings.Protocols._p;
            v36 = v35[v33]._Myptr;
            if ( (v36->BindState.PretendBindingActive || v36->BindState.m_bindContext.m_numElements)
              && !v36->BindState.m_pauseReasons
              && v36->BindState.m_actualPauseState == DatapathPaused )
            {
              this->m_currentOperation = (NDIS_BIND_LINK_BASE *)v36;
              KLockHolder::ReleaseExclusive(&v46);
              ndisRestartProtocol(this->m_miniport, (struct NDIS_BIND_PROTOCOL_LINK *)this->m_currentOperation, &v48);
              KLockHolder::AcquireExclusive(&v46);
              this->m_currentOperation = 0LL;
              Ndis::BindEngine::ApplyRules(this);
              if ( this->m_isDirty )
                goto LABEL_53;
            }
            v37 = v35[v33++]._Myptr;
            v37->BindState.m_AdditionalContext = 0LL;
          }
          ndisPostProcessRestartParametersAfterProtocols(this->m_miniport, &v48);
          ndisMRecalculateMiniportStackAfterBinding(this->m_miniport);
          Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&this->m_miniport->MiniportOwner);
          KLockHolder::ReleaseExclusive(&v46);
          v3 = 0;
        }
      }
    }
  }
LABEL_53:
  KLockHolder::~KLockHolder(&v46);
  if ( v48.General.SupportedOidList )
    ExFreePoolWithTag(v48.General.SupportedOidList, 0);
  if ( v48.FilterInstanceBuffer._p )
    ExFreePoolWithTag(v48.FilterInstanceBuffer._p, 0x7272414Bu);
  return v3;
}
