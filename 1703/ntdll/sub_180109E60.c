/*
 * XREFs of sub_180109E60 @ 0x180109E60
 * Callers:
 *     sub_180058A44 @ 0x180058A44 (sub_180058A44.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180109E60(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v5; // rcx

  v5 = a2 + 8;
  if ( a5 )
    return RtlNumberOfSetBitsInRange(v5, a3, a4);
  else
    return RtlNumberOfClearBitsInRange(v5, a3, a4);
}
