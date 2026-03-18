/*
 * XREFs of RtlStringCchLengthW @ 0x1400DF440
 * Callers:
 *     PnpConcatPWSTR @ 0x14051B1D4 (PnpConcatPWSTR.c)
 *     PnpAllocatePWSTR @ 0x140524F08 (PnpAllocatePWSTR.c)
 *     WmipMangleInstanceName @ 0x140545A40 (WmipMangleInstanceName.c)
 *     AslStringDuplicate @ 0x140547940 (AslStringDuplicate.c)
 *     PiUEventCopyEventData @ 0x1405484D0 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x1405486E8 (PiUEventHandleRegistration.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14054B05C (PiUEventProcessBroadcastNotifications.c)
 *     PnpValidateMultiSz @ 0x14054D8C0 (PnpValidateMultiSz.c)
 *     PnpGetMultiSzLength @ 0x1405BB9F8 (PnpGetMultiSzLength.c)
 *     IoCreateDriver @ 0x1405C7780 (IoCreateDriver.c)
 *     SepParseElamCertResources @ 0x1405D9C34 (SepParseElamCertResources.c)
 *     PpmRegisterProfiles @ 0x1405E0DB4 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x1405E0F98 (PpmEventTraceProfiles.c)
 *     TtmNotifyDeviceArrival @ 0x1405E9F20 (TtmNotifyDeviceArrival.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1406ADCB0 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x1406BF19C (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406D0308 (PiCMGenerateDeviceInstance.c)
 *     RtlpValidAttribute @ 0x140721108 (RtlpValidAttribute.c)
 *     RtlIdnToUnicode @ 0x140724280 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140724598 (RtlpNameprepAsciiWorker.c)
 *     AslPathCombine @ 0x140772D1C (AslPathCombine.c)
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
