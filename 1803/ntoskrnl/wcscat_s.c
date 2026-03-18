/*
 * XREFs of wcscat_s @ 0x14018EB50
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x140517C80 (RtlConvertSidToUnicodeString.c)
 *     BcdGetSystemStorePath @ 0x140606FFC (BcdGetSystemStorePath.c)
 *     AslPathToNetworkPathNt @ 0x14061F7E4 (AslPathToNetworkPathNt.c)
 *     NtLockProductActivationKeys @ 0x14063B550 (NtLockProductActivationKeys.c)
 *     ExpWatchLicenseInfoWork @ 0x1407BC8A0 (ExpWatchLicenseInfoWork.c)
 *     ExpCreateOutputSIGNATURE @ 0x1407BF674 (ExpCreateOutputSIGNATURE.c)
 *     ExpWatchProductTypeInitialization @ 0x1408BACD4 (ExpWatchProductTypeInitialization.c)
 *     VhdiMountVhdFile @ 0x1408E2874 (VhdiMountVhdFile.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  wchar_t *v4; // rax
  errno_t v5; // ebx
  signed __int64 v6; // rax
  wchar_t v7; // r9
  rsize_t v8; // r10
  rsize_t v9; // rax

  if ( !Dst || !SizeInWords )
    goto LABEL_5;
  if ( !Src )
  {
    *Dst = 0;
LABEL_5:
    xHalTimerWatchdogStop();
    return 22;
  }
  v4 = Dst;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --SizeInWords;
  }
  while ( SizeInWords );
  if ( !SizeInWords )
  {
    v5 = 22;
LABEL_18:
    *Dst = 0;
    xHalTimerWatchdogStop();
    return v5;
  }
  v6 = (char *)v4 - (char *)Src;
  do
  {
    v7 = *Src;
    v8 = SizeInWords;
    *(const wchar_t *)((char *)Src + v6) = *Src;
    ++Src;
    if ( !v7 )
      break;
    --SizeInWords;
  }
  while ( SizeInWords );
  v9 = v8 - 1;
  if ( !v7 )
    v9 = v8;
  if ( !v9 )
  {
    v5 = 34;
    goto LABEL_18;
  }
  return 0;
}
