/*
 * XREFs of ?SetSourceModifications@CMILBrushBitmap@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBU_D3DCOLORVALUE@@1@Z @ 0x18020F634
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1801A6270 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?IsNonEmptyOverNormalizedRange@CColorKey@@QEBA_NXZ @ 0x18020F87C (-IsNonEmptyOverNormalizedRange@CColorKey@@QEBA_NXZ.c)
 */

__int64 __fastcall CMILBrushBitmap::SetSourceModifications(__int64 a1, int a2, _OWORD *a3, _OWORD *a4)
{
  int v4; // r10d
  __int64 v5; // r11
  CColorKey *v6; // rcx
  int v7; // eax

  *(_DWORD *)(a1 + 256) = a2;
  v4 = a2;
  v5 = a1;
  if ( !a3
    || !a4
    || (v6 = (CColorKey *)(a1 + 220),
        *(_OWORD *)v6 = *a3,
        *(_OWORD *)(v5 + 236) = *a4,
        !CColorKey::IsNonEmptyOverNormalizedRange(v6)) )
  {
    *(_DWORD *)(v5 + 256) = v4 & 0xFFFFFFFD;
  }
  v7 = *(_DWORD *)(v5 + 112) + 1;
  if ( *(_DWORD *)(v5 + 112) == -1 )
    v7 = 1;
  *(_DWORD *)(v5 + 112) = v7;
  return 0LL;
}
