/*
 * XREFs of OSCloseHandle @ 0x1C008F8C8
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C002B9C0 (ACPIRootPowerCallBack.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C005CA10 (AMLIAddNextNamespaceOverride.c)
 *     AcpiDiagInitialize @ 0x1C00AD280 (AcpiDiagInitialize.c)
 *     AMLIInitialize @ 0x1C00AD4B4 (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00ADBC0 (ACPIInitReadRegistryKeys.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00ADDD0 (ACPIInitGetPlatformOverrides.c)
 *     OSReadAcpiConfigurationData @ 0x1C00ADED8 (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00AE1C8 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSCloseHandle(void *a1)
{
  return ZwClose(a1);
}
