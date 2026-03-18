/*
 * XREFs of SdbGetTagFromTagID @ 0x1405FD574
 * Callers:
 *     SdbpGetIndex @ 0x1405FCD40 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1405FCE50 (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x1405FCF24 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x1405FCFD8 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x1405FD058 (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x1405FD150 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x1405FD384 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x1405FD438 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x1405FD4C0 (SdbGetTagDataSize.c)
 *     SdbGetFirstChild @ 0x1405FD5F4 (SdbGetFirstChild.c)
 *     SdbReadBinaryTag @ 0x1405FFA10 (SdbReadBinaryTag.c)
 *     SdbReadQWORDTag @ 0x14061DF68 (SdbReadQWORDTag.c)
 *     SdbpFindMatcher @ 0x14061E5DC (SdbpFindMatcher.c)
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14061F4D0 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x14061F5A8 (SdbpReadStringRef.c)
 *     SdbpGetNextIndexedRecord @ 0x14061F60C (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstNamedTag @ 0x1407D712C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1407D71F4 (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x1407D7300 (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpReadMappedData @ 0x1405FD5A8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return v3;
  AslLogCallPrintf(1, (unsigned int)"SdbGetTagFromTagID", 1178, (unsigned int)"Error reading data");
  return 0LL;
}
