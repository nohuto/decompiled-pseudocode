/*
 * XREFs of NtUserInitializePointerDeviceInjection @ 0x1C00E8D00
 * Callers:
 *     <none>
 * Callees:
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00E8D30 (NtUserInitializePointerDeviceInjectionEx.c)
 */

__int64 __fastcall NtUserInitializePointerDeviceInjection(int a1, int a2, int a3, int a4, __int64 a5)
{
  return NtUserInitializePointerDeviceInjectionEx(a1, a2, a3, a4, 0, a5);
}
