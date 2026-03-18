/*
 * XREFs of OSOpenHandle @ 0x1C0087914
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008798C (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitGlobalHeapSize @ 0x1C008E034 (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1C008E0E8 (OSReadRegValue.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00937D4 (ACPIThermalGetOverrideHandle.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00A4004 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00A4614 (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSOpenNextSubkey @ 0x1C00A48F0 (OSOpenNextSubkey.c)
 *     AcpiDiagInitialize @ 0x1C00AD280 (AcpiDiagInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00ADBC0 (ACPIInitReadRegistryKeys.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00ADDD0 (ACPIInitGetPlatformOverrides.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     OSOpenUnicodeHandle @ 0x1C008786C (OSOpenUnicodeHandle.c)
 */

__int64 __fastcall OSOpenHandle(PCSZ SourceString, void *a2, void **a3)
{
  int v5; // edx
  int v6; // ebx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationString, SourceString);
  v6 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( v6 < 0 )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      22,
      12,
      (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
      v6);
  }
  else
  {
    v6 = OSOpenUnicodeHandle(&UnicodeString, a2, a3);
    RtlFreeUnicodeString(&UnicodeString);
  }
  return (unsigned int)v6;
}
