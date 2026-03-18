/*
 * XREFs of CmEqualTrans @ 0x14056959C
 * Callers:
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmGetVisibleSubkeyCount @ 0x140472B8C (CmGetVisibleSubkeyCount.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404824B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpQueryKeyDataFromNode @ 0x140482830 (CmpQueryKeyDataFromNode.c)
 *     CmGetKCBCacheSecurity @ 0x140482BA4 (CmGetKCBCacheSecurity.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmRmIsKCBVisible @ 0x140568874 (CmRmIsKCBVisible.c)
 *     CmpLockIXLockExclusive @ 0x140569108 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140569164 (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 *     CmpIsKeyStackDeleted @ 0x140569C20 (CmpIsKeyStackDeleted.c)
 *     CmpQueryKeyDataFromCache @ 0x140569F50 (CmpQueryKeyDataFromCache.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x140584EDC (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmGetKeyLastWriteTime @ 0x1405851E4 (CmGetKeyLastWriteTime.c)
 *     CmGetKeyFlags @ 0x1405F2C10 (CmGetKeyFlags.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x1406942E8 (CmpTransUowIsEqual.c)
 */

char __fastcall CmEqualTrans(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8

  if ( !a1 || !a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 && (v4 = *(_QWORD *)(a2 + 56)) != 0 )
    return v3 == v4;
  else
    return CmpTransUowIsEqual(a1 + 88, a2 + 88);
}
