/*
 * XREFs of sub_18008A924 @ 0x18008A924
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18000F560 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x18000FC90 (RtlGetSuiteMask.c)
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall sub_18008A924(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( BYTE1(qword_18015C428) )
  {
    *a1 = BYTE1(qword_18015C428);
  }
  else if ( (RtlGetSuiteMask((__int64)a1, a2, a3, a4) & 0x10000) != 0 )
  {
    *a1 = 20;
  }
  else
  {
    RtlRunOnceExecuteOnce(
      &qword_18015C398,
      (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, __int64 *))sub_18008CDE0,
      0LL,
      0LL);
    *a1 = dword_18015868C;
  }
  return 0LL;
}
