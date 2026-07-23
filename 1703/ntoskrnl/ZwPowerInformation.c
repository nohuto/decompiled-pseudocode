/*
 * XREFs of ZwPowerInformation @ 0x14017EB20
 * Callers:
 *     PopInvokeWin32Callout @ 0x1404C5D90 (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x1405823F0 (RtlpRecordBootStatusData.c)
 *     PdcPortOpen @ 0x1405B90D0 (PdcPortOpen.c)
 *     PoGetLightestSystemStateForEject @ 0x1406C5224 (PoGetLightestSystemStateForEject.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&InformationLevel);
}
