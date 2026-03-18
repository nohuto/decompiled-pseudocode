/*
 * XREFs of ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C00121BC
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1C0011810 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfCollectionAdd @ 0x1C0011B70 (imp_WdfCollectionAdd.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0011BFC (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0011D50 (imp_WdfPdoInitAddHardwareID.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0029CC0 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0063050 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

bool __fastcall FxCollectionInternal::Add(
        FxCollectionInternal *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *Item)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  _LIST_ENTRY *v7; // rdx
  _LIST_ENTRY *Blink; // rax
  unsigned int v9; // edx
  FxTagTracker *m_Lock; // rcx
  void *Caller; // [rsp+38h] [rbp+0h]

  v5 = FxPoolAllocator(
         FxDriverGlobals,
         &FxDriverGlobals->FxPoolFrameworks,
         ExDefaultNonPagedPoolType,
         0x18uLL,
         FxDriverGlobals->Tag,
         Caller);
  v6 = v5;
  if ( v5 )
  {
    v7 = (_LIST_ENTRY *)(v5 + 1);
    Blink = this->m_ListHead.Blink;
    if ( Blink->Flink != &this->m_ListHead )
      __fastfail(3u);
    v7->Flink = &this->m_ListHead;
    v7->Blink = Blink;
    Blink->Flink = v7;
    this->m_ListHead.Blink = v7;
    *v6 = Item;
    v9 = _InterlockedIncrement(&Item->m_Refcnt);
    if ( SLOBYTE(Item->m_ObjectFlags) < 0 )
      m_Lock = (FxTagTracker *)Item[-1].m_SpinLock.m_Lock;
    else
      m_Lock = 0LL;
    if ( m_Lock )
      FxTagTracker::UpdateTagHistory(
        m_Lock,
        this,
        185,
        "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp",
        TagAddRef,
        v9);
    ++this->m_Count;
  }
  return v6 != 0LL;
}
