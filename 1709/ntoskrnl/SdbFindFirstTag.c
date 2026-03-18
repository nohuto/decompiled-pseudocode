/*
 * XREFs of SdbFindFirstTag @ 0x140529448
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x1404F4EE0 (SdbpFindNextIndexedWildCardTag.c)
 *     KsepDbCacheReadDevice @ 0x1404F53B4 (KsepDbCacheReadDevice.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1404F5AC8 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbGetDatabaseID @ 0x1404F5B34 (SdbGetDatabaseID.c)
 *     InitOnceScanIndexes @ 0x140529B20 (InitOnceScanIndexes.c)
 *     SdbpMatchOsVersion @ 0x140541A78 (SdbpMatchOsVersion.c)
 *     SdbpCheckForMatch @ 0x140541C48 (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x140541DF0 (SdbpMatchList.c)
 *     SdbpCheckMatchingFiles @ 0x140541F70 (SdbpCheckMatchingFiles.c)
 *     KsepDbGetDriverShims @ 0x140546B28 (KsepDbGetDriverShims.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140547B48 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x14054AA7C (SdbpSearchDB.c)
 *     InitOnceGetStringTableOffset @ 0x14059E170 (InitOnceGetStringTableOffset.c)
 *     SdbpFindMatchingName @ 0x1405DB244 (SdbpFindMatchingName.c)
 *     KsepDbGetShimInfo @ 0x1405E8B58 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1406DAFBC (KsepDbReadKData.c)
 *     KsepDbReadKFlag @ 0x1406DB184 (KsepDbReadKFlag.c)
 *     SdbQueryDataExTagID @ 0x14076DCDC (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x14076E0C4 (SdbReadEntryInformation.c)
 *     SdbpCheckMatchingDevice @ 0x14076E340 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckPackageAttributes @ 0x14076EF30 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x14076F34C (SdbpGetDeviceDWORD.c)
 *     SdbpGetExeEntryFlags @ 0x14076F398 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x14076F4D4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14076F6FC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchAcpi @ 0x14076FA1C (SdbpMatchAcpi.c)
 *     SdbpMatchBios @ 0x14076FAF8 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x14076FB90 (SdbpMatchCpu.c)
 *     SdbpMatchDeviceString @ 0x14076FCD8 (SdbpMatchDeviceString.c)
 *     SdbpMatchOem @ 0x14076FD48 (SdbpMatchOem.c)
 *     SdbFindFirstNamedTag @ 0x14076FE2C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14076FEF4 (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x140771748 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140524CF8 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x140526D20 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1405298B8 (SdbGetFirstChild.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, unsigned int a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int i; // eax
  unsigned int v8; // ebx

  v3 = 0;
  for ( i = SdbGetFirstChild(); ; i = SdbGetNextChild(a1, a2, v8) )
  {
    v8 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == a3 )
      return v8;
  }
  return v3;
}
