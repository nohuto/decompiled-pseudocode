/*
 * XREFs of SdbpGetMappedTagData @ 0x1405FCF94
 * Callers:
 *     SdbpGetIndex @ 0x1405FCD40 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1405FCE50 (SdbpGetFirstIndexedRecord.c)
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x14061F480 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetNextIndexedRecord @ 0x14061F60C (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x1407451E8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1407D4E20 (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x1407D7300 (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpGetTagHeadSize @ 0x1405FD3F4 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx
  int v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+28h] [rbp-10h]

  v3 = a2 + SdbpGetTagHeadSize();
  if ( v3 >= *(_DWORD *)(a1 + 20) )
  {
    v7 = *(_DWORD *)(a1 + 20);
    v6 = v3;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMappedData",
      715,
      (unsigned int)"Trying to read mapped data past the end of the database offset 0x%x size 0x%x",
      v6,
      v7);
    v4 = 0LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(a1 + 8) + v3;
  if ( !v4 )
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMappedTagData", 463, (unsigned int)"Error getting ptr to tag data");
  return v4;
}
