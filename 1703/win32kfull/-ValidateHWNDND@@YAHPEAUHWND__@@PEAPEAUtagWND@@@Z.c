/*
 * XREFs of ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0045944
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C00038F0 (NtUserSetCoreWindowPartner.c)
 *     NtUserSetShellWindowEx @ 0x1C0015280 (NtUserSetShellWindowEx.c)
 *     NtUserSetCoreWindow @ 0x1C0017E50 (NtUserSetCoreWindow.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00457B0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserFlashWindowEx @ 0x1C01D8010 (NtUserFlashWindowEx.c)
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
