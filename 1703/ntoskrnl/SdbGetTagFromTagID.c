/*
 * XREFs of SdbGetTagFromTagID @ 0x140486FF0
 * Callers:
 *     SdbGetTagDataSize @ 0x140486F3C (SdbGetTagDataSize.c)
 *     SdbpGetNextTagId @ 0x1404870EC (SdbpGetNextTagId.c)
 *     SdbGetNextChild @ 0x140488AE8 (SdbGetNextChild.c)
 *     SdbReadBinaryTag @ 0x1404AFBE4 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1404AFD04 (SdbReadDWORDTag.c)
 *     InitOnceScanIndexes @ 0x1404AFD80 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     SdbGetFirstChild @ 0x1404AFFB4 (SdbGetFirstChild.c)
 *     SdbReadWORDTag @ 0x1404B0010 (SdbReadWORDTag.c)
 *     SdbFindNextTag @ 0x1404B0100 (SdbFindNextTag.c)
 *     SdbpGetIndex @ 0x1404B5630 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1404B5740 (SdbpGetFirstIndexedRecord.c)
 *     SdbpFindMatcher @ 0x1405BB454 (SdbpFindMatcher.c)
 *     SdbGetStringTagPtr @ 0x1405BC274 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1405BC340 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x1405BC418 (SdbpReadStringRef.c)
 *     SdbpGetNextIndexedRecord @ 0x1405BC47C (SdbpGetNextIndexedRecord.c)
 *     SdbReadQWORDTag @ 0x1405DA234 (SdbReadQWORDTag.c)
 *     SdbFindFirstNamedTag @ 0x14072CCF4 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14072CDBC (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x14072CEC8 (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpReadMappedData @ 0x140487024 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return v3;
  AslLogCallPrintf(1, (unsigned int)"SdbGetTagFromTagID", 1131, (unsigned int)"Error reading data");
  return 0LL;
}
