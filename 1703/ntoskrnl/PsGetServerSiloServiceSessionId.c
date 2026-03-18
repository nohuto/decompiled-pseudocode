/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1400676A0
 * Callers:
 *     PsIsServiceSession @ 0x14045DFB0 (PsIsServiceSession.c)
 *     SeGetTokenDeviceMap @ 0x140468818 (SeGetTokenDeviceMap.c)
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     SeQuerySessionIdTokenEx @ 0x14048A010 (SeQuerySessionIdTokenEx.c)
 *     PnpNotifyTargetDeviceChange @ 0x1404A6548 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x1404A6D00 (PnpNotifyDeviceClassChange.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IoRegisterPlugPlayNotification @ 0x140571300 (IoRegisterPlugPlayNotification.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14057DC20 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1406DF834 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1406F0C24 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  return **(unsigned int **)(PsGetServerSiloGlobals(a1) + 1072);
}
