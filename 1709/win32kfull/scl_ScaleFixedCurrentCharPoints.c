/*
 * XREFs of scl_ScaleFixedCurrentCharPoints @ 0x1C02B957C
 * Callers:
 *     fsg_CompositeInnerGridFit @ 0x1C02C0758 (fsg_CompositeInnerGridFit.c)
 *     fsg_MergeGlyphData @ 0x1C02C1D64 (fsg_MergeGlyphData.c)
 * Callees:
 *     scl_ScaleFromFixedFUnits @ 0x1C02B9704 (scl_ScaleFromFixedFUnits.c)
 */

__int64 __fastcall scl_ScaleFixedCurrentCharPoints(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx

  v2 = *a1;
  v3 = *((__int16 *)a1 + 40) - 1;
  if ( *(_BYTE *)(a2 + 396) )
  {
    scl_ScaleFromFixedFUnits(
      a2 + 264,
      *(_DWORD *)(a2 + 184),
      v2,
      v2,
      (unsigned __int16)(*(_WORD *)(a1[8] + 2LL * v3) + 1));
    v6 = a2 + 280;
    v7 = (unsigned __int16)(*(_WORD *)(a1[8] + 2LL * (*((__int16 *)a1 + 40) - 1)) + 1);
    v8 = *(_DWORD *)(a2 + 188);
  }
  else
  {
    scl_ScaleFromFixedFUnits(
      a2 + 232,
      *(_DWORD *)(a2 + 176),
      v2,
      *a1,
      (unsigned __int16)(*(_WORD *)(a1[8] + 2LL * v3) + 1));
    v6 = a2 + 248;
    v7 = (unsigned __int16)(*(_WORD *)(a1[8] + 2LL * (*((__int16 *)a1 + 40) - 1)) + 1);
    v8 = *(_DWORD *)(a2 + 180);
  }
  return scl_ScaleFromFixedFUnits(v6, v8, a1[1], a1[1], v7);
}
