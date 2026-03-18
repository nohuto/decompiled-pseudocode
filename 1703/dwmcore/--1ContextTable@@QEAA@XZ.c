/*
 * XREFs of ??1ContextTable@@QEAA@XZ @ 0x1800D2AB8
 * Callers:
 *     _dynamic_atexit_destructor_for__Contexts__ @ 0x1800D6E00 (_dynamic_atexit_destructor_for__Contexts__.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAXXZ @ 0x1801B148C (-RemoveAll@-$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV-$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUB.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContextTable::~ContextTable(ContextTable *this)
{
  __int64 v1; // rcx

  ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::RemoveAll(this);
  ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::RemoveAll(v1);
}
