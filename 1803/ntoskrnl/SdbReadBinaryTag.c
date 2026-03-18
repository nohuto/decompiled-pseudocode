/*
 * XREFs of SdbReadBinaryTag @ 0x1405FFA10
 * Callers:
 *     SdbGetDatabaseID @ 0x1405FC968 (SdbGetDatabaseID.c)
 *     SdbpGetExeEntryFlags @ 0x14061F980 (SdbpGetExeEntryFlags.c)
 *     SdbReadEntryInformation @ 0x1407D5208 (SdbReadEntryInformation.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407D6AB4 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x1407D7374 (SdbReadGUIDTag.c)
 * Callees:
 *     SdbpReadTagData @ 0x1405FD0CC (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx
  int v9; // [rsp+20h] [rbp-18h]
  int TagFromTagID; // [rsp+28h] [rbp-10h]

  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v6, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 923, (unsigned int)"Error reading buffer");
  }
  else
  {
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, v6);
    v9 = v6;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadBinaryTag",
      918,
      (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type",
      v9,
      TagFromTagID);
  }
  return 0LL;
}
