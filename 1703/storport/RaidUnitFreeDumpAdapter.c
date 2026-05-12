/*
 * XREFs of RaidUnitFreeDumpAdapter @ 0x1C003D504
 * Callers:
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C003B420 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C003B5F8 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaidUnitCreateDumpAdapter @ 0x1C003CB54 (RaidUnitCreateDumpAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitFreeDumpAdapter(PVOID *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx

  v2 = (_QWORD *)*((_QWORD *)*a1 + 6);
  if ( v2 )
  {
    v3 = (void *)v2[31];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x44436152u);
    ExFreePoolWithTag(v2, 0x44436152u);
  }
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
