/*
 * XREFs of RtlStringCchCopyNExW @ 0x1C003A388
 * Callers:
 *     ?RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C0039B48 (-RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 *     ?RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C003A07C (-RegQuerySoCName@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C003A418 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyNExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTRSAFE_PWSTR v7; // rdi
  int v8; // edx
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF

  pcchNewDestLength = cchDest;
  v7 = pszDest;
  if ( cchToCopy < 0x7FFFFFFF )
  {
    pcchNewDestLength = 0LL;
    v8 = RtlStringCopyWorkerW(pszDest, cchDest, &pcchNewDestLength, pszSrc, cchToCopy);
    pszDest = &v7[pcchNewDestLength];
    if ( v8 < 0 )
    {
LABEL_5:
      *v7 = 0;
      pszDest = v7;
      if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2147483643 )
        return v8;
      goto LABEL_7;
    }
  }
  else
  {
    v8 = -1073741811;
    *pszDest = 0;
  }
  if ( v8 < 0 )
    goto LABEL_5;
LABEL_7:
  if ( ppszDestEnd )
    *ppszDestEnd = pszDest;
  return v8;
}
