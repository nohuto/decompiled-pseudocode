/*
 * XREFs of MiFreePoolPagesLeft @ 0x140085050
 * Callers:
 *     MmRaisePoolQuota @ 0x14002C9D0 (MmRaisePoolQuota.c)
 *     MiFreeExcessSegments @ 0x140126A94 (MiFreeExcessSegments.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1404E9AF0 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x14080432C (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_14036BD18;
    v2 = MiState;
  }
  else
  {
    v1 = qword_14036D088;
    v2 = qword_14036D098;
  }
  return v2 - v1;
}
