/*
 * XREFs of ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C001216C
 * Callers:
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0012350 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     imp_WdfCmResourceListRemoveByDescriptor @ 0x1C0083600 (imp_WdfCmResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceListRemoveByDescriptor @ 0x1C0083870 (imp_WdfIoResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x1C0083A90 (imp_WdfIoResourceRequirementsListRemoveByIoResList.c)
 * Callees:
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C00120A0 (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 */

__int64 __fastcall FxCollectionInternal::RemoveEntry(FxCollectionInternal *this, FxCollectionEntry *Entry)
{
  Entry->m_Object->Release(
    Entry->m_Object,
    this,
    127,
    "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
  FxCollectionInternal::CleanupEntry(this, Entry);
  return 0LL;
}
