/*
 * XREFs of MiDereferenceCombineCrc @ 0x1406BF700
 * Callers:
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 * Callees:
 *     MiDecrementCombinedPte @ 0x140078BE8 (MiDecrementCombinedPte.c)
 */

__int64 __fastcall MiDereferenceCombineCrc(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  if ( (unsigned int)v1 < 0x100 || !*(_QWORD *)(v1 + 24) )
    return 0LL;
  MiDecrementCombinedPte(v1 + 48);
  return 1LL;
}
