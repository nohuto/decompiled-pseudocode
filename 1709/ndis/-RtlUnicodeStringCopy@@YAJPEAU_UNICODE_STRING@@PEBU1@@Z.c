/*
 * XREFs of ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C006AE84
 * Callers:
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00CA11C (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C00236B4 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateSrcWorker @ 0x1C006AF0C (RtlUnicodeStringValidateSrcWorker.c)
 *     RtlWideCharArrayCopyWorker @ 0x1C006AF48 (RtlWideCharArrayCopyWorker.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCopy(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  size_t v4; // r9
  __int16 v5; // bx
  size_t cchSrcLength; // [rsp+20h] [rbp-28h]
  ULONG cchSrcLengtha; // [rsp+20h] [rbp-28h]
  ULONG v8; // [rsp+28h] [rbp-20h]
  size_t cchDest; // [rsp+30h] [rbp-18h] BYREF
  wchar_t *pszDest; // [rsp+38h] [rbp-10h] BYREF
  size_t pcchNewDestLength; // [rsp+58h] [rbp+10h] BYREF
  size_t pcchSrcLength; // [rsp+60h] [rbp+18h] BYREF
  wchar_t *ppszSrc; // [rsp+68h] [rbp+20h] BYREF

  pcchNewDestLength = (size_t)a2;
  result = RtlUnicodeStringValidateDestWorker(a1, &pszDest, &cchDest, 0LL, cchSrcLength, v8);
  v5 = 0;
  if ( result >= 0 )
  {
    pcchNewDestLength = 0LL;
    result = RtlUnicodeStringValidateSrcWorker(
               &ndisPcwSystemTotalInstanceName,
               &ppszSrc,
               &pcchSrcLength,
               v4,
               cchSrcLengtha);
    if ( result >= 0 )
    {
      result = RtlWideCharArrayCopyWorker(pszDest, cchDest, &pcchNewDestLength, ppszSrc, pcchSrcLength);
      v5 = pcchNewDestLength;
    }
    a1->Length = 2 * v5;
  }
  return result;
}
