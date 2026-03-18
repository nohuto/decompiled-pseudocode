/*
 * XREFs of scl_AdjustOldCharSideBearing @ 0x1C02BDE3C
 * Callers:
 *     fsg_SimpleInnerGridFit @ 0x1C02C86C8 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     scl_ShiftOldPoints @ 0x1C02BFCFC (scl_ShiftOldPoints.c)
 */

__int64 __fastcall scl_AdjustOldCharSideBearing(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  int v3; // r8d
  unsigned int v4; // edx

  v2 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v2);
  if ( (*(_BYTE *)(a2 + 452) & 5) == 1 )
    v4 = (v3 + 2) & 0xFFFFFFFC;
  else
    v4 = (v3 + 32) & 0xFFFFFFC0;
  return scl_ShiftOldPoints(a1, v4 - v3, v3, 0, v2);
}
