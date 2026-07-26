/*
 * XREFs of ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00B7B68
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00B2BA4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ndisReferenceFilterDriver @ 0x1C001C8D4 (ndisReferenceFilterDriver.c)
 *     ndisDereferenceFilterDriver @ 0x1C001CA04 (ndisDereferenceFilterDriver.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     WPP_SF__guid_Dq @ 0x1C0073E28 (WPP_SF__guid_Dq.c)
 *     WPP_SF__guid_DqD @ 0x1C0073E78 (WPP_SF__guid_DqD.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00B7C24 (-ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTE.c)
 *     ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x1C00EFE6C (-NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F139C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 */

void __fastcall ndisAttachFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_FILTER_LINK *a2)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // r8
  struct _NDIS_FILTER_DRIVER_BLOCK *RunningDriver; // rbp
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  _QWORD v9[20]; // [rsp+30h] [rbp-C8h] BYREF

  p = a2->BindDriver._p;
  RunningDriver = p->_t.RunningDriver;
  if ( (unsigned __int8)byte_1C0092623 >= 4u )
    WPP_SF__guid_Dq(0x1Fu, (__int64)a2, (__int64)&p->_t.Guid, a2->FilterIndex, a2->BindState.Miniport);
  v6 = ndisAttachFilterInner(a1, RunningDriver, a2->FilterIndex, a2);
  v7 = v6;
  if ( (unsigned __int8)byte_1C0092623 >= 4u )
    WPP_SF__guid_DqD(
      0x20u,
      (__int64)a2->BindState.Miniport,
      (__int64)&a2->BindDriver._p->_t.Guid,
      a2->FilterIndex,
      a2->BindState.Miniport,
      v6);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( v7 )
  {
    a2->BindState.m_LastErrorCode = v7;
    if ( Ndis::BindState::SetBinding(&a2->BindState, BindingDisabled, Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C0092623 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v9);
      if ( (unsigned __int8)byte_1C0092623 >= 4u )
        WPP_SF_Zq(0x21u, &WPP_71a2ef01b9413cf456b1a739814e8f19_Traceguids, (const wchar_t *)v9[1], v9[0]);
    }
    if ( (unsigned __int8)ndisReferenceFilterDriver((__int64)RunningDriver) )
    {
      NdisTraceLoggingRareFilterPath(RunningDriver, 2LL, v7);
      ndisDereferenceFilterDriver(RunningDriver, v8, 0);
    }
    else
    {
      NdisTraceLoggingRareFilterPath(0LL, 2LL, v7);
    }
  }
  else
  {
    ndisClearTransientBindFailuresAboveThisFilter(a1, a2);
  }
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
