/*
 * XREFs of wcscpy_s @ 0x1401704A0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1404C06A0 (RtlConvertSidToUnicodeString.c)
 *     RtlLockBootStatusData @ 0x140585800 (RtlLockBootStatusData.c)
 *     BiGetSystemStorePath @ 0x140589C14 (BiGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140589D30 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14058C478 (BiConvertNtDeviceToBootEnvironment.c)
 *     NtLockProductActivationKeys @ 0x1405AF814 (NtLockProductActivationKeys.c)
 *     AslPathToNetworkPathNt @ 0x1405BC658 (AslPathToNetworkPathNt.c)
 *     CmDeleteKeyRecursive @ 0x14066DFD0 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x14066EB04 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x1406A1F44 (PnprGetPluginDriverImagePath.c)
 *     LocalConvertAclToString @ 0x1406FA724 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406FB220 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x1406FBA24 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x1406FBB48 (LocalGetStringForSid.c)
 *     ExpWatchLicenseInfoWork @ 0x1407166B0 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x140718A74 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x140718E44 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x140719114 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407191E4 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1407193A4 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x140719BA0 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x14071B354 (ExpTranslateEfiPath.c)
 *     BiCreateFileDeviceElement @ 0x140735940 (BiCreateFileDeviceElement.c)
 *     HdlspKernelAddLogEntry @ 0x14078ECDC (HdlspKernelAddLogEntry.c)
 *     ExpWatchProductTypeInitialization @ 0x14081062C (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  wchar_t v6; // ax

  if ( Dst && SizeInWords )
  {
    if ( !Src )
    {
      v4 = 22;
LABEL_10:
      *Dst = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
    v5 = (char *)Dst - (char *)Src;
    do
    {
      v6 = *Src;
      *(const wchar_t *)((char *)Src + v5) = *Src;
      ++Src;
      if ( !v6 )
        break;
      --SizeInWords;
    }
    while ( SizeInWords );
    if ( !SizeInWords )
    {
      v4 = 34;
      goto LABEL_10;
    }
    return 0;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
