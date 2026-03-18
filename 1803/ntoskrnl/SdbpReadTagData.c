/*
 * XREFs of SdbpReadTagData @ 0x1405FD0CC
 * Callers:
 *     SdbReadDWORDTag @ 0x1405FCF24 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x1405FD058 (SdbReadWORDTag.c)
 *     SdbReadBinaryTag @ 0x1405FFA10 (SdbReadBinaryTag.c)
 *     SdbReadQWORDTag @ 0x14061DF68 (SdbReadQWORDTag.c)
 *     SdbpReadStringRef @ 0x14061F5A8 (SdbpReadStringRef.c)
 * Callees:
 *     SdbpGetTagHeadSize @ 0x1405FD3F4 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x1405FD4C0 (SdbGetTagDataSize.c)
 *     SdbpReadMappedData @ 0x1405FD5A8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int TagDataSize; // eax
  unsigned int v9; // ebx
  int TagHeadSize; // eax
  int v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+28h] [rbp-10h]

  v6 = a2;
  TagDataSize = SdbGetTagDataSize(a1, a2);
  v9 = TagDataSize;
  if ( TagDataSize > a4 )
  {
    v13 = TagDataSize;
    v12 = a4;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadTagData",
      352,
      (unsigned int)"Buffer too small. Avail: %d, Need: %d",
      v12,
      v13);
  }
  else
  {
    TagHeadSize = SdbpGetTagHeadSize(a1, v6);
    if ( (unsigned int)SdbpReadMappedData(a1, v6 + TagHeadSize, a3, v9) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 359, (unsigned int)"Error reading tag data");
  }
  return 0LL;
}
