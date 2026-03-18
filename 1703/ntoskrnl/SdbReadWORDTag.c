/*
 * XREFs of SdbReadWORDTag @ 0x1404B0010
 * Callers:
 *     InitOnceScanIndexes @ 0x1404AFD80 (InitOnceScanIndexes.c)
 *     SdbpCheckForMatch @ 0x1405BB258 (SdbpCheckForMatch.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140486FF0 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1404B0084 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadWORDTag(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned __int16 v7; // cx
  unsigned __int16 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x3000 )
  {
    v6 = SdbpReadTagData(a1, v4, &v9, 2LL);
    v7 = v9;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadWORDTag",
      142,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return a3;
  }
}
