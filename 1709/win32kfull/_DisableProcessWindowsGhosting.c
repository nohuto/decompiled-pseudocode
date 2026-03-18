/*
 * XREFs of _DisableProcessWindowsGhosting @ 0x1C0126310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DisableProcessWindowsGhosting(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x8000000u;
  return 1LL;
}
