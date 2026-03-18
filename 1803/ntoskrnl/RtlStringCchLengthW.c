/*
 * XREFs of RtlStringCchLengthW @ 0x14006D220
 * Callers:
 *     PnpValidateMultiSz @ 0x1404EAED8 (PnpValidateMultiSz.c)
 *     PnpAllocatePWSTR @ 0x1405045F0 (PnpAllocatePWSTR.c)
 *     PnpConcatPWSTR @ 0x14051A428 (PnpConcatPWSTR.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14051ED3C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCopyEventData @ 0x14058C024 (PiUEventCopyEventData.c)
 *     PiUEventHandleRegistration @ 0x14058C23C (PiUEventHandleRegistration.c)
 *     AslStringDuplicate @ 0x1405FC890 (AslStringDuplicate.c)
 *     WmipMangleInstanceName @ 0x1405FF820 (WmipMangleInstanceName.c)
 *     IoCreateDriver @ 0x140621240 (IoCreateDriver.c)
 *     SepParseElamCertResources @ 0x140633A74 (SepParseElamCertResources.c)
 *     PnpGetMultiSzLength @ 0x1406481FC (PnpGetMultiSzLength.c)
 *     PpmRegisterProfiles @ 0x140648FC4 (PpmRegisterProfiles.c)
 *     PpmEventTraceProfiles @ 0x1406491A8 (PpmEventTraceProfiles.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140712560 (DbgkWerCaptureLiveKernelDump.c)
 *     PnpGetDeviceDependencyList @ 0x140723F90 (PnpGetDeviceDependencyList.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140737610 (PiCMGenerateDeviceInstance.c)
 *     TtmNotifyDeviceArrival @ 0x1407704C0 (TtmNotifyDeviceArrival.c)
 *     RtlpValidAttribute @ 0x140784830 (RtlpValidAttribute.c)
 *     RtlIdnToUnicode @ 0x140787B50 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140787E68 (RtlpNameprepAsciiWorker.c)
 *     AslPathCombine @ 0x1407DA028 (AslPathCombine.c)
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
