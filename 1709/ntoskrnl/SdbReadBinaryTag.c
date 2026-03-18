/*
 * XREFs of SdbReadBinaryTag @ 0x1404F5BE0
 * Callers:
 *     SdbGetDatabaseID @ 0x1404F5B34 (SdbGetDatabaseID.c)
 *     SdbReadGUIDTag @ 0x1405E8E04 (SdbReadGUIDTag.c)
 *     SdbReadEntryInformation @ 0x14076E0C4 (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x14076F398 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x14076F4D4 (SdbpGetMatchingTextAttributes.c)
 * Callees:
 *     SdbpReadTagData @ 0x1404F5D38 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140524CF8 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx

  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v6, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 923, (unsigned int)"Error reading buffer");
  }
  else
  {
    SdbGetTagFromTagID(a1, v6);
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 918, (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type");
  }
  return 0LL;
}
