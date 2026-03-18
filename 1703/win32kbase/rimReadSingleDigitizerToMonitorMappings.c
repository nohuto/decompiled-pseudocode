/*
 * XREFs of rimReadSingleDigitizerToMonitorMappings @ 0x1C01071F0
 * Callers:
 *     RIMReadDigitizerToMonitorMappings @ 0x1C00085B0 (RIMReadDigitizerToMonitorMappings.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RtlStringCchCopyW @ 0x1C0073F2C (RtlStringCchCopyW.c)
 *     RtlStringCchPrintfW @ 0x1C00768AC (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     wcsstr @ 0x1C009D250 (wcsstr.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

NTSTATUS __fastcall rimReadSingleDigitizerToMonitorMappings(
        const UNICODE_STRING *a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        wchar_t *KeyValueInformation,
        __int64 a6,
        wchar_t *a7)
{
  int v10; // edx
  wchar_t *v11; // rax
  const WCHAR *v12; // rdx
  int v13; // r9d
  signed __int64 v14; // r8
  WCHAR v15; // ax
  NTSTATUS result; // eax
  int v17; // r9d
  ULONG Length; // [rsp+30h] [rbp-258h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-250h] BYREF
  wchar_t pszDest[256]; // [rsp+50h] [rbp-238h] BYREF

  Length = 524;
  memset(pszDest, 0, sizeof(pszDest));
  memset(KeyValueInformation, 0, 0x20CuLL);
  if ( RtlStringCchPrintfW(pszDest, 0x100uLL, L"%d-", a3) < 0 )
  {
    v17 = 15;
    goto LABEL_15;
  }
  RtlInitUnicodeString(&DestinationString, pszDest);
  DestinationString.MaximumLength = 512;
  if ( RtlAppendUnicodeStringToString(&DestinationString, a1 + 13) < 0 )
  {
    v17 = 14;
LABEL_15:
    LOBYTE(v10) = 3;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v10,
             18,
             v17,
             (__int64)&WPP_2af9596112663d0feb47807a2bcd069c_Traceguids);
  }
  v11 = wcsstr(DestinationString.Buffer, L"?");
  if ( v11 )
  {
    v12 = L"\\";
    v13 = 1;
    v14 = (char *)v11 - (char *)L"\\";
    do
    {
      v15 = *v12;
      *(const WCHAR *)((char *)v12 + v14) = *v12;
      ++v12;
      if ( !v15 )
        break;
      --v13;
    }
    while ( v13 );
  }
  result = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, Length, &Length);
  if ( result >= 0 )
  {
    if ( *((_DWORD *)KeyValueInformation + 1) == 1 && Length <= 0x200 )
    {
      result = RtlStringCchCopyW(a7, 0x80uLL, KeyValueInformation + 6);
      if ( result >= 0 )
        return result;
      v17 = 12;
    }
    else
    {
      v17 = 13;
    }
    goto LABEL_15;
  }
  return result;
}
