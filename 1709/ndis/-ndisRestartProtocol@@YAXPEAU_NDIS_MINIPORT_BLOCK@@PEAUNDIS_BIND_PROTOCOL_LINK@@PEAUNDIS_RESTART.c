/*
 * XREFs of ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00BA9E4
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ndisReleaseMiniportPnPEventLock @ 0x1C000F064 (ndisReleaseMiniportPnPEventLock.c)
 *     ndisAcquireMiniportPnPEventLock @ 0x1C000F0E8 (ndisAcquireMiniportPnPEventLock.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF_Zqq @ 0x1C004EC74 (WPP_SF_Zqq.c)
 *     WPP_SF_DZq @ 0x1C007547C (WPP_SF_DZq.c)
 *     WPP_SF_ZqD @ 0x1C00755D4 (WPP_SF_ZqD.c)
 *     ?resize@?$KArray@PEAX$00@Rtl@@QEAA_N_K@Z @ 0x1C00B1F60 (-resize@-$KArray@PEAX$00@Rtl@@QEAA_N_K@Z.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC16C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisInitializeMiniportRestartAttributes @ 0x1C00BFBBC (ndisInitializeMiniportRestartAttributes.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00F4134 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ndisPnPNotifyBinding @ 0x1C0102070 (ndisPnPNotifyBinding.c)
 */

void __fastcall ndisRestartProtocol(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct NDIS_BIND_PROTOCOL_LINK *a2,
        struct NDIS_RESTART_INFORMATION *a3)
{
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // r14
  __int64 m_numElements; // rax
  unsigned __int64 v8; // r14
  void **p; // rax
  _QWORD *v10; // r13
  struct _NDIS_MINIPORT_BLOCK *v11; // rdx
  char v12; // bl
  bool m_isDirty; // al
  _NDIS_MINIPORT_BLOCK *m_miniport; // rcx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // r14d
  unsigned int m_bindSources; // r8d
  unsigned __int16 v19; // cx
  bool v20; // cf
  __int64 v21; // [rsp+30h] [rbp-D0h]
  struct _KEVENT v22; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v23[22]; // [rsp+50h] [rbp-B0h] BYREF

  RunningDriver = a2->BindDriver._p->_t.RunningDriver;
  if ( !a3->Attributes.Oid )
    ndisInitializeMiniportRestartAttributes(a1, a3);
  if ( RunningDriver->MajorNdisVersion < 6u )
  {
    a2->BindDriver._p->_t.NeedsBindCompleteEvent = 1;
    if ( (unsigned __int8)byte_1C0098763 >= 4u )
      WPP_SF_Zq(
        0x16u,
        &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport);
    v15 = ndisBindLegacyProtocol(a1, RunningDriver, a2);
    v17 = v15;
    if ( (unsigned __int8)byte_1C0098763 >= 4u )
      WPP_SF_ZqD(0x17u, v16, &a2->BindDriver._p->_t.Name._Myptr->Length, a2->BindState.Miniport, v15);
    if ( !v17 )
      goto LABEL_12;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
    Rtl::KArray<void *,1>::resize(&a2->BindState.m_bindContext.m_bufferSize);
    a2->BindState.m_LastErrorCode = v17;
    if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      WPP_SF_DZq(
        0x18u,
        &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids,
        v17,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport);
    }
    m_bindSources = a2->BindState.m_bindSources;
    a2->BindState.m_bindSources = m_bindSources & 0xFFFFFFFB;
    if ( (m_bindSources != 0) == ((m_bindSources & 0xFFFFFFFB) != 0) )
    {
LABEL_40:
      Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
      return;
    }
    if ( (unsigned __int8)byte_1C0098763 >= 5u )
      WPP_SF_dd(0xAu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, m_bindSources, m_bindSources & 0xFFFFFFFB);
    if ( a2->BindState.m_bindSources )
    {
      if ( Ndis::BindState::SetBinding(&a2->BindState, BindingEnabled, Reason_NoBindSourceWantsThisBinding)
        && (unsigned __int8)byte_1C0098763 >= 4u )
      {
        WPP_SF_DZq(0xBu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, a2->BindState.m_bindSources, 0LL, 0LL);
      }
      if ( !Ndis::BindState::SetBinding(
              &a2->BindState,
              BindingEnabled,
              Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
        || (unsigned __int8)byte_1C0098763 < 4u )
      {
        goto LABEL_38;
      }
      v19 = 12;
    }
    else
    {
      if ( !Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_NoBindSourceWantsThisBinding)
        || (unsigned __int8)byte_1C0098763 < 4u )
      {
LABEL_38:
        v20 = (unsigned __int8)byte_1C0098763 < 4u;
        a2->BindState.Miniport->BindEngine.m_isDirty = 1;
        if ( !v20 )
          WPP_SF_Zq(
            0x19u,
            &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids,
            &a2->BindDriver._p->_t.Name._Myptr->Length,
            a2->BindState.Miniport);
        goto LABEL_40;
      }
      v19 = 13;
    }
    WPP_SF_Zq(v19, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, 0LL, 0LL);
    goto LABEL_38;
  }
  m_numElements = a2->BindState.m_bindContext.m_numElements;
  v8 = 0LL;
  v21 = m_numElements;
  while ( v8 != m_numElements )
  {
    if ( v8 >= a2->BindState.m_bindContext.m_numElements )
      __fastfail(5u);
    _mm_lfence();
    p = a2->BindState.m_bindContext._p;
    v10 = p[v8];
    if ( (unsigned __int8)byte_1C0098763 >= 4u )
      WPP_SF_Zqq(
        0x14u,
        &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport,
        p[v8]);
    memset(v23, 0, sizeof(v23));
    v23[0] = 11272832LL;
    *(_QWORD *)((char *)&v23[20] + 4) = 0LL;
    LODWORD(v23[20]) = 0;
    v23[2] = &a3->ProtocolParameters;
    LODWORD(v23[1]) = 9;
    LODWORD(v23[3]) = 56;
    ndisReferencePackage((__int64)&ndisPkgs);
    ndisAcquireMiniportPnPEventLock(v10[2], &v22);
    ndisPnPNotifyBinding(v10, v23);
    ndisReleaseMiniportPnPEventLock(v10[2]);
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    if ( (unsigned __int8)byte_1C0098763 >= 4u )
      WPP_SF_Zqq(
        0x15u,
        &WPP_1c1313693ddf3fd40bffaa21886a316d_Traceguids,
        &a2->BindDriver._p->_t.Name._Myptr->Length,
        a2->BindState.Miniport,
        v10);
    m_numElements = v21;
    ++v8;
  }
LABEL_12:
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  a2->BindState.m_actualPauseState = DatapathRunning;
  v12 = 0;
  m_isDirty = a1->BindEngine.m_isDirty;
  do
  {
    m_miniport = a1->BindEngine.m_miniport;
    v12 |= m_isDirty;
    a1->BindEngine.m_isDirty = 0;
    Ndis::BindRules::Apply((Ndis::BindRules *)m_miniport, v11);
    m_isDirty = a1->BindEngine.m_isDirty;
  }
  while ( m_isDirty );
  a1->BindEngine.m_isDirty = v12;
  ExReleasePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  KeLeaveCriticalRegion();
}
