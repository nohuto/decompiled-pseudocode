/*
 * XREFs of SdbGetStringTagPtr @ 0x1405BC274
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1404B5314 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x1404B5980 (SdbpSearchDB.c)
 *     KsepDbGetSdbString @ 0x1405995B0 (KsepDbGetSdbString.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1405BAE5C (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x1405BB5C0 (SdbpCheckMatchingFiles.c)
 *     SdbpFindMatchingName @ 0x1405BC1DC (SdbpFindMatchingName.c)
 *     KsepDbReadKFlag @ 0x1405DA194 (KsepDbReadKFlag.c)
 *     KsepDbReadKData @ 0x1406AFA30 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x14072AFB4 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingDevice @ 0x14072B610 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckPackageAttributes @ 0x14072C200 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x14072C684 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14072C8AC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x14072CC54 (SdbpMatchDeviceString.c)
 *     SdbFindFirstNamedTag @ 0x14072CCF4 (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x14072CDBC (SdbpFindNextNamedTag.c)
 *     SdbpCheckAllAttributes @ 0x14072DD80 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140486FF0 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x1404B5810 (SdbpGetMappedTagData.c)
 *     SdbpGetMappedStringFromTable @ 0x1405BC2F0 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x1405BC418 (SdbpReadStringRef.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int16 v5; // ax
  unsigned int StringRef; // eax
  const char *v9; // r9
  int v10; // r8d

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
    v9 = "Error getting StringRef";
    v10 = 645;
  }
  else
  {
    v9 = "Invalid pdb";
    v10 = 625;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbGetStringTagPtr", v10, (_DWORD)v9);
  return 0LL;
}
