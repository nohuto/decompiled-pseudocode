/*
 * XREFs of SdbReadDWORDTag @ 0x1404AFD04
 * Callers:
 *     InitOnceScanIndexes @ 0x1404AFD80 (InitOnceScanIndexes.c)
 *     KsepDbGetDriverShims @ 0x1404B502C (KsepDbGetDriverShims.c)
 *     KsepDbGetShimInfo @ 0x140599338 (KsepDbGetShimInfo.c)
 *     SdbpGetExeEntryFlags @ 0x1405D72A4 (SdbpGetExeEntryFlags.c)
 *     KsepDbReadKData @ 0x1406AFA30 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x14072AFB4 (SdbQueryDataExTagID.c)
 *     SdbpCheckOSKind @ 0x14072C1B0 (SdbpCheckOSKind.c)
 *     SdbpCheckPackageAttributes @ 0x14072C200 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckRuntimePlatform @ 0x14072C450 (SdbpCheckRuntimePlatform.c)
 *     SdbpCheckRuntimePlatformV2 @ 0x14072C4B4 (SdbpCheckRuntimePlatformV2.c)
 *     SdbpGetDeviceDWORD @ 0x14072C638 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x14072C684 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14072C8AC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x14072DD80 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140486FF0 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1404B0084 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadDWORDTag(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x4000 )
  {
    v6 = SdbpReadTagData(a1, v4, &v9, 4LL);
    v7 = v9;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadDWORDTag",
      149,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return a3;
  }
}
