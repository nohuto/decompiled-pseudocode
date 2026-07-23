/*
 * XREFs of RtlConvertLuidToUlonglong @ 0x1402A1308
 * Callers:
 *     SepLogTokenSidManagement @ 0x140794224 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

ULONGLONG __cdecl RtlConvertLuidToUlonglong(LUID Luid)
{
  return **(_QWORD **)&Luid;
}
