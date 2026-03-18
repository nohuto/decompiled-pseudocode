/*
 * XREFs of SdbGetTagFromTagID @ 0x140524CF8
 * Callers:
 *     SdbGetStringTagPtr @ 0x1404F5740 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1404F580C (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x1404F58E4 (SdbpReadStringRef.c)
 *     SdbReadBinaryTag @ 0x1404F5BE0 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1404F5C54 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x1404F5CC4 (SdbReadWORDTag.c)
 *     SdbpGetNextTagId @ 0x140524BBC (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x140524C44 (SdbGetTagDataSize.c)
 *     SdbGetNextChild @ 0x140526D20 (SdbGetNextChild.c)
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
 *     SdbGetFirstChild @ 0x1405298B8 (SdbGetFirstChild.c)
 *     InitOnceScanIndexes @ 0x140529B20 (InitOnceScanIndexes.c)
 *     SdbpFindMatcher @ 0x140541EEC (SdbpFindMatcher.c)
 *     SdbpGetIndex @ 0x140547EB4 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14054A748 (SdbpGetFirstIndexedRecord.c)
 *     SdbFindNextTag @ 0x14058EB9C (SdbFindNextTag.c)
 *     SdbpGetNextIndexedRecord @ 0x1405DB2DC (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstNamedTag @ 0x14076FE2C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14076FEF4 (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x140770000 (SdbGetBinaryTagData.c)
 *     SdbReadQWORDTag @ 0x140770074 (SdbReadQWORDTag.c)
 * Callees:
 *     SdbpReadMappedData @ 0x140524D2C (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
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
