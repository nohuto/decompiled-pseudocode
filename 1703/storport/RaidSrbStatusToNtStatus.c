/*
 * XREFs of RaidSrbStatusToNtStatus @ 0x1C000ACC8
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006538 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitStartIo @ 0x1C0007D00 (RaUnitStartIo.c)
 *     RaUnitAsyncError @ 0x1C000AB10 (RaUnitAsyncError.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D4B4 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C000F680 (RaidBusEnumeratorProcessAtaInformation.c)
 *     RaidBusEnumeratorProcessInquiry @ 0x1C0016260 (RaidBusEnumeratorProcessInquiry.c)
 *     RaidBusEnumeratorProcessSupportedPages @ 0x1C00162B0 (RaidBusEnumeratorProcessSupportedPages.c)
 *     RaidBusEnumeratorProcessDeviceId @ 0x1C0016320 (RaidBusEnumeratorProcessDeviceId.c)
 *     RaidBusEnumeratorProcessSerialNumber @ 0x1C0016700 (RaidBusEnumeratorProcessSerialNumber.c)
 *     RaidBusEnumeratorProcess1667DeviceInquiry @ 0x1C00167F0 (RaidBusEnumeratorProcess1667DeviceInquiry.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001AFBC (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C0D8 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DA54 (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002DDE0 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002E28C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidCancelIrp @ 0x1C00393F4 (RaidCancelIrp.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003C870 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitStorageFreeMiniPortDumpPointers @ 0x1C003EC88 (RaidUnitStorageFreeMiniPortDumpPointers.c)
 *     RaidUnitStorageGetMiniPortDumpPointers @ 0x1C003F00C (RaidUnitStorageGetMiniPortDumpPointers.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C006147C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0061B64 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0065184 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSrbStatusToNtStatus(char a1)
{
  unsigned int v1; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx

  v1 = a1 & 0x3F;
  if ( v1 <= 0x11 )
  {
    if ( v1 == 17 )
      return 3221225664LL;
    v3 = v1 - 1;
    if ( !v3 )
      return 0LL;
    v4 = v3 - 4;
    if ( !v4 )
      return 2147483665LL;
    v5 = v4 - 3;
    if ( !v5 )
      return 3221225664LL;
    v6 = v5 - 1;
    if ( !v6 )
      return 3221225653LL;
    v7 = v6 - 1;
    if ( !v7 )
      return 3221225629LL;
    if ( v7 == 1 )
      return 3221225653LL;
    return 3221225861LL;
  }
  switch ( v1 )
  {
    case 0x12u:
      return 2147483653LL;
    case 0x15u:
      return 3221225488LL;
    case 0x16u:
      return 3221225473LL;
  }
  if ( v1 <= 0x1F )
    return 3221225861LL;
  if ( v1 <= 0x21 )
    return 3221225664LL;
  if ( v1 == 34 )
    return 3221225488LL;
  if ( v1 != 56 )
    return 3221225861LL;
  return 3221226762LL;
}
