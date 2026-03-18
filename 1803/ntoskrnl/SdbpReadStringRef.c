/*
 * XREFs of SdbpReadStringRef @ 0x14061F5A8
 * Callers:
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpReadTagData @ 0x1405FD0CC (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v5; // [rsp+20h] [rbp-18h]
  int TagFromTagID; // [rsp+28h] [rbp-10h]
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v2, (__int64)&v7, 4u) )
      return v7;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadStringRef", 552, (unsigned int)"Error reading data");
  }
  else
  {
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, v2);
    v5 = v2;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadStringRef",
      547,
      (unsigned int)"TagID 0x%08X, Tag %04X not STRINGREF type",
      v5,
      TagFromTagID);
  }
  return 0LL;
}
