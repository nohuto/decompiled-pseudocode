/*
 * XREFs of RtlStringCchPrintfA @ 0x1C000E0C0
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C000DE4C (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIAmliDoubleToName @ 0x1C000E2C4 (ACPIAmliDoubleToName.c)
 *     ACPICMButtonStartWorker @ 0x1C0025930 (ACPICMButtonStartWorker.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0026040 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C002637C (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0026A44 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0026BC0 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0026EAC (ACPIGetConvertToInstanceIDWide.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     ACPIBuildProcessorExtension @ 0x1C00293D8 (ACPIBuildProcessorExtension.c)
 *     ACPIBuildDockExtension @ 0x1C0042DA4 (ACPIBuildDockExtension.c)
 *     ACPIGetConvertToStringWide @ 0x1C004E888 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C004E978 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ConvertToString @ 0x1C00632D0 (ConvertToString.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00A41F8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00A443C (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00A4614 (OSOpenAMLINamespaceOverrideHandle.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00ADBC0 (ACPIInitReadRegistryKeys.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00AE1C8 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v3 = 0;
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 )
      goto LABEL_9;
    if ( v6 == v5 )
    {
      pszDest[v5] = 0;
      return v3;
    }
    if ( v6 > v5 )
    {
LABEL_9:
      pszDest[v5] = 0;
      return -2147483643;
    }
  }
  return v3;
}
