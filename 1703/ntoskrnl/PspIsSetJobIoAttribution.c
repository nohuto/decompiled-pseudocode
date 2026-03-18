/*
 * XREFs of PspIsSetJobIoAttribution @ 0x14054D180
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14054BD84 (PspEstablishJobHierarchy.c)
 *     PspSetJobIoAttribution @ 0x14054D468 (PspSetJobIoAttribution.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

char __fastcall PspIsSetJobIoAttribution(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  char v4; // bl

  v3 = *(_QWORD *)(a1 + 1072);
  v4 = 0;
  while ( v3 )
  {
    if ( *(_DWORD *)(v3 + 1332) )
      return 1;
    v3 = *(_QWORD *)(v3 + 1072);
  }
  if ( !a3
    && (int)PspEnumJobsAndProcessesInJobHierarchy((char *)a1, (int)PspIsSetJobIoAttributionJobPreCallback, 0, 0, a1, 5) < 0 )
  {
    return 1;
  }
  return v4;
}
