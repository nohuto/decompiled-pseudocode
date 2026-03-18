/*
 * XREFs of RtlStringCbCopyNW @ 0x14013AB9C
 * Callers:
 *     PopDiagGetDriverName @ 0x14013AB60 (PopDiagGetDriverName.c)
 *     IopCheckIfNotNativeDriver @ 0x140688A80 (IopCheckIfNotNativeDriver.c)
 *     LocalConvertSidToStringSidW @ 0x1406FB81C (LocalConvertSidToStringSidW.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x14073254C (AuthzBasepCopyoutClaimAttributeValues.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x1407327A4 (AuthzBasepCopyoutClaimAttributes.c)
 * Callees:
 *     RtlStringCopyWorkerW_1 @ 0x14006DC18 (RtlStringCopyWorkerW_1.c)
 */

NTSTATUS __stdcall RtlStringCbCopyNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // r10
  NTSTATUS v5; // edx
  size_t cchToCopy; // r9

  v4 = cbDest >> 1;
  v5 = 0;
  if ( v4 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    cchToCopy = cbToCopy >> 1;
    if ( cchToCopy > 0x7FFFFFFE )
    {
      v5 = -1073741811;
      *pszDest = 0;
    }
    else
    {
      return RtlStringCopyWorkerW_1(pszDest, v4, (size_t *)pszSrc, pszSrc, cchToCopy);
    }
  }
  return v5;
}
