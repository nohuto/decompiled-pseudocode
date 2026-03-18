/*
 * XREFs of OSOpenHandle @ 0x1C0071844
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0071964 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitGlobalHeapSize @ 0x1C007D19C (ACPIInitGlobalHeapSize.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C0081B14 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C0082328 (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSOpenNextSubkey @ 0x1C0082604 (OSOpenNextSubkey.c)
 *     OSReadRegValue @ 0x1C00829B8 (OSReadRegValue.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00890F8 (ACPIThermalGetOverrideHandle.c)
 *     AcpiDiagInitialize @ 0x1C0098078 (AcpiDiagInitialize.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00999E8 (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitReadRegistryKeys @ 0x1C0099B04 (ACPIInitReadRegistryKeys.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     OSOpenUnicodeHandle @ 0x1C00718BC (OSOpenUnicodeHandle.c)
 */

__int64 __fastcall OSOpenHandle(PCSZ SourceString, __int64 a2, __int64 a3)
{
  int v5; // edx
  NTSTATUS v6; // ebx
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
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      v6);
  }
  else
  {
    v6 = OSOpenUnicodeHandle(&UnicodeString, a2, a3);
    RtlFreeUnicodeString(&UnicodeString);
  }
  return (unsigned int)v6;
}
