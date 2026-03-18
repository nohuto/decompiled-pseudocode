/*
 * XREFs of MiFreePartitionPageRun @ 0x14021DED4
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14021CCD8 (MiActOnPartitionNodePages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1406BC714 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiFreeMdlPageRun @ 0x1400B3B5C (MiFreeMdlPageRun.c)
 *     MiReleaseNonPagedResources @ 0x14015B598 (MiReleaseNonPagedResources.c)
 */

ULONG_PTR *__fastcall MiFreePartitionPageRun(ULONG_PTR *a1, __int64 a2, unsigned __int64 a3, int a4)
{
  ULONG_PTR *result; // rax
  ULONG_PTR *v6; // rbx

  result = (ULONG_PTR *)MiFreeMdlPageRun(a2, a3, a4 == 1);
  v6 = result;
  if ( result )
  {
    MiReleaseNonPagedResources((__int64)a1, (unsigned __int64)result);
    result = &MiSystemPartition;
    if ( a1 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_14036D120, -(__int64)v6);
  }
  return result;
}
