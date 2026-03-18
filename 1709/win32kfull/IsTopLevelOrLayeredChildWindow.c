/*
 * XREFs of IsTopLevelOrLayeredChildWindow @ 0x1C01143B4
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C005E6F0 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00630D0 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserUpdateLayeredWindow @ 0x1C008D2D0 (NtUserUpdateLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 */

_BOOL8 __fastcall IsTopLevelOrLayeredChildWindow(__int64 a1)
{
  __int64 v1; // r9

  return (unsigned int)IsTopLevelWindow(a1) || (*(_BYTE *)(v1 + 66) & 8) != 0 && GetTopLevelWindow(v1);
}
