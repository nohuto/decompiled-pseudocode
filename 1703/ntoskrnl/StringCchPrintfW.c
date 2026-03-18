/*
 * XREFs of StringCchPrintfW @ 0x140034264
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140264B94 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PfVerifyScenarioBuffer @ 0x140565B70 (PfVerifyScenarioBuffer.c)
 *     AdtpBuildMessageString @ 0x1405ABDB4 (AdtpBuildMessageString.c)
 *     AdtpBuildGuidString @ 0x140732B70 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x140732C9C (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x140732D5C (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x140732EB4 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140733628 (AdtpBuildSecurityDescriptorUnicodeString.c)
 * Callees:
 *     _vsnwprintf @ 0x140169530 (_vsnwprintf.c)
 */

HRESULT StringCchPrintfW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  HRESULT v4; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147024774;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v4;
}
