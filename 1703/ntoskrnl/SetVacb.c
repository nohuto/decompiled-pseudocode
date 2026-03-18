/*
 * XREFs of SetVacb @ 0x1400AA800
 * Callers:
 *     CcGetVacbMiss @ 0x1400A9104 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViews @ 0x1401613C4 (CcUnmapInactiveViews.c)
 *     CcDereferenceFileOffset @ 0x1401DE608 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401DE7D8 (CcReferenceFileOffset.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x14011C014 (CcSetVacbLargeOffset.c)
 */

char __fastcall SetVacb(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  char v3; // r10

  v3 = 1;
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
    return CcSetVacbLargeOffset();
  if ( a3 < 0xFFFFFFFFFFFFFFFEuLL )
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)a2 >> 18)) = a3;
  return v3;
}
