/*
 * XREFs of zzzHideCursorNoCapture @ 0x1C0195F70
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetCursor @ 0x1C0041A08 (zzzSetCursor.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C00C3100 (GetAppCompatFlags2.c)
 */

__int64 zzzHideCursorNoCapture()
{
  if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 384) + 72LL)
    && (GetAppCompatFlags2(0x400u) & 0x100) == 0
    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80010000) == 0x80010000 )
  {
    zzzSetCursor(0LL);
  }
  return 0LL;
}
