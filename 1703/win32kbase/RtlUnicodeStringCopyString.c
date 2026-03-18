/*
 * XREFs of RtlUnicodeStringCopyString @ 0x1C01088B0
 * Callers:
 *     RIMComputePTPCurtainRegions @ 0x1C0107540 (RIMComputePTPCurtainRegions.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0108914 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1C0108998 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopyString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  int v3; // r8d
  __int64 v4; // r9
  size_t v6; // [rsp+20h] [rbp-18h]
  size_t v7; // [rsp+20h] [rbp-18h]
  ULONG v8; // [rsp+28h] [rbp-10h]
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF
  size_t pcchDest; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *ppszDest; // [rsp+58h] [rbp+20h] BYREF

  pcchNewDestLength = (size_t)pszSrc;
  v3 = RtlUnicodeStringValidateDestWorker(DestinationString, &ppszDest, &pcchDest, 0LL, v6, v8);
  if ( v3 >= 0 )
  {
    pcchNewDestLength &= v4;
    v3 = RtlWideCharArrayCopyStringWorker(ppszDest, pcchDest, &pcchNewDestLength, L"\\Registry\\Machine\\", v7);
    DestinationString->Length = 2 * pcchNewDestLength;
  }
  return v3;
}
