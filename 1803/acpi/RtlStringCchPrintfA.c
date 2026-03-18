/*
 * XREFs of RtlStringCchPrintfA @ 0x1C0002234
 * Callers:
 *     ACPIAmliDoubleToName @ 0x1C0002048 (ACPIAmliDoubleToName.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C00020B0 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIBuildDockExtension @ 0x1C000AEF4 (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessorExtension @ 0x1C0010C6C (ACPIBuildProcessorExtension.c)
 *     ACPICMButtonStartWorker @ 0x1C00168B0 (ACPICMButtonStartWorker.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0025548 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C00259C0 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0025E58 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C00260AC (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x1C00263C8 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C00264B8 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIGetProcessorIDWide @ 0x1C0026634 (ACPIGetProcessorIDWide.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     ConvertToString @ 0x1C0053CB8 (ConvertToString.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C0081D08 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C0081F50 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C0082328 (OSOpenAMLINamespaceOverrideHandle.c)
 *     ACPIInitReadRegistryKeys @ 0x1C0099B04 (ACPIInitReadRegistryKeys.c)
 *     ACPIRegDumpAcpiTable @ 0x1C009AE2C (ACPIRegDumpAcpiTable.c)
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
