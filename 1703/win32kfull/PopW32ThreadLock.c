/*
 * XREFs of PopW32ThreadLock @ 0x1C00FCE50
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00B7444 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01B6194 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PopW32ThreadLock(_QWORD *a1)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(result + 16) = *a1;
  return result;
}
