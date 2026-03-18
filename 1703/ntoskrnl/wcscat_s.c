/*
 * XREFs of wcscat_s @ 0x1401703F0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x1404C06A0 (RtlConvertSidToUnicodeString.c)
 *     BiGetSystemStorePath @ 0x140589C14 (BiGetSystemStorePath.c)
 *     NtLockProductActivationKeys @ 0x1405AF814 (NtLockProductActivationKeys.c)
 *     AslPathToNetworkPathNt @ 0x1405BC658 (AslPathToNetworkPathNt.c)
 *     ExpWatchLicenseInfoWork @ 0x1407166B0 (ExpWatchLicenseInfoWork.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407191E4 (ExpCreateOutputSIGNATURE.c)
 *     ExpWatchProductTypeInitialization @ 0x14081062C (ExpWatchProductTypeInitialization.c)
 *     VhdiMountVhdFile @ 0x1408368E4 (VhdiMountVhdFile.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14014A440 (xHalTimerWatchdogStop.c)
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
