/*
 * XREFs of SdbReadWORDTag @ 0x1405FD058
 * Callers:
 *     InitOnceScanIndexes @ 0x1405FD150 (InitOnceScanIndexes.c)
 *     SdbpCheckForMatch @ 0x14061E3E8 (SdbpCheckForMatch.c)
 * Callees:
 *     SdbpReadTagData @ 0x1405FD0CC (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadWORDTag(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned __int16 v7; // cx
  int TagFromTagID; // [rsp+28h] [rbp-10h]
  unsigned __int16 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x3000 )
  {
    v6 = SdbpReadTagData(a1, v4, &v10, 2LL);
    v7 = v10;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadWORDTag",
      143,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type",
      v4,
      TagFromTagID);
    return a3;
  }
}
