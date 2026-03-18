/*
 * XREFs of UpdateInternalStatsOnFlush @ 0x1404F09E8
 * Callers:
 *     LookUpTableFlushComplete @ 0x1404F06DC (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1404F08D4 (LookUpTableFlushPartial.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateInternalStatsOnFlush(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 312) > a2 || !*(_QWORD *)(a1 + 296) )
      *(_DWORD *)(a1 + 312) = a2;
    if ( *(_DWORD *)(a1 + 308) < a2 )
      *(_DWORD *)(a1 + 308) = a2;
    ++*(_QWORD *)(a1 + 296);
    result = a2;
    *(_QWORD *)(a1 + 288) += a2;
  }
  return result;
}
