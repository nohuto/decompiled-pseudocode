/*
 * XREFs of OSCloseHandle @ 0x1C0082128
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C0039860 (ACPIRootPowerCallBack.c)
 *     AMLIAddNamespaceOverride @ 0x1C00457B8 (AMLIAddNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C00458D4 (AMLIAddNextNamespaceOverride.c)
 *     AcpiDiagInitialize @ 0x1C0098078 (AcpiDiagInitialize.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00999E8 (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitReadRegistryKeys @ 0x1C0099B04 (ACPIInitReadRegistryKeys.c)
 *     ACPIRegDumpAcpiTable @ 0x1C009AE2C (ACPIRegDumpAcpiTable.c)
 *     OSReadAcpiConfigurationData @ 0x1C009B124 (OSReadAcpiConfigurationData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall OSCloseHandle(void *a1)
{
  return ZwClose(a1);
}
