/*
 * XREFs of IsNonClientDpiScalingEnabledX @ 0x1C01C052C
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall IsNonClientDpiScalingEnabledX(__int64 a1)
{
  unsigned int v1; // r10d
  __int64 v2; // r11

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 368) & 0xF) == 2
    && (unsigned int)IsTopLevelWindow(a1)
    && (*(_DWORD *)(v2 + 304) & 0x20000000) != 0 )
  {
    return 1;
  }
  return v1;
}
