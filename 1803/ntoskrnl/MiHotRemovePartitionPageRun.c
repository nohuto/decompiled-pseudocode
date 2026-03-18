/*
 * XREFs of MiHotRemovePartitionPageRun @ 0x1407577B8
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14013A6A0 (MiReleaseNonPagedResources.c)
 *     MiRemovePhysicalMemory @ 0x14074B030 (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiHotRemovePartitionPageRun(__int64 a1, unsigned __int64 a2)
{
  int v3; // edi

  v3 = MiRemovePhysicalMemory(a1, a2, 528);
  if ( v3 >= 0 )
  {
    MiReleaseNonPagedResources((__int64)&MiSystemPartition, a2);
    _InterlockedExchangeAdd64(&qword_1403CC658, -(__int64)a2);
  }
  return (unsigned int)v3;
}
