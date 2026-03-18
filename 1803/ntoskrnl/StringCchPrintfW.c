/*
 * XREFs of StringCchPrintfW @ 0x1400CC590
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402C4B50 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PfVerifyScenarioBuffer @ 0x140528280 (PfVerifyScenarioBuffer.c)
 *     AdtpBuildMessageString @ 0x14063D650 (AdtpBuildMessageString.c)
 *     AdtpBuildGuidString @ 0x1407DFA50 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1407DFB7C (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x1407DFC3C (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x1407DFD94 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1407E0520 (AdtpBuildSecurityDescriptorUnicodeString.c)
 * Callees:
 *     _vsnwprintf @ 0x140187B70 (_vsnwprintf.c)
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
