/*
 * XREFs of ?SetWrapMode@CMILBrushBitmap@@QEAAJW4Enum@MilBitmapWrapMode@@PEAU_D3DCOLORVALUE@@@Z @ 0x18020F698
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1801A6270 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMILBrushBitmap::SetWrapMode(__int64 a1, int a2)
{
  int v2; // ebx
  int v4; // edx

  v2 = 0;
  if ( a2 )
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x169u);
  }
  else
  {
    *(_DWORD *)(a1 + 200) = 0;
  }
  *(_OWORD *)(a1 + 204) = 0LL;
  v4 = *(_DWORD *)(a1 + 112) + 1;
  if ( *(_DWORD *)(a1 + 112) == -1 )
    v4 = 1;
  *(_DWORD *)(a1 + 112) = v4;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x178u);
  return (unsigned int)v2;
}
