/*
 * XREFs of SdbReadDWORDTag @ 0x1405FCF24
 * Callers:
 *     KsepDbGetDriverShims @ 0x1405FC67C (KsepDbGetDriverShims.c)
 *     InitOnceScanIndexes @ 0x1405FD150 (InitOnceScanIndexes.c)
 *     SdbpGetExeEntryFlags @ 0x14061F980 (SdbpGetExeEntryFlags.c)
 *     KsepDbGetShimInfo @ 0x140744DE8 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1407451E8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1407D4E20 (SdbQueryDataExTagID.c)
 *     SdbpCheckOSKind @ 0x1407D65F0 (SdbpCheckOSKind.c)
 *     SdbpCheckPackageAttributes @ 0x1407D6640 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x1407D6890 (SdbpCheckRuntimePlatform.c)
 *     SdbpGetDeviceDWORD @ 0x1407D6A68 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407D6AB4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1407D6CDC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x1407D8878 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbpReadTagData @ 0x1405FD0CC (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  int TagFromTagID; // [rsp+28h] [rbp-10h]
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  if ( (((__int64 (*)(void))SdbGetTagFromTagID)() & 0xF000) == 0x4000 )
  {
    v6 = SdbpReadTagData(a1, a2, &v10, 4LL);
    v7 = v10;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadDWORDTag",
      150,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type",
      a2,
      TagFromTagID);
    return a3;
  }
}
