/*
 * XREFs of sub_18008A924 @ 0x18008A924
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18000F560 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x18000FC90 (RtlGetSuiteMask.c)
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall sub_18008A924(_DWORD *a1)
{
  if ( BYTE1(qword_18015C428) )
  {
    *a1 = BYTE1(qword_18015C428);
  }
  else if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    *a1 = 20;
  }
  else
  {
    RtlRunOnceExecuteOnce(&stru_18015C398, sub_18008CDE0, 0LL, 0LL);
    *a1 = dword_18015868C;
  }
  return 0LL;
}
