/*
 * XREFs of Normalization__GuessCharCountBySize @ 0x1406ED8E4
 * Callers:
 *     Normalization__Normalize @ 0x1406EDFCC (Normalization__Normalize.c)
 *     RtlpNormalizeStringWorker @ 0x1406EEB20 (RtlpNormalizeStringWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Normalization__GuessCharCountBySize(__int64 a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)(a2 + (a2 >> 3));
  if ( (int)result < 64 )
  {
    result = (unsigned int)(a2 * *(_DWORD *)(a1 + 24));
    if ( (int)result > 64 )
      return 64LL;
  }
  return result;
}
