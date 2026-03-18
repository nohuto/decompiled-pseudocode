/*
 * XREFs of RtlStringCchLengthW @ 0x14004C7E8
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x140464A2C (PiUEventProcessBroadcastNotifications.c)
 *     PnpAllocatePWSTR @ 0x1404875B0 (PnpAllocatePWSTR.c)
 *     PiUEventHandleRegistration @ 0x1404A4F10 (PiUEventHandleRegistration.c)
 *     PiUEventCopyEventData @ 0x1404A55B0 (PiUEventCopyEventData.c)
 *     PnpGetMultiSzLength @ 0x1404A7B64 (PnpGetMultiSzLength.c)
 *     PnpValidateMultiSz @ 0x1404A7BFC (PnpValidateMultiSz.c)
 *     AslStringDuplicate @ 0x1404B523C (AslStringDuplicate.c)
 *     PnpConcatPWSTR @ 0x1404BEFD4 (PnpConcatPWSTR.c)
 *     TtmNotifyDeviceArrival @ 0x140584B80 (TtmNotifyDeviceArrival.c)
 *     SepParseElamCertResources @ 0x14059BC24 (SepParseElamCertResources.c)
 *     IoCreateDriver @ 0x14059F550 (IoCreateDriver.c)
 *     WmipMangleInstanceName @ 0x1405A0AD8 (WmipMangleInstanceName.c)
 *     PpmRegisterProfiles @ 0x1405CC9BC (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x1405CCBA0 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1406829D0 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x1406934F8 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406A532C (PiCMGenerateDeviceInstance.c)
 *     RtlpValidAttribute @ 0x1406E92C0 (RtlpValidAttribute.c)
 *     RtlIdnToUnicode @ 0x1406EBDB0 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x1406EC0CC (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  size_t i; // r9
  NTSTATUS result; // eax

  if ( psz && cchMax <= 0x7FFFFFFF )
  {
    for ( i = cchMax; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    result = i == 0 ? 0xC000000D : 0;
    if ( pcchLength )
    {
      if ( i )
        *pcchLength = cchMax - i;
      else
        *pcchLength = 0LL;
    }
  }
  else
  {
    result = -1073741811;
  }
  if ( result < 0 )
  {
    if ( pcchLength )
      *pcchLength = 0LL;
  }
  return result;
}
