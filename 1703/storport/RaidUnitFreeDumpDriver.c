/*
 * XREFs of RaidUnitFreeDumpDriver @ 0x1C003D5A8
 * Callers:
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C003B420 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C003B5F8 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaidUnitCreateDumpAdapter @ 0x1C003CB54 (RaidUnitCreateDumpAdapter.c)
 *     RaidUnitCreateDumpDriver @ 0x1C003D2B0 (RaidUnitCreateDumpDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitFreeDumpDriver(PVOID *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = (void *)*((_QWORD *)*a1 + 3);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x44436152u);
  v3 = (void *)*((_QWORD *)*a1 + 4);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x44436152u);
  v4 = (void *)*((_QWORD *)*a1 + 5);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x44436152u);
  v5 = (void *)*((_QWORD *)*a1 + 6);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x44436152u);
  v6 = (void *)*((_QWORD *)*a1 + 8);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x44436152u);
  ExFreePoolWithTag(*a1, 0x44436152u);
}
