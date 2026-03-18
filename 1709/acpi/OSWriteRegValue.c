/*
 * XREFs of OSWriteRegValue @ 0x1C008F9BC
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C002B9C0 (ACPIRootPowerCallBack.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C008F82C (ACPIWriteOscSupportToRegistry.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00A5C28 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRootWorker @ 0x1C00A6B30 (ACPIRootWorker.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00AE1C8 (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall OSWriteRegValue(PCSZ SourceString, HANDLE KeyHandle, PVOID Data, ULONG DataSize)
{
  NTSTATUS v7; // eax
  int v8; // edx
  unsigned int v9; // ebx
  NTSTATUS v10; // eax
  int v11; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  struct _STRING SourceStringa; // [rsp+40h] [rbp-18h] BYREF

  RtlInitAnsiString(&SourceStringa, SourceString);
  v7 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceStringa, 1u);
  v9 = v7;
  if ( v7 < 0 )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      22,
      28,
      (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
      v7);
  }
  else
  {
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, DataSize);
    v9 = v10;
    if ( v10 < 0 )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        11,
        29,
        (__int64)&WPP_0a4d4e1c1f983abcba9684f06d7ceec4_Traceguids,
        v10);
    }
    RtlFreeUnicodeString(&DestinationString);
  }
  return v9;
}
