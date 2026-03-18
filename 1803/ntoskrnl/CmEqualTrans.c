/*
 * XREFs of CmEqualTrans @ 0x140498AE0
 * Callers:
 *     CmpLockIXLockExclusive @ 0x1404984A8 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x140498504 (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmpIsKeyStackDeleted @ 0x1404A5D2C (CmpIsKeyStackDeleted.c)
 *     CmGetKCBCacheSecurity @ 0x1404A822C (CmGetKCBCacheSecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpQueryKeyDataFromNode @ 0x1404AC0B0 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404ACF50 (CmpFindSubKeyByNumberEx.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmGetVisibleSubkeyCount @ 0x14054EC80 (CmGetVisibleSubkeyCount.c)
 *     CmpQueryKeyDataFromCache @ 0x140553DC0 (CmpQueryKeyDataFromCache.c)
 *     CmRmIsKCBVisible @ 0x14056FB10 (CmRmIsKCBVisible.c)
 *     CmGetKeyLastWriteTime @ 0x140573564 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1405767BC (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmGetKeyFlags @ 0x1406136D0 (CmGetKeyFlags.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x1406F74E4 (CmpTransUowIsEqual.c)
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
