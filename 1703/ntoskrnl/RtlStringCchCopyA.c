/*
 * XREFs of RtlStringCchCopyA @ 0x140154C14
 * Callers:
 *     AslpFileQueryExportName @ 0x1407314AC (AslpFileQueryExportName.c)
 *     EmpParseStrings @ 0x1408062B4 (EmpParseStrings.c)
 * Callees:
 *     RtlStringCopyWorkerA_0 @ 0x140154C5C (RtlStringCopyWorkerA_0.c)
 */

NTSTATUS __stdcall RtlStringCchCopyA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringCopyWorkerA_0(pszDest, cchDest, (size_t *)pszSrc, pszSrc, 0x7FFFFFFEuLL);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
