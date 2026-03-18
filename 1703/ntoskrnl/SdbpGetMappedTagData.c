/*
 * XREFs of SdbpGetMappedTagData @ 0x1404B5810
 * Callers:
 *     SdbpGetIndex @ 0x1404B5630 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1404B5740 (SdbpGetFirstIndexedRecord.c)
 *     SdbGetStringTagPtr @ 0x1405BC274 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x1405BC2F0 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetNextIndexedRecord @ 0x1405BC47C (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x1406AFA30 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x14072AFB4 (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x14072CEC8 (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpGetTagHeadSize @ 0x140487D88 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, unsigned int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx

  v3 = a2 + SdbpGetTagHeadSize(a1, a2);
  if ( v3 >= *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMappedData",
      666,
      (unsigned int)"Trying to read mapped data past the end of the database offset 0x%x size 0x%x");
    v4 = 0LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(a1 + 8) + v3;
  if ( !v4 )
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMappedTagData", 462, (unsigned int)"Error getting ptr to tag data");
  return v4;
}
