/*
 * XREFs of CmpIsKeyDeleted @ 0x1404A5C40
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1404ACF50 (CmpFindSubKeyByNumberEx.c)
 *     CmpVEExecuteOpenLogic @ 0x140552590 (CmpVEExecuteOpenLogic.c)
 *     CmpQueryKeyDataFromCache @ 0x140553DC0 (CmpQueryKeyDataFromCache.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1405767BC (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1405BFEE4 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpSyncKcbCacheForHive @ 0x1406F5A80 (CmpSyncKcbCacheForHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpStartKcbStack @ 0x1404A5CCC (CmpStartKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x1404A5D2C (CmpIsKeyStackDeleted.c)
 *     CmpSetKcbAtLayerHeight @ 0x1406FB3E8 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpIsKeyDeleted(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int16 v5; // r10
  unsigned __int8 IsKeyStackDeleted; // bl
  __int64 i; // r11
  __int64 v9; // r11
  __int16 v10; // r10
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v11, 0, 0x20uLL);
  v4 = *(unsigned __int16 *)(a1 + 58);
  WORD1(v11[0]) = -1;
  if ( (int)CmpStartKcbStack(v11, v4) >= 0 )
  {
    v5 = *(_WORD *)(a1 + 58);
    WORD1(v11[0]) = v5;
    if ( v5 )
    {
      for ( i = *(_QWORD *)(a1 + 184); i; v5 = v10 - 1 )
      {
        CmpSetKcbAtLayerHeight(v11, v5, *(_QWORD *)(i + 16));
        i = *(_QWORD *)(v9 + 24);
      }
    }
    else
    {
      v11[1] = a1;
    }
  }
  IsKeyStackDeleted = CmpIsKeyStackDeleted(v11, a2);
  if ( v11[3] )
    CmSiFreeMemory((PPRIVILEGE_SET)v11[3]);
  return IsKeyStackDeleted;
}
