/*
 * XREFs of UserRtlFreeMem @ 0x1C009B380
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall UserRtlFreeMem(__int64 a1)
{
  return Win32FreePool(a1);
}
