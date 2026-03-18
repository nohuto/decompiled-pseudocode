/*
 * XREFs of SdbpReadTagData @ 0x1404B0084
 * Callers:
 *     SdbReadBinaryTag @ 0x1404AFBE4 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1404AFD04 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x1404B0010 (SdbReadWORDTag.c)
 *     SdbpReadStringRef @ 0x1405BC418 (SdbpReadStringRef.c)
 *     SdbReadQWORDTag @ 0x1405DA234 (SdbReadQWORDTag.c)
 * Callees:
 *     SdbGetTagDataSize @ 0x140486F3C (SdbGetTagDataSize.c)
 *     SdbpReadMappedData @ 0x140487024 (SdbpReadMappedData.c)
 *     SdbpGetTagHeadSize @ 0x140487D88 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( TagDataSize > a4 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 351, (unsigned int)"Buffer too small. Avail: %d, Need: %d");
  }
  else
  {
    TagHeadSize = SdbpGetTagHeadSize(a1, a2);
    if ( (unsigned int)SdbpReadMappedData(a1, a2 + TagHeadSize, a3, TagDataSize) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 358, (unsigned int)"Error reading tag data");
  }
  return 0LL;
}
