/*
 * XREFs of SdbGetStringTagPtr @ 0x1404F5740
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x1404F4EE0 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x140541F70 (SdbpCheckMatchingFiles.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140547B48 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x14054AA7C (SdbpSearchDB.c)
 *     SdbpFindMatchingName @ 0x1405DB244 (SdbpFindMatchingName.c)
 *     KsepDbGetSdbString @ 0x1405E8DD0 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x1406DAFBC (KsepDbReadKData.c)
 *     KsepDbReadKFlag @ 0x1406DB184 (KsepDbReadKFlag.c)
 *     SdbQueryDataExTagID @ 0x14076DCDC (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingDevice @ 0x14076E340 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckPackageAttributes @ 0x14076EF30 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x14076F4D4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14076F6FC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x14076FCD8 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x14076FE2C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14076FEF4 (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x140771748 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbpGetMappedStringFromTable @ 0x1404F57BC (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x1404F58E4 (SdbpReadStringRef.c)
 *     SdbGetTagFromTagID @ 0x140524CF8 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x14054A818 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int16 v5; // ax
  unsigned int StringRef; // eax
  const char *v9; // r9
  int v10; // r8d

  v2 = 0LL;
  if ( a1 )
  {
    v5 = SdbGetTagFromTagID() & 0xF000;
    if ( v5 == (__int16)0x8000 )
      return SdbpGetMappedTagData(a1, a2);
    if ( v5 != 24576 )
      return v2;
    StringRef = SdbpReadStringRef(a1, a2);
    if ( StringRef )
      return SdbpGetMappedStringFromTable(a1, StringRef);
    v9 = "Error getting StringRef";
    v10 = 655;
  }
  else
  {
    v9 = "Invalid pdb";
    v10 = 635;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbGetStringTagPtr", v10, (_DWORD)v9);
  return 0LL;
}
