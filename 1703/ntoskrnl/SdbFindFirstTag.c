/*
 * XREFs of SdbFindFirstTag @ 0x1404AFF40
 * Callers:
 *     SdbpValidateAndApplyCompatFlags @ 0x1404AFB78 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbGetDatabaseID @ 0x1404AFC58 (SdbGetDatabaseID.c)
 *     InitOnceScanIndexes @ 0x1404AFD80 (InitOnceScanIndexes.c)
 *     KsepDbGetDriverShims @ 0x1404B502C (KsepDbGetDriverShims.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1404B5314 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x1404B5980 (SdbpSearchDB.c)
 *     KsepDbGetShimInfo @ 0x140599338 (KsepDbGetShimInfo.c)
 *     KsepDbCacheReadDevice @ 0x1405ACD7C (KsepDbCacheReadDevice.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1405BAE5C (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckForMatch @ 0x1405BB258 (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x1405BB354 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x1405BB4D8 (SdbpMatchOsVersion.c)
 *     SdbpCheckMatchingFiles @ 0x1405BB5C0 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x1405BC1DC (SdbpFindMatchingName.c)
 *     InitOnceGetStringTableOffset @ 0x1405CFB20 (InitOnceGetStringTableOffset.c)
 *     SdbpGetExeEntryFlags @ 0x1405D72A4 (SdbpGetExeEntryFlags.c)
 *     KsepDbReadKFlag @ 0x1405DA194 (KsepDbReadKFlag.c)
 *     SdbpMatchAcpi @ 0x1405DAC34 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1405DAC88 (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1405DACDC (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1405DAD30 (SdbpMatchCpu.c)
 *     KsepDbReadKData @ 0x1406AFA30 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x14072AFB4 (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x14072B390 (SdbReadEntryInformation.c)
 *     SdbpCheckMatchingDevice @ 0x14072B610 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckPackageAttributes @ 0x14072C200 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x14072C638 (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x14072C684 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14072C8AC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x14072CC54 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x14072CCF4 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14072CDBC (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x14072DD80 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140486FF0 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x140488AE8 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x1404AFFB4 (SdbGetFirstChild.c)
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
