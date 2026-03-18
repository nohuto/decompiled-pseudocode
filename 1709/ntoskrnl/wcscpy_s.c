/*
 * XREFs of wcscpy_s @ 0x140164CA0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x140489090 (RtlConvertSidToUnicodeString.c)
 *     AslPathToNetworkPathNt @ 0x140541914 (AslPathToNetworkPathNt.c)
 *     RtlLockBootStatusData @ 0x1405ACB30 (RtlLockBootStatusData.c)
 *     BiGetSystemStorePath @ 0x1405AE5C8 (BiGetSystemStorePath.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1405B063C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1405B06F0 (BiConvertBootEnvironmentDeviceToNt.c)
 *     NtLockProductActivationKeys @ 0x1405CD0B0 (NtLockProductActivationKeys.c)
 *     CmDeleteKeyRecursive @ 0x1406984C8 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x140698FFC (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x1406CC7E4 (PnprGetPluginDriverImagePath.c)
 *     LocalConvertAclToString @ 0x14073215C (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140732C08 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x14073340C (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x140733530 (LocalGetStringForSid.c)
 *     ExpWatchLicenseInfoWork @ 0x140755DD0 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x140758274 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x140758644 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x140758914 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407589E4 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x140758BA4 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x140759448 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x14075ABF0 (ExpTranslateEfiPath.c)
 *     BiCreateFileDeviceElement @ 0x140779D84 (BiCreateFileDeviceElement.c)
 *     HdlspKernelAddLogEntry @ 0x1407CC800 (HdlspKernelAddLogEntry.c)
 *     ExpWatchProductTypeInitialization @ 0x140839140 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140131CB0 (xHalTimerWatchdogStop.c)
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
