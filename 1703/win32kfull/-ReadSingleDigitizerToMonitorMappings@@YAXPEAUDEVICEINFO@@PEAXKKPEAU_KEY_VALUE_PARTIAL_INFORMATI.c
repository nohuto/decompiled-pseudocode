/*
 * XREFs of ?ReadSingleDigitizerToMonitorMappings@@YAXPEAUDEVICEINFO@@PEAXKKPEAU_KEY_VALUE_PARTIAL_INFORMATION@@KPEAG@Z @ 0x1C01A5438
 * Callers:
 *     ReadDigitizerToMonitorMappings @ 0x1C01A7560 (ReadDigitizerToMonitorMappings.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C00127D4 (RtlStringCchPrintfW.c)
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall ReadSingleDigitizerToMonitorMappings(
        const UNICODE_STRING *a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        struct _KEY_VALUE_PARTIAL_INFORMATION *KeyValueInformation,
        unsigned int a6,
        unsigned __int16 *a7)
{
  wchar_t *v10; // rax
  const WCHAR *v11; // rdx
  int v12; // r9d
  signed __int64 v13; // r8
  WCHAR v14; // ax
  ULONG Length; // [rsp+30h] [rbp-258h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-250h] BYREF
  wchar_t pszDest[256]; // [rsp+50h] [rbp-238h] BYREF

  Length = 524;
  memset(pszDest, 0, sizeof(pszDest));
  memset(KeyValueInformation, 0, 0x20CuLL);
  if ( RtlStringCchPrintfW(pszDest, 0x100uLL, L"%d-", a3) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, pszDest);
    DestinationString.MaximumLength = 512;
    if ( RtlAppendUnicodeStringToString(&DestinationString, a1 + 13) >= 0 )
    {
      v10 = wcsstr(DestinationString.Buffer, L"?");
      if ( v10 )
      {
        v11 = L"\\";
        v12 = 1;
        v13 = (char *)v10 - (char *)L"\\";
        do
        {
          v14 = *v11;
          *(const WCHAR *)((char *)v11 + v13) = *v11;
          ++v11;
          if ( !v14 )
            break;
          --v12;
        }
        while ( v12 );
      }
      if ( ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, Length, &Length) >= 0
        && KeyValueInformation->Type == 1
        && Length <= 0x200 )
      {
        RtlStringCchCopyW(a7, 0x80uLL, (NTSTRSAFE_PCWSTR)KeyValueInformation->Data);
      }
    }
  }
}
