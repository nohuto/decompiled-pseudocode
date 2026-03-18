/*
 * XREFs of SdbGetBinaryTagData @ 0x14072CEC8
 * Callers:
 *     SdbpGetRegistryMatchingAttributes @ 0x14072C8AC (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140486FF0 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x1404B5810 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetBinaryTagData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
    return SdbpGetMappedTagData(a1, v2);
  SdbGetTagFromTagID(a1, v2);
  AslLogCallPrintf(1, (unsigned int)"SdbGetBinaryTagData", 938, (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type");
  return 0LL;
}
