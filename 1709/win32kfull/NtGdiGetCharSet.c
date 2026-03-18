/*
 * XREFs of NtGdiGetCharSet @ 0x1C00B0DD0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetCharSet @ 0x1C00B0B68 (GreGetCharSet.c)
 */

__int64 __fastcall NtGdiGetCharSet(HDC a1)
{
  return GreGetCharSet(a1);
}
