/*
 * XREFs of GreCreatePen @ 0x1C00EC5AC
 * Callers:
 *     NtGdiCreatePen @ 0x1C00EC5A0 (NtGdiCreatePen.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01C1578 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     GreExtCreatePen @ 0x1C00EC634 (GreExtCreatePen.c)
 */

__int64 __fastcall GreCreatePen(unsigned int a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 <= 6 )
    return GreExtCreatePen(a1, a2, 0LL, a3, 0LL, 0LL, 0, 0LL, 0, 1, a4);
  EngSetLastError(0x57u);
  return 0LL;
}
