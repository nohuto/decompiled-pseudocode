/*
 * XREFs of _DisableDpiCursorScalingForProcess @ 0x1C0195F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DisableDpiCursorScalingForProcess(__int64 a1, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  *(_DWORD *)(CurrentProcessWin32Process + 768) |= 0x400000u;
  return 1LL;
}
