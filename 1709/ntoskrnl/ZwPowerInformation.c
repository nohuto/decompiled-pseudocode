/*
 * XREFs of ZwPowerInformation @ 0x14017E4A0
 * Callers:
 *     PopInvokeWin32Callout @ 0x1404E8B38 (PopInvokeWin32Callout.c)
 *     RtlpSystemBootStatusRequest @ 0x1405AC0A4 (RtlpSystemBootStatusRequest.c)
 *     RtlpRecordBootStatusData @ 0x1405ACAA0 (RtlpRecordBootStatusData.c)
 *     PdcPortOpen @ 0x1405ACE14 (PdcPortOpen.c)
 *     PoGetLightestSystemStateForEject @ 0x1406F4D3C (PoGetLightestSystemStateForEject.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1407233F0 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x140723540 (RtlRestoreSystemBootStatusDefaults.c)
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
