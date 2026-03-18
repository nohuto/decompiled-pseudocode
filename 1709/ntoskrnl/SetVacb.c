/*
 * XREFs of SetVacb @ 0x1401E2070
 * Callers:
 *     CcDereferenceFileOffset @ 0x1401E15A4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401E1870 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x1401E1B40 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x1400F7750 (CcSetVacbLargeOffset.c)
 */

char __fastcall SetVacb(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  char v4; // r10

  v4 = 1;
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
    return CcSetVacbLargeOffset(a1, a2, a3, a4);
  if ( a3 < 0xFFFFFFFFFFFFFFFEuLL )
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18)) = a3;
  return v4;
}
