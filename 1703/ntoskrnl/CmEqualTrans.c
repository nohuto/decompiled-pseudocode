/*
 * XREFs of CmEqualTrans @ 0x1404CE678
 * Callers:
 *     CmGetKeyLastWriteTime @ 0x1404470EC (CmGetKeyLastWriteTime.c)
 *     CmRmIsKCBVisible @ 0x14044C0B4 (CmRmIsKCBVisible.c)
 *     CmpLockIXLockExclusive @ 0x1404CE168 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1404CE1C4 (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmGetVisibleSubkeyCount @ 0x1404CFF48 (CmGetVisibleSubkeyCount.c)
 *     CmpIsKeyStackDeleted @ 0x1404D4080 (CmpIsKeyStackDeleted.c)
 *     CmGetKCBCacheSecurity @ 0x1404FCF10 (CmGetKCBCacheSecurity.c)
 *     CmpQueryKeyDataFromCache @ 0x1404FCF90 (CmpQueryKeyDataFromCache.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1404FD280 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmEnumerateKey @ 0x1404FD790 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404FDC10 (CmpFindSubKeyByNumberEx.c)
 *     CmpQueryKeyDataFromNode @ 0x1404FEEE0 (CmpQueryKeyDataFromNode.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmGetKeyFlags @ 0x1405D62EC (CmGetKeyFlags.c)
 * Callees:
 *     <none>
 */

char __fastcall CmEqualTrans(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v3; // r8
  __int64 v4; // r9

  result = 0;
  if ( a1 && a2 )
  {
    if ( a1 == a2 )
    {
      return 1;
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 56);
      if ( v3 && (v4 = *(_QWORD *)(a2 + 56)) != 0 )
        return v3 == v4;
      else
        return CmpTransUowIsEqual(a1 + 88, a2 + 88);
    }
  }
  return result;
}
