/*
 * XREFs of MiFreePoolPagesLeft @ 0x1400F0B80
 * Callers:
 *     MmRaisePoolQuota @ 0x1400F10E0 (MmRaisePoolQuota.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140540C50 (ExpQuerySystemPerformanceInformation.c)
 *     MiInitializePagedPoolEvents @ 0x140828D10 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePoolPagesLeft(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  if ( a1 == 5 )
  {
    v1 = qword_140388018;
    v2 = MiState[0];
  }
  else
  {
    v1 = qword_140389348;
    v2 = qword_140389358;
  }
  return v2 - v1;
}
