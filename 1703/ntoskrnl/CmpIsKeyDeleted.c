/*
 * XREFs of CmpIsKeyDeleted @ 0x1404D4010
 * Callers:
 *     CmpIsMasterHive @ 0x1404D3FBC (CmpIsMasterHive.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1404D4394 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1404FD280 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404FDC10 (CmpFindSubKeyByNumberEx.c)
 *     CmpVEExecuteOpenLogic @ 0x140538520 (CmpVEExecuteOpenLogic.c)
 *     CmpSyncKcbCacheForHive @ 0x140667D30 (CmpSyncKcbCacheForHive.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpIsKeyStackDeleted @ 0x1404D4080 (CmpIsKeyStackDeleted.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 */

char __fastcall CmpIsKeyDeleted(__int64 a1, __int64 a2)
{
  char IsKeyStackDeleted; // bl
  PPRIVILEGE_SET v6[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v6, 0, 0x20uLL);
  WORD1(v6[0]) = -1;
  CmpStartKcbStackForTopLayerKcb(v6, a1);
  IsKeyStackDeleted = CmpIsKeyStackDeleted(v6, a2);
  if ( v6[3] )
    MiDeleteSubsection(v6[3]);
  return IsKeyStackDeleted;
}
