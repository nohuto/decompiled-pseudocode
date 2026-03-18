/*
 * XREFs of KeQueryEffectiveBasePriorityThread @ 0x14002A0A0
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x140029F68 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 */

__int64 __fastcall KeQueryEffectiveBasePriorityThread(__int64 a1)
{
  bool v2; // zf
  __int64 result; // rax

  v2 = (unsigned __int8)KiIsThreadRankNonZero(a1, 0LL) == 0;
  result = 1LL;
  if ( v2 )
    return (unsigned int)*(char *)(a1 + 563);
  return result;
}
