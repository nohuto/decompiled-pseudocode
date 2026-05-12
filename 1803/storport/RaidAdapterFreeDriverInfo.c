/*
 * XREFs of RaidAdapterFreeDriverInfo @ 0x1C00260A8
 * Callers:
 *     RaidAdapterCreateDriverInfo @ 0x1C0062BAC (RaidAdapterCreateDriverInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C0062DC8 (RaidAdapterCreateDumpInfo.c)
 *     RaUnitStorageFreeDumpInfoIoctl @ 0x1C00669A8 (RaUnitStorageFreeDumpInfoIoctl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0066BF4 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterFreeDriverInfo(PVOID **a1)
{
  PVOID *v2; // rcx

  v2 = *a1;
  if ( v2[3] )
  {
    ExFreePoolWithTag(v2[3], 0x44436152u);
    v2 = *a1;
  }
  if ( v2[4] )
  {
    ExFreePoolWithTag(v2[4], 0x44436152u);
    v2 = *a1;
  }
  if ( v2[5] )
  {
    ExFreePoolWithTag(v2[5], 0x44436152u);
    v2 = *a1;
  }
  if ( v2[6] )
  {
    ExFreePoolWithTag(v2[6], 0x44436152u);
    v2 = *a1;
  }
  if ( v2[8] )
  {
    ExFreePoolWithTag(v2[8], 0x44436152u);
    v2 = *a1;
  }
  ExFreePoolWithTag(v2, 0x44436152u);
}
