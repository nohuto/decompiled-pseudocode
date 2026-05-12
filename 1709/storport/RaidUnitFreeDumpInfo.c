/*
 * XREFs of RaidUnitFreeDumpInfo @ 0x1C003E4C0
 * Callers:
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C0068718 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0068954 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaidUnitCreateDumpInfo @ 0x1C006913C (RaidUnitCreateDumpInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitFreeDumpInfo(PVOID *a1)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)*a1 + 6);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x44436152u);
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
