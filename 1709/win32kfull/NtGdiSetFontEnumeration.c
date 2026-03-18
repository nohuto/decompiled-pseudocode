/*
 * XREFs of NtGdiSetFontEnumeration @ 0x1C027BDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGdiSetFontEnumeration()
{
  EngSetLastError(0x32u);
  return gulFontInformation;
}
