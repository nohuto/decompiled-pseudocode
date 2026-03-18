/*
 * XREFs of MiHotRemovePartitionPageRun @ 0x1406EE2FC
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402360CC (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x1400CF13C (MiReleaseNonPagedResources.c)
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiHotRemovePartitionPageRun(struct _KPRCB *a1, unsigned __int64 a2)
{
  int v3; // edi

  v3 = MiRemovePhysicalMemory(a1, a2, 528);
  if ( v3 >= 0 )
  {
    MiReleaseNonPagedResources((__int64)&MiSystemPartition, a2);
    _InterlockedExchangeAdd64(&qword_1403893E0, -(__int64)a2);
  }
  return (unsigned int)v3;
}
