/*
 * XREFs of CmListGetPrevElement @ 0x140451764
 * Callers:
 *     CmGetKeyLastWriteTime @ 0x1404470EC (CmGetKeyLastWriteTime.c)
 *     CmGetKCBCacheSecurity @ 0x1404FCF10 (CmGetKCBCacheSecurity.c)
 *     CmpQueryKeyDataFromCache @ 0x1404FCF90 (CmpQueryKeyDataFromCache.c)
 *     CmpQueryKeyDataFromNode @ 0x1404FEEE0 (CmpQueryKeyDataFromNode.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpUndoDeleteKeyForTrans @ 0x14056B998 (CmpUndoDeleteKeyForTrans.c)
 *     CmGetKeyFlags @ 0x1405D62EC (CmGetKeyFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmListGetPrevElement(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  if ( !*a2 )
    *a2 = *(_QWORD *)(a1 + 8);
  v3 = *a2;
  if ( a1 == *a2 )
    return 0LL;
  result = v3 - 32;
  *a2 = *(_QWORD *)(v3 + 8);
  return result;
}
