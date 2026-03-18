/*
 * XREFs of RtlStringCchPrintfW @ 0x1C000997C
 * Callers:
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0025E58 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1C00262A0 (ACPIGetConvertToSerialIDWide.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00321A0 (PciConfigSpaceHandlerWorker.c)
 *     LogInErrorLog @ 0x1C004CDA4 (LogInErrorLog.c)
 *     LinkNodeCrackPrt @ 0x1C0056F60 (LinkNodeCrackPrt.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0074CA0 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_0 @ 0x1C00099DC (RtlStringVPrintfWorkerW_0.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v3; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringVPrintfWorkerW_0(pszDest, cchDest, 0LL, pszFormat, va);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
