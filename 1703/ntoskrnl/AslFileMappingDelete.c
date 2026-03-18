/*
 * XREFs of AslFileMappingDelete @ 0x1404B42DC
 * Callers:
 *     SdbCloseDatabaseRead @ 0x140453518 (SdbCloseDatabaseRead.c)
 *     SdbGetDatabaseMatch @ 0x1404B41A0 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreate @ 0x1404B445C (AslFileMappingCreate.c)
 *     SdbpCheckKObject @ 0x1405BB128 (SdbpCheckKObject.c)
 *     SdbpCheckMatchingFiles @ 0x1405BB5C0 (SdbpCheckMatchingFiles.c)
 *     AslFileMappingCreateFromImageView @ 0x1405C6FC4 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x14072AD3C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x14072BDB4 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     RtlFileMapFree @ 0x14006D794 (RtlFileMapFree.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
