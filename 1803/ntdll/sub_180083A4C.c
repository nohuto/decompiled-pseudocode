/*
 * XREFs of sub_180083A4C @ 0x180083A4C
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18005A240 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800297E0 (RtlRunOnceExecuteOnce.c)
 *     RtlGetSuiteMask @ 0x18005A990 (RtlGetSuiteMask.c)
 */

__int64 __fastcall sub_180083A4C(_DWORD *a1)
{
  if ( BYTE1(qword_18015D468) )
  {
    *a1 = BYTE1(qword_18015D468);
  }
  else if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    *a1 = 20;
  }
  else
  {
    RtlRunOnceExecuteOnce(&stru_18015D3D0, sub_18008A2B0, 0LL, 0LL);
    *a1 = dword_1801596E0;
  }
  return 0LL;
}
