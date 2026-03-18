/*
 * XREFs of _AllowForegroundActivation @ 0x1C011D6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 AllowForegroundActivation()
{
  gdwPUDFlags |= 0x8000000u;
  return 1LL;
}
