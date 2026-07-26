/*
 * XREFs of ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0011870
 * Callers:
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00B1A10 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlWideCharArrayCopyWorker @ 0x1C001190C (RtlWideCharArrayCopyWorker.c)
 *     RtlUnicodeStringValidateSrcWorker @ 0x1C001196C (RtlUnicodeStringValidateSrcWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x1C0016F48 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCat(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2, ULONG a3)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  NTSTATUS result; // eax
  unsigned __int16 *v8; // rcx
  size_t v9; // r9
  const UNICODE_STRING *v10; // r10
  ULONG cchSrcLength; // [rsp+20h] [rbp-38h]
  wchar_t *ppszSrc; // [rsp+30h] [rbp-28h] BYREF
  size_t pcchNewDestLength; // [rsp+70h] [rbp+18h] BYREF
  size_t pcchSrcLength; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  result = RtlUnicodeStringValidateWorker(a1, (const size_t)a2, a3);
  if ( result >= 0 )
  {
    if ( v8 )
    {
      v4 = *((_QWORD *)v8 + 1);
      v5 = (unsigned __int64)v8[1] >> 1;
      v6 = (unsigned __int64)*v8 >> 1;
    }
    result = RtlUnicodeStringValidateSrcWorker(v10, &ppszSrc, &pcchSrcLength, v9, cchSrcLength);
    if ( result >= 0 )
    {
      pcchNewDestLength = 0LL;
      result = RtlWideCharArrayCopyWorker((wchar_t *)(v4 + 2 * v6), v5 - v6, &pcchNewDestLength, ppszSrc, pcchSrcLength);
      a1->Length = 2 * (pcchNewDestLength + v6);
    }
  }
  return result;
}
