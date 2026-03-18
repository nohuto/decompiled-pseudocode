/*
 * XREFs of OSOpenHandle @ 0x1C00838F8
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0083718 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitGlobalHeapSize @ 0x1C0089EA8 (ACPIInitGlobalHeapSize.c)
 *     OSReadRegValue @ 0x1C0089F5C (OSReadRegValue.c)
 *     ACPIThermalGetOverrideHandle @ 0x1C00917E4 (ACPIThermalGetOverrideHandle.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00A13B4 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00A19BC (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSOpenNextSubkey @ 0x1C00A1C98 (OSOpenNextSubkey.c)
 *     ACPIInitGetPlatformOverrides @ 0x1C00AB560 (ACPIInitGetPlatformOverrides.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00AB858 (ACPIInitReadRegistryKeys.c)
 *     AcpiDiagInitialize @ 0x1C00ABBD8 (AcpiDiagInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     OSOpenUnicodeHandle @ 0x1C0083970 (OSOpenUnicodeHandle.c)
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
