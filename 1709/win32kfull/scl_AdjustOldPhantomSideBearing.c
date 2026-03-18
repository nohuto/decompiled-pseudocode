/*
 * XREFs of scl_AdjustOldPhantomSideBearing @ 0x1C02B7C9C
 * Callers:
 *     fsg_SimpleInnerGridFit @ 0x1C02C24D0 (fsg_SimpleInnerGridFit.c)
 * Callees:
 *     scl_ShiftOldPoints @ 0x1C02B9B10 (scl_ShiftOldPoints.c)
 */

__int64 __fastcall scl_AdjustOldPhantomSideBearing(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // r9
  int v3; // r8d
  unsigned int v4; // edx

  v2 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1;
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL * v2);
  if ( (*(_BYTE *)(a2 + 452) & 5) == 1 )
    v4 = (v3 + 2) & 0xFFFFFFFC;
  else
    v4 = (v3 + 32) & 0xFFFFFFC0;
  return scl_ShiftOldPoints(a1, v4 - v3, v3, v2, 8);
}
