/*
 * XREFs of ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00BF7E0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF__guid_Dq @ 0x1C0075998 (WPP_SF__guid_Dq.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C00BBE98 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 *     ndisFInvokeSetFilterModuleOptions @ 0x1C00BE420 (ndisFInvokeSetFilterModuleOptions.c)
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0103C68 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 */

void __fastcall ndisPauseFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_FILTER_LINK *a2)
{
  __int64 *v4; // rdx
  struct _NDIS_FILTER_BLOCK *BindContext; // rdi
  unsigned int v6; // edx
  __int64 v7; // rdx

  BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(&a2->BindState);
  if ( (unsigned __int8)byte_1C0098763 >= 4u )
    WPP_SF__guid_Dq(0xDu, *v4, v4[10] + 24, a2->FilterIndex, *v4);
  ndisReferencePackage((__int64)&ndisPkgs);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  a2->BindState.NeedsPauseAction = 0;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  ndisPauseFilterInner(BindContext, v6);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0098763 >= 4u )
    WPP_SF__guid_Dq(0xEu, v7, (__int64)&a2->BindDriver._p->_t.Guid, a2->FilterIndex, a2->BindState.Miniport);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  a2->BindState.m_actualPauseState = DatapathPaused;
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  ndisFInvokeSetFilterModuleOptions((__int64)BindContext);
}
