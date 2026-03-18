/*
 * XREFs of RtlStringCchPrintfA @ 0x1C0005198
 * Callers:
 *     ACPIAmliDoubleToName @ 0x1C000261C (ACPIAmliDoubleToName.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C0004F24 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIBuildProcessorExtension @ 0x1C0006990 (ACPIBuildProcessorExtension.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     ACPICMButtonStartWorker @ 0x1C0023720 (ACPICMButtonStartWorker.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0023924 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C0023C60 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0024328 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C00244A4 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0024790 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIBuildDockExtension @ 0x1C00433E4 (ACPIBuildDockExtension.c)
 *     ACPIGetConvertToStringWide @ 0x1C004EE94 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C004EF84 (ACPIGetConvertToStringWideWithPrepend.c)
 *     ConvertToString @ 0x1C0062100 (ConvertToString.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00A15A8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00A17EC (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00A19BC (OSOpenAMLINamespaceOverrideHandle.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00AB3D0 (ACPIRegDumpAcpiTable.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00AB858 (ACPIInitReadRegistryKeys.c)
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
