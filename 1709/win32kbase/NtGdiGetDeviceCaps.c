/*
 * XREFs of NtGdiGetDeviceCaps @ 0x1C005CBD0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDeviceCaps @ 0x1C005CBF0 (GreGetDeviceCaps.c)
 */

__int64 __fastcall NtGdiGetDeviceCaps(struct HOBJ__ *a1)
{
  return GreGetDeviceCaps(a1);
}
