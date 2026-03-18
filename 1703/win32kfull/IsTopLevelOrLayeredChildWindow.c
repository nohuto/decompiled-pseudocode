/*
 * XREFs of IsTopLevelOrLayeredChildWindow @ 0x1C00626B0
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C0037F20 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0038710 (NtUserSetWindowCompositionAttribute.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     NtUserUpdateLayeredWindow @ 0x1C009E0F0 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 */

_BOOL8 __fastcall IsTopLevelOrLayeredChildWindow(__int64 a1)
{
  __int64 v1; // r10

  return (unsigned int)IsTopLevelWindow(a1) || (*(_BYTE *)(v1 + 66) & 8) != 0 && GetTopLevelWindow(v1);
}
