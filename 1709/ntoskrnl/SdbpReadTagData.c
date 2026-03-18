/*
 * XREFs of SdbpReadTagData @ 0x1404F5D38
 * Callers:
 *     SdbpReadStringRef @ 0x1404F58E4 (SdbpReadStringRef.c)
 *     SdbReadBinaryTag @ 0x1404F5BE0 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1404F5C54 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x1404F5CC4 (SdbReadWORDTag.c)
 *     SdbReadQWORDTag @ 0x140770074 (SdbReadQWORDTag.c)
 * Callees:
 *     SdbGetTagDataSize @ 0x140524C44 (SdbGetTagDataSize.c)
 *     SdbpReadMappedData @ 0x140524D2C (SdbpReadMappedData.c)
 *     SdbpGetTagHeadSize @ 0x1405252D8 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  TagDataSize = SdbGetTagDataSize();
  if ( TagDataSize > a4 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 352, (unsigned int)"Buffer too small. Avail: %d, Need: %d");
  }
  else
  {
    TagHeadSize = SdbpGetTagHeadSize(a1, a2);
    if ( (unsigned int)SdbpReadMappedData(a1, a2 + TagHeadSize, a3, TagDataSize) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 359, (unsigned int)"Error reading tag data");
  }
  return 0LL;
}
