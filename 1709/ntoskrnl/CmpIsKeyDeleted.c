/*
 * XREFs of CmpIsKeyDeleted @ 0x140569BB0
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1404824B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpVEExecuteOpenLogic @ 0x1404B85E0 (CmpVEExecuteOpenLogic.c)
 *     CmpIsMasterHive @ 0x140569B5C (CmpIsMasterHive.c)
 *     CmpQueryKeyDataFromCache @ 0x140569F50 (CmpQueryKeyDataFromCache.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x140584EDC (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpSyncKcbCacheForHive @ 0x140692830 (CmpSyncKcbCacheForHive.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x140692878 (CmpVEExecuteRealStoreParseLogic.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14047E9F0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKeyStackDeleted @ 0x140569C20 (CmpIsKeyStackDeleted.c)
 */

char __fastcall CmpIsKeyDeleted(__int64 a1, __int64 a2)
{
  char IsKeyStackDeleted; // bl
  PPRIVILEGE_SET v6[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v6, 0, 0x20uLL);
  WORD1(v6[0]) = -1;
  CmpStartKcbStackForTopLayerKcb((__int64)v6, a1);
  IsKeyStackDeleted = CmpIsKeyStackDeleted(v6, a2);
  if ( v6[3] )
    MiDeleteSubsection(v6[3]);
  return IsKeyStackDeleted;
}
