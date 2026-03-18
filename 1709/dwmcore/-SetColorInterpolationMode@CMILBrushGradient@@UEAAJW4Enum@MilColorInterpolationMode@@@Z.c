/*
 * XREFs of ?SetColorInterpolationMode@CMILBrushGradient@@UEAAJW4Enum@MilColorInterpolationMode@@@Z @ 0x180147600
 * Callers:
 *     ?SetColorInterpolationMode@CMILBrushLinearGradient@@WHA@EAAJW4Enum@MilColorInterpolationMode@@@Z @ 0x1800C6150 (-SetColorInterpolationMode@CMILBrushLinearGradient@@WHA@EAAJW4Enum@MilColorInterpolationMode@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushGradient::SetColorInterpolationMode(__int64 a1, int a2)
{
  bool v2; // zf
  int v3; // eax

  *(_DWORD *)(a1 + 108) = a2;
  v2 = (*(_DWORD *)(a1 + 8))++ == -1;
  v3 = *(_DWORD *)(a1 + 8);
  if ( v2 )
    v3 = 1;
  *(_DWORD *)(a1 + 8) = v3;
  return 0LL;
}
