/*
 * XREFs of UpdateInternalStatsOnFlush @ 0x1C00ADD24
 * Callers:
 *     LookUpTableFlushComplete @ 0x1C006D860 (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x1C00ADCAC (LookUpTableFlushPartial.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateInternalStatsOnFlush(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 368) > a2 || !*(_QWORD *)(a1 + 352) )
      *(_DWORD *)(a1 + 368) = a2;
    if ( *(_DWORD *)(a1 + 364) < a2 )
      *(_DWORD *)(a1 + 364) = a2;
    ++*(_QWORD *)(a1 + 352);
    result = a2;
    *(_QWORD *)(a1 + 344) += a2;
  }
  return result;
}
