/*
 * XREFs of UpdateInternalStatsOnFlush @ 0x1C020377C
 * Callers:
 *     LookUpTableFlushComplete @ 0x1C0123C84 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1C0203704 (LookUpTableFlushPartial.c)
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
