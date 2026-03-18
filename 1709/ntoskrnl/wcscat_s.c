/*
 * XREFs of wcscat_s @ 0x140164BF0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x140489090 (RtlConvertSidToUnicodeString.c)
 *     AslPathToNetworkPathNt @ 0x140541914 (AslPathToNetworkPathNt.c)
 *     BiGetSystemStorePath @ 0x1405AE5C8 (BiGetSystemStorePath.c)
 *     NtLockProductActivationKeys @ 0x1405CD0B0 (NtLockProductActivationKeys.c)
 *     ExpWatchLicenseInfoWork @ 0x140755DD0 (ExpWatchLicenseInfoWork.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407589E4 (ExpCreateOutputSIGNATURE.c)
 *     ExpWatchProductTypeInitialization @ 0x140839140 (ExpWatchProductTypeInitialization.c)
 *     VhdiMountVhdFile @ 0x14086DB14 (VhdiMountVhdFile.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140131CB0 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  wchar_t *v3; // r9
  errno_t v5; // ebx
  signed __int64 v6; // rcx
  wchar_t v7; // ax

  v3 = Dst;
  if ( !Dst || !SizeInWords )
    goto LABEL_5;
  if ( !Src )
  {
    *Dst = 0;
LABEL_5:
    xHalTimerWatchdogStop();
    return 22;
  }
  do
  {
    if ( !*Dst )
      break;
    ++Dst;
    --SizeInWords;
  }
  while ( SizeInWords );
  if ( !SizeInWords )
  {
    v5 = 22;
LABEL_15:
    *v3 = 0;
    xHalTimerWatchdogStop();
    return v5;
  }
  v6 = (char *)Dst - (char *)Src;
  do
  {
    v7 = *Src;
    *(const wchar_t *)((char *)Src + v6) = *Src;
    ++Src;
    if ( !v7 )
      break;
    --SizeInWords;
  }
  while ( SizeInWords );
  if ( !SizeInWords )
  {
    v5 = 34;
    goto LABEL_15;
  }
  return 0;
}
