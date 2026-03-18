/*
 * XREFs of ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C001206C
 * Callers:
 *     ??1FxCollection@@UEAA@XZ @ 0x1C0017E84 (--1FxCollection@@UEAA@XZ.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0029CC0 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0063050 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 * Callees:
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C00120E8 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 */

void __fastcall FxCollectionInternal::Clear(FxCollectionInternal *this)
{
  _LIST_ENTRY *p_m_ListHead; // rbx

  p_m_ListHead = &this->m_ListHead;
  while ( p_m_ListHead->Flink != p_m_ListHead )
    FxCollectionInternal::Remove(this, 0);
}
