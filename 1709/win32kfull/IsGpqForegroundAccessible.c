/*
 * XREFs of IsGpqForegroundAccessible @ 0x1C0050654
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C004FBB4 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C004FED0 (xxxInternalKeyEventDirect.c)
 *     EditionIsGpqForegroundInaccessible @ 0x1C0050170 (EditionIsGpqForegroundInaccessible.c)
 *     NtUserGetKeyboardState @ 0x1C0050280 (NtUserGetKeyboardState.c)
 *     NtUserGetKeyState @ 0x1C0050420 (NtUserGetKeyState.c)
 *     EditionIsGpqForegroundAccessible @ 0x1C01B4E90 (EditionIsGpqForegroundAccessible.c)
 *     xxxInjectTouchInput @ 0x1C01BD79C (xxxInjectTouchInput.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01CB090 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 * Callees:
 *     IsGpqForegroundAccessibleForPti @ 0x1C0050680 (IsGpqForegroundAccessibleForPti.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall IsGpqForegroundAccessible(unsigned int a1)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  return IsGpqForegroundAccessibleForPti(ThreadWin32Thread, a1);
}
