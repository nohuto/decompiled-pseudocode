/*
 * XREFs of ?SetSourceModifications@CMILBrushBitmap@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBU_D3DCOLORVALUE@@1@Z @ 0x180045EFC
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18007CF60 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?IsNonEmpty@CColorKey@@QEBA_NXZ @ 0x18009D0D4 (-IsNonEmpty@CColorKey@@QEBA_NXZ.c)
 */

__int64 __fastcall CMILBrushBitmap::SetSourceModifications(__int64 a1, int a2, _OWORD *a3, _OWORD *a4)
{
  __int64 v4; // r10
  CColorKey *v5; // rcx
  float *v6; // rcx
  int v7; // eax

  *(_DWORD *)(a1 + 256) = a2;
  v4 = a1;
  if ( !a3
    || !a4
    || (v5 = (CColorKey *)(a1 + 220), *(_OWORD *)v5 = *a3, *(_OWORD *)(v4 + 236) = *a4, !CColorKey::IsNonEmpty(v5))
    || *v6 > 1.0
    || v6[1] > 1.0
    || v6[2] > 1.0
    || v6[3] > 1.0
    || v6[4] < 0.0
    || v6[5] < 0.0
    || v6[6] < 0.0
    || v6[7] < 0.0 )
  {
    *(_DWORD *)(v4 + 256) &= ~2u;
  }
  v7 = *(_DWORD *)(v4 + 112) + 1;
  if ( *(_DWORD *)(v4 + 112) == -1 )
    v7 = 1;
  *(_DWORD *)(v4 + 112) = v7;
  return 0LL;
}
