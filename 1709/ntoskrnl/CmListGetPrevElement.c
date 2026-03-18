/*
 * XREFs of CmListGetPrevElement @ 0x14056A340
 * Callers:
 *     CmpUndoDeleteKeyForTrans @ 0x14045005C (CmpUndoDeleteKeyForTrans.c)
 *     CmpQueryKeyDataFromNode @ 0x140482830 (CmpQueryKeyDataFromNode.c)
 *     CmGetKCBCacheSecurity @ 0x140482BA4 (CmGetKCBCacheSecurity.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpQueryKeyDataFromCache @ 0x140569F50 (CmpQueryKeyDataFromCache.c)
 *     CmGetKeyLastWriteTime @ 0x1405851E4 (CmGetKeyLastWriteTime.c)
 *     CmGetKeyFlags @ 0x1405F2C10 (CmGetKeyFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmListGetPrevElement(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8

  if ( !*a2 )
    *a2 = *(_QWORD *)(a1 + 8);
  v2 = *a2;
  if ( a1 == *a2 )
    return 0LL;
  *a2 = *(_QWORD *)(v2 + 8);
  return v2 - 32;
}
