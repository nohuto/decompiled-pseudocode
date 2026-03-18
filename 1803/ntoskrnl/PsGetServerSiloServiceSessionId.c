/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x14006D170
 * Callers:
 *     SeQuerySessionIdTokenEx @ 0x140501900 (SeQuerySessionIdTokenEx.c)
 *     PnpNotifyTargetDeviceChange @ 0x14051F60C (PnpNotifyTargetDeviceChange.c)
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 *     SeGetTokenDeviceMap @ 0x14055FCF8 (SeGetTokenDeviceMap.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14056FE18 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PsIsServiceSession @ 0x1405845C0 (PsIsServiceSession.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IoRegisterPlugPlayNotification @ 0x1405E22E0 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1406027D0 (PnpNotifyDeviceClassChange.c)
 *     DbgkpSendErrorMessage @ 0x140710E28 (DbgkpSendErrorMessage.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140779E3C (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14078C9C0 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  unsigned int **v1; // rax

  v1 = (unsigned int **)&PspHostSiloGlobals;
  if ( a1 )
    v1 = *(unsigned int ***)(a1 + 1256);
  return *v1[138];
}
