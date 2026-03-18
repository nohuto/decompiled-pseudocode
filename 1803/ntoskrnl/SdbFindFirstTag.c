/*
 * XREFs of SdbFindFirstTag @ 0x1405FD310
 * Callers:
 *     KsepDbGetDriverShims @ 0x1405FC67C (KsepDbGetDriverShims.c)
 *     SdbGetDatabaseID @ 0x1405FC968 (SdbGetDatabaseID.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1405FCA24 (SdbpFindFirstIndexedWildCardTag.c)
 *     InitOnceScanIndexes @ 0x1405FD150 (InitOnceScanIndexes.c)
 *     SdbpSearchDB @ 0x1405FD77C (SdbpSearchDB.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1405FFA84 (SdbpValidateAndApplyCompatFlags.c)
 *     KsepDbCacheReadDevice @ 0x14061DB54 (KsepDbCacheReadDevice.c)
 *     KsepDbReadKFlag @ 0x14061DEC8 (KsepDbReadKFlag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14061DFD8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckForMatch @ 0x14061E3E8 (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x14061E4E4 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x14061E65C (SdbpMatchOsVersion.c)
 *     SdbpCheckMatchingFiles @ 0x14061E740 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x14061F368 (SdbpFindMatchingName.c)
 *     SdbpGetExeEntryFlags @ 0x14061F980 (SdbpGetExeEntryFlags.c)
 *     SdbpMatchCpu @ 0x14061FE88 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x14061FEDC (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x14061FF30 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x14061FF84 (SdbpMatchAcpi.c)
 *     InitOnceGetStringTableOffset @ 0x14064E710 (InitOnceGetStringTableOffset.c)
 *     KsepDbGetShimInfo @ 0x140744DE8 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1407451E8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1407D4E20 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x1407D5208 (SdbReadEntryInformation.c)
 *     SdbpCheckMatchingDevice @ 0x1407D5490 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1407D60E0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1407D6640 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x1407D6A68 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407D6AB4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1407D6CDC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1407D7084 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x1407D712C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1407D71F4 (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x1407D8878 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbGetNextChild @ 0x1405FD384 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x1405FD5F4 (SdbGetFirstChild.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebp
  unsigned int i; // eax
  unsigned int v8; // ebx

  v3 = 0;
  v5 = a2;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, v5, v8) )
  {
    v8 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == a3 )
      return v8;
  }
  return v3;
}
