/*
 * XREFs of wcscpy_s @ 0x14018EC10
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x140517C80 (RtlConvertSidToUnicodeString.c)
 *     BcdGetSystemStorePath @ 0x140606FFC (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140607118 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14060985C (BiConvertNtDeviceToBootEnvironment.c)
 *     AslPathToNetworkPathNt @ 0x14061F7E4 (AslPathToNetworkPathNt.c)
 *     NtLockProductActivationKeys @ 0x14063B550 (NtLockProductActivationKeys.c)
 *     CmDeleteKeyRecursive @ 0x1406FBD00 (CmDeleteKeyRecursive.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1406FC834 (CmpCreateHwProfileFriendlyName.c)
 *     PnprGetPluginDriverImagePath @ 0x140734184 (PnprGetPluginDriverImagePath.c)
 *     LocalConvertAclToString @ 0x140795A60 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407964E0 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForControl @ 0x140796CB0 (LocalGetStringForControl.c)
 *     LocalGetStringForSid @ 0x140796DD4 (LocalGetStringForSid.c)
 *     ExpWatchLicenseInfoWork @ 0x1407BC8A0 (ExpWatchLicenseInfoWork.c)
 *     ExpConvertArcName @ 0x1407BEF08 (ExpConvertArcName.c)
 *     ExpCreateOutputARC @ 0x1407BF2D8 (ExpCreateOutputARC.c)
 *     ExpCreateOutputNT @ 0x1407BF5A4 (ExpCreateOutputNT.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407BF674 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1407BF834 (ExpFindArcName.c)
 *     ExpParseArcPathName @ 0x1407C0328 (ExpParseArcPathName.c)
 *     ExpTranslateEfiPath @ 0x1407C1B1C (ExpTranslateEfiPath.c)
 *     BiCreateFileDeviceElement @ 0x1407E2758 (BiCreateFileDeviceElement.c)
 *     HdlspKernelAddLogEntry @ 0x1408397F8 (HdlspKernelAddLogEntry.c)
 *     BgpFwLibraryInitialize @ 0x14083B9FC (BgpFwLibraryInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x1408BACD4 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  errno_t v3; // ebx
  signed __int64 v4; // rax
  wchar_t v5; // r9
  rsize_t v6; // r10
  rsize_t v7; // rax

  if ( Dst && SizeInWords )
  {
    if ( !Src )
    {
      v3 = 22;
LABEL_12:
      *Dst = 0;
      xHalTimerWatchdogStop();
      return v3;
    }
    v4 = (char *)Dst - (char *)Src;
    do
    {
      v5 = *Src;
      v6 = SizeInWords;
      *(const wchar_t *)((char *)Src + v4) = *Src;
      ++Src;
      if ( !v5 )
        break;
      --SizeInWords;
    }
    while ( SizeInWords );
    v7 = v6 - 1;
    if ( !v5 )
      v7 = v6;
    if ( !v7 )
    {
      v3 = 34;
      goto LABEL_12;
    }
    return 0;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
