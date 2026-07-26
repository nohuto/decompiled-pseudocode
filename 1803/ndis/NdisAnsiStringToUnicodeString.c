/*
 * XREFs of NdisAnsiStringToUnicodeString @ 0x1C00E7790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NdisAnsiStringToUnicodeString(_UNICODE_STRING *a1, const ANSI_STRING *a2)
{
  return RtlAnsiStringToUnicodeString(a1, a2, 0);
}
