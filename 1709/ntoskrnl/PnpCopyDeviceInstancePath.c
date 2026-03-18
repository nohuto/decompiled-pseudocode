/*
 * XREFs of PnpCopyDeviceInstancePath @ 0x1405C45C8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 */

void __fastcall PnpCopyDeviceInstancePath(__int64 a1, const UNICODE_STRING *a2)
{
  RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 40), a2);
}
