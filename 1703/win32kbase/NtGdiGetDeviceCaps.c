/*
 * XREFs of NtGdiGetDeviceCaps @ 0x1C002A9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 NtGdiGetDeviceCaps()
{
  return GreGetDeviceCaps();
}
