/*
 * XREFs of SdbGetBinaryTagData @ 0x1407D7300
 * Callers:
 *     SdbpGetRegistryMatchingAttributes @ 0x1407D6CDC (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x1405FCF94 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetBinaryTagData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // [rsp+20h] [rbp-18h]
  int TagFromTagID; // [rsp+28h] [rbp-10h]

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
    return SdbpGetMappedTagData(a1, v2);
  TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, v2);
  v5 = v2;
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbGetBinaryTagData",
    948,
    (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type",
    v5,
    TagFromTagID);
  return 0LL;
}
