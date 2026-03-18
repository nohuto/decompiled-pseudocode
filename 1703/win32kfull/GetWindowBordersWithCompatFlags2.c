/*
 * XREFs of GetWindowBordersWithCompatFlags2 @ 0x1C0040F94
 * Callers:
 *     GetWindowBordersWithDpiAwareness @ 0x1C0040EEC (GetWindowBordersWithDpiAwareness.c)
 *     GetWindowBorders @ 0x1C00C285C (GetWindowBorders.c)
 *     GetWindowBordersForDpi @ 0x1C00C3088 (GetWindowBordersForDpi.c)
 * Callees:
 *     GetWindowFrameMetricInternal @ 0x1C00418B0 (GetWindowFrameMetricInternal.c)
 *     GetResizeBorderWidthInternal @ 0x1C0042D24 (GetResizeBorderWidthInternal.c)
 */

__int64 __fastcall GetWindowBordersWithCompatFlags2(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int16 v7; // di
  int v8; // ebp
  int v9; // r8d
  unsigned int v10; // ebx
  int WindowFrameMetricInternal; // r14d
  __int64 result; // rax

  v7 = a2;
  v8 = a1;
  if ( (a2 & 0x100) != 0 )
    v9 = 2;
  else
    v9 = (a2 & 0x20000) != 0;
  v10 = v9 + 1;
  LOBYTE(a1) = (a1 & 0xC00000) == 0;
  if ( ((unsigned __int8)a1 & ((a2 & 1) == 0)) != 0 )
    v10 = v9;
  WindowFrameMetricInternal = GetWindowFrameMetricInternal(a1, a5, a6);
  if ( (v8 & 0x40000) != 0
    || (result = v10, WindowFrameMetricInternal > 0)
    && ((v8 & 0xC00000) == 12582912 || (v8 & 0x40000) != 0)
    && (a5 & 0x30000000) == 0 )
  {
    result = WindowFrameMetricInternal + v10 + (unsigned int)GetResizeBorderWidthInternal(a5, a6);
  }
  if ( a4 )
  {
    if ( (v7 & 0x200) != 0 )
      return (unsigned int)(result + 2);
  }
  return result;
}
