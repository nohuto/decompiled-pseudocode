/*
 * XREFs of SdbpGetMappedTagData @ 0x14054A818
 * Callers:
 *     SdbGetStringTagPtr @ 0x1404F5740 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x1404F57BC (SdbpGetMappedStringFromTable.c)
 *     SdbpGetIndex @ 0x140547EB4 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14054A748 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x1405DB2DC (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x1406DAFBC (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x14076DCDC (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x140770000 (SdbGetBinaryTagData.c)
 * Callees:
 *     SdbpGetTagHeadSize @ 0x1405252D8 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
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
      715,
      (unsigned int)"Trying to read mapped data past the end of the database offset 0x%x size 0x%x");
    v4 = 0LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(a1 + 8) + v3;
  if ( !v4 )
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMappedTagData", 463, (unsigned int)"Error getting ptr to tag data");
  return v4;
}
