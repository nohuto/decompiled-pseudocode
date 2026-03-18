/*
 * XREFs of SdbReadQWORDTag @ 0x14061DF68
 * Callers:
 *     KsepDbReadKFlag @ 0x14061DEC8 (KsepDbReadKFlag.c)
 *     SdbpMatchOsVersion @ 0x14061E65C (SdbpMatchOsVersion.c)
 *     KsepDbReadKData @ 0x1407451E8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1407D4E20 (SdbQueryDataExTagID.c)
 *     SdbpCheckPackageAttributes @ 0x1407D6640 (SdbpCheckPackageAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1407D6CDC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x1407D8878 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbpReadTagData @ 0x1405FD0CC (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int TagData; // eax
  __int64 v7; // rcx
  int TagFromTagID; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    TagData = SdbpReadTagData(a1, v4, (__int64)&v10, 8u);
    v7 = v10;
    if ( !TagData )
      return a3;
    return v7;
  }
  else
  {
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadQWORDTag",
      157,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type",
      v4,
      TagFromTagID);
    return a3;
  }
}
