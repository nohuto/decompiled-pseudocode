/*
 * XREFs of SdbGetStringTagPtr @ 0x14061F404
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1405FCA24 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x1405FD77C (SdbpSearchDB.c)
 *     KsepDbReadKFlag @ 0x14061DEC8 (KsepDbReadKFlag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14061DFD8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x14061E740 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x14061F368 (SdbpFindMatchingName.c)
 *     KsepDbGetSdbString @ 0x140744DB4 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x1407451E8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1407D4E20 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingDevice @ 0x1407D5490 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1407D60E0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x1407D6640 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407D6AB4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1407D6CDC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1407D7084 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x1407D712C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1407D71F4 (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x1407D8878 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x1405FCF94 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedStringFromTable @ 0x14061F480 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x14061F5A8 (SdbpReadStringRef.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int16 v5; // ax
  unsigned int StringRef; // eax

  v2 = 0LL;
  v3 = a2;
  if ( a1 )
  {
    v5 = SdbGetTagFromTagID(a1, a2) & 0xF000;
    if ( v5 == (__int16)0x8000 )
      return SdbpGetMappedTagData(a1, v3);
    if ( v5 != 24576 )
      return v2;
    StringRef = SdbpReadStringRef(a1, v3);
    if ( StringRef )
      return SdbpGetMappedStringFromTable(a1, StringRef);
    AslLogCallPrintf(1, (unsigned int)"SdbGetStringTagPtr", 655, (unsigned int)"Error getting StringRef");
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbGetStringTagPtr", 635, (unsigned int)"Invalid pdb");
  }
  return 0LL;
}
