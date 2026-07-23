/*
 * XREFs of sub_180109E60 @ 0x180109E60
 * Callers:
 *     sub_180058A44 @ 0x180058A44 (sub_180058A44.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_180109E60(__int64 a1, __int64 a2, ULONG a3, ULONG a4, int a5)
{
  _RTL_BITMAP *v5; // rcx

  v5 = (_RTL_BITMAP *)(a2 + 8);
  if ( a5 )
    return RtlNumberOfSetBitsInRange(v5, a3, a4);
  else
    return RtlNumberOfClearBitsInRange(v5, a3, a4);
}
