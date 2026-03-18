/*
 * XREFs of GreScalingDispatchEscape @ 0x1C027A3D0
 * Callers:
 *     NtGdiExtEscape @ 0x1C0036CF0 (NtGdiExtEscape.c)
 * Callees:
 *     GreSetDCDpiScaleValue @ 0x1C027A4C4 (GreSetDCDpiScaleValue.c)
 */

__int64 __fastcall GreScalingDispatchEscape(unsigned __int64 a1)
{
  if ( (a1 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 24 > MmUserProbeAddress || a1 + 24 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( (unsigned int)*(_OWORD *)a1 )
    return 3221225659LL;
  GreSetDCDpiScaleValue(*(HDC *)(a1 + 8));
  return 0LL;
}
