/*
 * XREFs of SdbReadBinaryTag @ 0x1404AFBE4
 * Callers:
 *     SdbGetDatabaseID @ 0x1404AFC58 (SdbGetDatabaseID.c)
 *     SdbReadGUIDTag @ 0x1405995E4 (SdbReadGUIDTag.c)
 *     SdbpGetExeEntryFlags @ 0x1405D72A4 (SdbpGetExeEntryFlags.c)
 *     SdbReadEntryInformation @ 0x14072B390 (SdbReadEntryInformation.c)
 *     SdbpGetMatchingTextAttributes @ 0x14072C684 (SdbpGetMatchingTextAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140486FF0 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1404B0084 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx

  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v6, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 913, (unsigned int)"Error reading buffer");
  }
  else
  {
    SdbGetTagFromTagID(a1, v6);
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 908, (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type");
  }
  return 0LL;
}
