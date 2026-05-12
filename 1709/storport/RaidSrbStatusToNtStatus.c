/*
 * XREFs of RaidSrbStatusToNtStatus @ 0x1C000BB14
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0006C4C (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitStartIo @ 0x1C0008160 (RaUnitStartIo.c)
 *     RaUnitAsyncError @ 0x1C000B8F8 (RaUnitAsyncError.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000C414 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C000E530 (RaidBusEnumeratorProcessAtaInformation.c)
 *     RaidPnPPassToMiniPort @ 0x1C0013B8C (RaidPnPPassToMiniPort.c)
 *     RaidBusEnumeratorProcessInquiry @ 0x1C0016620 (RaidBusEnumeratorProcessInquiry.c)
 *     RaidBusEnumeratorProcessSupportedPages @ 0x1C0016740 (RaidBusEnumeratorProcessSupportedPages.c)
 *     RaidBusEnumeratorProcessDeviceId @ 0x1C00167C0 (RaidBusEnumeratorProcessDeviceId.c)
 *     RaidBusEnumeratorProcessSerialNumber @ 0x1C0016BB0 (RaidBusEnumeratorProcessSerialNumber.c)
 *     RaidBusEnumeratorProcess1667DeviceInquiry @ 0x1C0016CB0 (RaidBusEnumeratorProcess1667DeviceInquiry.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017668 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001C498 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidBusEnumeratorProcessProbeLunZero @ 0x1C001EE20 (RaidBusEnumeratorProcessProbeLunZero.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C002EB18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C002EFC4 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidBusEnumeratorProcessBlockDeviceCharacteristics @ 0x1C0030D30 (RaidBusEnumeratorProcessBlockDeviceCharacteristics.c)
 *     RaidCancelIrp @ 0x1C003AF04 (RaidCancelIrp.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003E190 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0063844 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0063F38 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C006667C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0066C6C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0066F64 (RaidAdapterGetMiniportDumpInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSrbStatusToNtStatus(char a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx

  v1 = a1 & 0x3F;
  if ( v1 > 0x11 )
  {
    if ( v1 == 18 )
      return 2147483653LL;
    if ( v1 != 21 )
    {
      if ( v1 == 22 )
        return 3221225473LL;
      if ( v1 <= 0x1F )
        return 3221225861LL;
      if ( v1 <= 0x21 )
        return 3221225664LL;
      if ( v1 != 34 )
      {
        if ( v1 != 56 )
          return 3221225861LL;
        return 3221226762LL;
      }
    }
    return 3221225488LL;
  }
  if ( v1 == 17 )
    return 3221225664LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 4;
  if ( !v3 )
    return 2147483665LL;
  v4 = v3 - 3;
  if ( !v4 )
    return 3221225664LL;
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
      return 3221225629LL;
    if ( v6 != 1 )
      return 3221225861LL;
  }
  return 3221225653LL;
}
