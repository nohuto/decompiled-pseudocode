/*
 * XREFs of ?SetBitmapToXSpaceTransform@CMILBrushBitmap@@QEAAXPEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x18020F56C
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1801A6270 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushBitmap::SetBitmapToXSpaceTransform(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 116) = a3;
  *(_OWORD *)(a1 + 120) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 168) = *(_OWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 64);
  result = (unsigned int)(*(_DWORD *)(a1 + 112) + 1);
  if ( *(_DWORD *)(a1 + 112) == -1 )
    result = 1LL;
  *(_DWORD *)(a1 + 112) = result;
  return result;
}
