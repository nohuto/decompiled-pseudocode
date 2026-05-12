/*
 * XREFs of RaidAdapterFreeDumpInfo @ 0x1C002D298
 * Callers:
 *     RaidAdapterCreateDumpInfo @ 0x1C0066170 (RaidAdapterCreateDumpInfo.c)
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C0068718 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0068954 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterFreeDumpInfo(PVOID *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx

  v2 = (_QWORD *)*((_QWORD *)*a1 + 6);
  if ( v2 )
  {
    v3 = (void *)v2[5];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x44436152u);
    ExFreePoolWithTag(v2, 0x44436152u);
  }
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
