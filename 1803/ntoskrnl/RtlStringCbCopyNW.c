/*
 * XREFs of RtlStringCbCopyNW @ 0x140153AA0
 * Callers:
 *     PopDiagGetDriverName @ 0x140153A58 (PopDiagGetDriverName.c)
 *     IopCheckIfNotNativeDriver @ 0x140719710 (IopCheckIfNotNativeDriver.c)
 *     LocalConvertSidToStringSidW @ 0x140796AB4 (LocalConvertSidToStringSidW.c)
 *     AslPathWildcardFindFirst @ 0x1407DA2FC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1407DA8D8 (AslPathWildcardFindNext.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x1407DF42C (AuthzBasepCopyoutClaimAttributeValues.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x1407DF684 (AuthzBasepCopyoutClaimAttributes.c)
 * Callees:
 *     RtlStringCopyWorkerW_3 @ 0x140161D94 (RtlStringCopyWorkerW_3.c)
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
      return RtlStringCopyWorkerW_3(pszDest, v4, (size_t *)pszSrc, pszSrc, cchToCopy);
    }
  }
  return v5;
}
