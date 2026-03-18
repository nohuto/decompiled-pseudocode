/*
 * XREFs of ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C00120E8
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1C0011810 (imp_WdfRegistryQueryMultiString.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C001206C (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C0020A90 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0029CC0 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0012038 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 */

__int64 __fastcall FxCollectionInternal::Remove(FxCollectionInternal *this, unsigned int Index)
{
  _LIST_ENTRY **Entry; // rax
  _LIST_ENTRY **v4; // rdi
  _LIST_ENTRY *v5; // rdx
  _LIST_ENTRY *v6; // rax

  Entry = FxCollectionInternal::FindEntry(this, Index);
  v4 = Entry;
  if ( !Entry )
    return 3221226021LL;
  ((void (__fastcall *)(_LIST_ENTRY *, FxCollectionInternal *, __int64, const char *))(*Entry)->Flink[1].Flink)(
    *Entry,
    this,
    127LL,
    "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
  v5 = v4[1];
  if ( (_LIST_ENTRY **)v5->Blink != v4 + 1 || (v6 = v4[2], (_LIST_ENTRY **)v6->Flink != v4 + 1) )
    __fastfail(3u);
  v6->Flink = v5;
  v5->Blink = v6;
  FxPoolFree(v4);
  --this->m_Count;
  return 0LL;
}
