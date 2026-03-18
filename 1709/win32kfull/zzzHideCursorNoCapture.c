/*
 * XREFs of zzzHideCursorNoCapture @ 0x1C01A10C0
 * Callers:
 *     <none>
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     zzzSetCursor @ 0x1C0098174 (zzzSetCursor.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall zzzHideCursorNoCapture(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 408) + 104LL)
    && (GetAppCompatFlags2(0x400u) & 0x100) == 0
    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80010000) == 0x80010000 )
  {
    zzzSetCursor(0LL);
  }
  return 0LL;
}
