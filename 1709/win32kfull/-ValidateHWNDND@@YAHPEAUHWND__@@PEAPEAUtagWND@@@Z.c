/*
 * XREFs of ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C009AB94
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C0009A30 (NtUserSetCoreWindowPartner.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C009AA00 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetShellWindowEx @ 0x1C00D59A0 (NtUserSetShellWindowEx.c)
 *     NtUserSetCoreWindow @ 0x1C0116E60 (NtUserSetCoreWindow.c)
 *     NtUserFlashWindowEx @ 0x1C01E4780 (NtUserFlashWindowEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateHWNDND(HWND a1, struct tagWND **a2)
{
  __int64 v3; // rax

  v3 = ValidateHwnd(a1);
  *a2 = (struct tagWND *)v3;
  return v3 && (((*(_WORD *)(v3 + 82) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0;
}
