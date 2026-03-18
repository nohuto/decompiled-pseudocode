/*
 * XREFs of OSCloseHandle @ 0x1C0089BD0
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C002ADE0 (ACPIRootPowerCallBack.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C005CC20 (AMLIAddNextNamespaceOverride.c)
 *     OSReadAcpiConfigurationData @ 0x1C00AB0E4 (OSReadAcpiConfigurationData.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00AB3D0 (ACPIRegDumpAcpiTable.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00AB560 (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00AB858 (ACPIInitReadRegistryKeys.c)
 *     AcpiDiagInitialize @ 0x1C00ABBD8 (AcpiDiagInitialize.c)
 *     AMLIInitialize @ 0x1C00AC5B0 (AMLIInitialize.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall OSCloseHandle(HANDLE Handle)
{
  return ZwClose(Handle);
}
