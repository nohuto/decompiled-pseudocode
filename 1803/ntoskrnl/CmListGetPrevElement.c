/*
 * XREFs of CmListGetPrevElement @ 0x14057B328
 * Callers:
 *     CmGetKCBCacheSecurity @ 0x1404A822C (CmGetKCBCacheSecurity.c)
 *     CmpQueryKeyDataFromNode @ 0x1404AC0B0 (CmpQueryKeyDataFromNode.c)
 *     CmpQueryKeyDataFromCache @ 0x140553DC0 (CmpQueryKeyDataFromCache.c)
 *     CmGetKeyLastWriteTime @ 0x140573564 (CmGetKeyLastWriteTime.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpUndoDeleteKeyForTrans @ 0x1405C1A44 (CmpUndoDeleteKeyForTrans.c)
 *     CmGetKeyFlags @ 0x1406136D0 (CmGetKeyFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmListGetPrevElement(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8

  v2 = *a2;
  if ( !*a2 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    *a2 = v2;
  }
  if ( a1 == v2 )
    return 0LL;
  *a2 = *(_QWORD *)(v2 + 8);
  return v2 - 32;
}
