/*
 * XREFs of GetCurrentThreadId_0 @ 0x18003EE16
 * Callers:
 *     ?GetCurrentDesktopName@@YAHPEAGI@Z @ 0x18006E4D0 (-GetCurrentDesktopName@@YAHPEAGI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetCurrentThreadId_0()
{
  return GetCurrentThreadId();
}
