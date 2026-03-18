/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1400DF800
 * Callers:
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     SeQuerySessionIdTokenEx @ 0x1405286B0 (SeQuerySessionIdTokenEx.c)
 *     PnpNotifyTargetDeviceChange @ 0x14054C0B0 (PnpNotifyTargetDeviceChange.c)
 *     SeGetTokenDeviceMap @ 0x14056FDEC (SeGetTokenDeviceMap.c)
 *     PnpNotifyDeviceClassChange @ 0x140585D88 (PnpNotifyDeviceClassChange.c)
 *     IoRegisterPlugPlayNotification @ 0x140585FB0 (IoRegisterPlugPlayNotification.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1405A7C54 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PsIsServiceSession @ 0x1405EC7EC (PsIsServiceSession.c)
 *     DbgkpSendErrorMessage @ 0x1406AC4FC (DbgkpSendErrorMessage.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140715CA8 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyClientTokenAndSetSilo @ 0x140728644 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  return **((unsigned int **)PsGetServerSiloGlobals(a1) + 138);
}
