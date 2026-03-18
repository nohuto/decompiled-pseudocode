/*
 * XREFs of MiFreePartitionPageRun @ 0x1406EE05C
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402360CC (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x1400CF13C (MiReleaseNonPagedResources.c)
 *     MiFreeMdlPageRun @ 0x1400E1354 (MiFreeMdlPageRun.c)
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
      _InterlockedExchangeAdd64(&qword_1403893E0, -(__int64)v6);
  }
  return result;
}
