/*
 * XREFs of RtlStringCbPrintfW @ 0x1C0045FC0
 * Callers:
 *     ACPIBusIrpQueryDeviceId @ 0x1C00940AC (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00955FC (ACPIBusIrpQueryInstanceId.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_0 @ 0x1C0046024 (RtlStringVPrintfWorkerW_0.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 >= 0 )
    return RtlStringVPrintfWorkerW_0(pszDest, v3, 0LL, pszFormat, va);
  if ( v3 )
    *pszDest = 0;
  return v4;
}
