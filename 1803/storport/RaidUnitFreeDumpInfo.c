/*
 * XREFs of RaidUnitFreeDumpInfo @ 0x1C003CAA0
 * Callers:
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C00669A8 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0066BF4 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaidUnitCreateDumpInfo @ 0x1C00672DC (RaidUnitCreateDumpInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitFreeDumpInfo(PVOID **a1)
{
  PVOID *v2; // rcx

  v2 = *a1;
  if ( v2[6] )
  {
    ExFreePoolWithTag(v2[6], 0x44436152u);
    v2 = *a1;
  }
  ExFreePoolWithTag(v2, 0x44436152u);
  *a1 = 0LL;
}
