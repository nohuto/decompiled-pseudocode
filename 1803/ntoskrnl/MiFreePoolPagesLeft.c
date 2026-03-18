/*
 * XREFs of MiFreePoolPagesLeft @ 0x14008072C
 * Callers:
 *     MmRaisePoolQuota @ 0x140080320 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x14052C950 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x14089CF34 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_1403CB118;
    v2 = MiState[0];
  }
  else
  {
    v1 = qword_1403CC5C8;
    v2 = qword_1403CC5D8;
  }
  return v2 - v1;
}
