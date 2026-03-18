/*
 * XREFs of RtlStringCbCopyNW @ 0x1401F57E8
 * Callers:
 *     PopDiagGetDriverName @ 0x140244E00 (PopDiagGetDriverName.c)
 *     IopCheckIfNotNativeDriver @ 0x1406B4A60 (IopCheckIfNotNativeDriver.c)
 *     LocalConvertSidToStringSidW @ 0x140733204 (LocalConvertSidToStringSidW.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x1407766C0 (AuthzBasepCopyoutClaimAttributeValues.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x140776918 (AuthzBasepCopyoutClaimAttributes.c)
 * Callees:
 *     RtlStringCopyWorkerW_1 @ 0x1400F9DC4 (RtlStringCopyWorkerW_1.c)
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
    if ( cchToCopy <= 0x7FFFFFFE )
    {
      return RtlStringCopyWorkerW_1(pszDest, v4, (size_t *)pszSrc, pszSrc, cchToCopy);
    }
    else
    {
      v5 = -1073741811;
      *pszDest = 0;
    }
  }
  return v5;
}
