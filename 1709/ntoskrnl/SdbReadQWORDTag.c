/*
 * XREFs of SdbReadQWORDTag @ 0x140770074
 * Callers:
 *     SdbpMatchOsVersion @ 0x140541A78 (SdbpMatchOsVersion.c)
 *     KsepDbReadKData @ 0x1406DAFBC (KsepDbReadKData.c)
 *     KsepDbReadKFlag @ 0x1406DB184 (KsepDbReadKFlag.c)
 *     SdbQueryDataExTagID @ 0x14076DCDC (SdbQueryDataExTagID.c)
 *     SdbpCheckPackageAttributes @ 0x14076EF30 (SdbpCheckPackageAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14076F6FC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x140771748 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbpReadTagData @ 0x1404F5D38 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140524CF8 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int TagData; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    TagData = SdbpReadTagData(a1, v4, (__int64)&v9, 8u);
    v8 = v9;
    if ( !TagData )
      return a3;
    return v8;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadQWORDTag",
      157,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return a3;
  }
}
