/*
 * XREFs of WinSqmIsOptedIn @ 0x1C00ECD50
 * Callers:
 *     <none>
 * Callees:
 *     WinSqmIsOptedInEx @ 0x1C0098240 (WinSqmIsOptedInEx.c)
 */

_BOOL8 WinSqmIsOptedIn()
{
  return WinSqmIsOptedInEx(1);
}
