/*
 * XREFs of RtlStringCchPrintfW @ 0x1C0024978
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C0011420 (PciConfigSpaceHandlerWorker.c)
 *     LinkNodeCrackPrt @ 0x1C001B96C (LinkNodeCrackPrt.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0024790 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1C004ED6C (ACPIGetConvertToSerialIDWide.c)
 *     LogInErrorLog @ 0x1C005E908 (LogInErrorLog.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C009C5A4 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C0002790 (RtlStringVPrintfWorkerW.c)
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
    return RtlStringVPrintfWorkerW(pszDest, cchDest, 0LL, pszFormat, va);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
