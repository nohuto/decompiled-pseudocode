/*
 * XREFs of ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00B24B4
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BC30C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     WPP_SF__guid_Dq @ 0x1C0076128 (WPP_SF__guid_Dq.c)
 *     ?RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z @ 0x1C00B2AF8 (-RemoveBindContext@BindState@Ndis@@QEAAXPEAX@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?GetBindContext@BindState@Ndis@@QEAAPEAXXZ @ 0x1C00BCEC0 (-GetBindContext@BindState@Ndis@@QEAAPEAXXZ.c)
 *     ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00C514C (-ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTE.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0101C04 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

void __fastcall ndisDetachFilter(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_BIND_FILTER_LINK *a2)
{
  struct _NDIS_FILTER_BLOCK *BindContext; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  BindContext = (struct _NDIS_FILTER_BLOCK *)Ndis::BindState::GetBindContext(&a2->BindState);
  Ndis::BindState::RemoveBindContext(&a2->BindState, BindContext);
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  if ( (unsigned __int8)byte_1C0099623 >= 4u )
    WPP_SF__guid_Dq(0x26u, v5, (__int64)&a2->BindDriver._p->_t.Guid, a2->FilterIndex, a2->BindState.Miniport);
  ndisDetachFilterInner(a1, BindContext);
  if ( (unsigned __int8)byte_1C0099623 >= 4u )
    WPP_SF__guid_Dq(0x27u, v6, (__int64)&a2->BindDriver._p->_t.Guid, a2->FilterIndex, a2->BindState.Miniport);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  ndisClearTransientBindFailuresAboveThisFilter(a1, a2);
  Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
}
