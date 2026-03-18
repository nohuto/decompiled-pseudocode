/*
 * XREFs of MiIsVaRangeAvailable @ 0x1404D2314
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x1400A5420 (MiCheckForConflictingVadExistence.c)
 */

_BOOL8 __fastcall MiIsVaRangeAvailable(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8

  v4 = 0x7FFFFFFDFFFFLL;
  if ( a4 )
    v4 = a4;
  v5 = a2 + a3 - 1;
  return (a2 >= 0x10000 || *(_QWORD *)(a1 + 1808)) && v5 <= v4 && v5 > a2 && !MiCheckForConflictingVadExistence();
}
