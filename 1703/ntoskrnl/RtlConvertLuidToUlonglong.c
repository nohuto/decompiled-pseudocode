/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x140248140
 * Callers:
 *     SepLogTokenSidManagement @ 0x1406F8D04 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
