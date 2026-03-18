/*
 * XREFs of AslFileMappingDelete @ 0x1405FC298
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1405FC168 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreate @ 0x1405FC418 (AslFileMappingCreate.c)
 *     SdbCloseDatabaseRead @ 0x1405FFB88 (SdbCloseDatabaseRead.c)
 *     SdbpCheckKObject @ 0x14061E2B8 (SdbpCheckKObject.c)
 *     SdbpCheckMatchingFiles @ 0x14061E740 (SdbpCheckMatchingFiles.c)
 *     AslFileMappingCreateFromImageView @ 0x140644174 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x1407D4BA8 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x1407D5CE4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1407D60E0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlFileMapFree @ 0x1401618FC (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall AslFileMappingDelete(PVOID *P)
{
  PVOID v2; // rcx

  if ( P )
  {
    RtlFileMapFree(P + 1);
    v2 = P[9];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x74705041u);
      P[9] = 0LL;
    }
    if ( *P )
    {
      ExFreePoolWithTag(*P, 0x74705041u);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x74705041u);
  }
}
