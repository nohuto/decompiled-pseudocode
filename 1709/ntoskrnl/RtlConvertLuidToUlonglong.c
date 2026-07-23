/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x14025F860
 * Callers:
 *     SepLogTokenSidManagement @ 0x140730934 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
