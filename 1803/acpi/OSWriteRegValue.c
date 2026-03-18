/*
 * XREFs of OSWriteRegValue @ 0x1C0082E48
 * Callers:
 *     ACPIRootPowerCallBack @ 0x1C0039860 (ACPIRootPowerCallBack.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0085C6C (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIRootInitialize @ 0x1C008710C (ACPIRootInitialize.c)
 *     ACPIRootWorker @ 0x1C00881B0 (ACPIRootWorker.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C00882F4 (ACPIWriteOscSupportToRegistry.c)
 *     ACPIRegDumpAcpiTable @ 0x1C009AE2C (ACPIRegDumpAcpiTable.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
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
  if ( v7 >= 0 )
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
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        v10);
    }
    RtlFreeUnicodeString(&DestinationString);
  }
  else
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      22,
      28,
      (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
      v7);
  }
  return v9;
}
