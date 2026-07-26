/*
 * XREFs of ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00C2F68
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ndisDereferenceFilterDriver @ 0x1C00044D4 (ndisDereferenceFilterDriver.c)
 *     ndisReferenceFilterDriver @ 0x1C000F228 (ndisReferenceFilterDriver.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     WPP_SF__guid_Dq @ 0x1C0075998 (WPP_SF__guid_Dq.c)
 *     WPP_SF__guid_DqD @ 0x1C00759E8 (WPP_SF__guid_DqD.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BBB74 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BBE24 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00C3038 (-ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTE.c)
 *     ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x1C00F9520 (-NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA890 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 */

void __fastcall ndisAttachFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_FILTER_LINK *a2)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // r8
  struct _NDIS_FILTER_DRIVER_BLOCK *RunningDriver; // rbp
  int v6; // eax
  unsigned int v7; // edi
  _QWORD v8[20]; // [rsp+30h] [rbp-C8h] BYREF

  p = a2->BindDriver._p;
  RunningDriver = p->_t.RunningDriver;
  if ( (unsigned __int8)byte_1C0098763 >= 4u )
    WPP_SF__guid_Dq(0x1Fu, (__int64)a2, (__int64)&p->_t.Guid, a2->FilterIndex, a2->BindState.Miniport);
  v6 = ndisAttachFilterInner(a1, RunningDriver, a2->FilterIndex, a2);
  v7 = v6;
  if ( (unsigned __int8)byte_1C0098763 >= 4u )
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
      && (unsigned __int8)byte_1C0098763 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a2, (struct NDIS_PNPTRACE_LOCALS *)v8);
      if ( (unsigned __int8)byte_1C0098763 >= 4u )
        WPP_SF_Zq(0x21u, &WPP_e24a8456d0023dabb0e7aee331e1950e_Traceguids, (const wchar_t *)v8[1], v8[0]);
    }
    if ( ndisReferenceFilterDriver((__int64)RunningDriver, 0) )
    {
      NdisTraceLoggingRareFilterPath(RunningDriver, 2LL, v7);
      ndisDereferenceFilterDriver(RunningDriver);
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
  Ndis::BindEngine::ApplyRules(&a1->BindEngine);
  ExReleasePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  KeLeaveCriticalRegion();
}
