/*
 * XREFs of ?FindKey@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEBAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x1801CCA74
 * Callers:
 *     ?Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z @ 0x1801CCA04 (-Find@ContextTable@@QEAAPEAXPEAU_SEB_RPC_PUBLISH_DATA@@@Z.c)
 *     PubSebUnregisterRpc @ 0x1801CCF28 (PubSebUnregisterRpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::FindKey(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *i; // rcx

  result = 0LL;
  if ( (int)qword_180272610 <= 0 )
    return 0xFFFFFFFFLL;
  v3 = *a2;
  for ( i = Block; *i != v3; ++i )
  {
    result = (unsigned int)(result + 1);
    if ( (int)result >= (int)qword_180272610 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
