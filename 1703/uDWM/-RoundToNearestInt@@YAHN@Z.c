/*
 * XREFs of ?RoundToNearestInt@@YAHN@Z @ 0x18008110C
 * Callers:
 *     ?GetWindowFrameMargins@CWindowData@@QEAAXPEAU_MARGINS@@@Z @ 0x18006E1A4 (-GetWindowFrameMargins@CWindowData@@QEAAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ceil_0 @ 0x18004DE60 (ceil_0.c)
 *     floor_0 @ 0x18004DE72 (floor_0.c)
 */

__int64 __fastcall RoundToNearestInt(double a1)
{
  double v1; // xmm0_8

  if ( a1 < 0.0 )
    v1 = ceil_0(a1 - 0.5);
  else
    v1 = floor_0(a1 + 0.5);
  return (unsigned int)(int)v1;
}
