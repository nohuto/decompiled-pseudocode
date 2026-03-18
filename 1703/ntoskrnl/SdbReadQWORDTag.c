/*
 * XREFs of SdbReadQWORDTag @ 0x1405DA234
 * Callers:
 *     SdbpMatchOsVersion @ 0x1405BB4D8 (SdbpMatchOsVersion.c)
 *     KsepDbReadKFlag @ 0x1405DA194 (KsepDbReadKFlag.c)
 *     KsepDbReadKData @ 0x1406AFA30 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x14072AFB4 (SdbQueryDataExTagID.c)
 *     SdbpCheckPackageAttributes @ 0x14072C200 (SdbpCheckPackageAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14072C8AC (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpCheckAllAttributes @ 0x14072DD80 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140486FF0 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1404B0084 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    v6 = SdbpReadTagData(a1, v4, &v9, 8u);
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
      (unsigned int)"SdbReadQWORDTag",
      156,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return a3;
  }
}
