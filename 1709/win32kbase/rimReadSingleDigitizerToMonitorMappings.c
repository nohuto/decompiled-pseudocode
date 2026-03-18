/*
 * XREFs of rimReadSingleDigitizerToMonitorMappings @ 0x1C0105680
 * Callers:
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0098660 (RIMReadDigitizerToMonitorMappings.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0005048 (RtlStringCchPrintfW.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RtlStringCchCopyW @ 0x1C0084D14 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     wcsstr @ 0x1C00A7330 (wcsstr.c)
 *     memset @ 0x1C00ABB80 (memset.c)
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
  wchar_t *v10; // rax
  const WCHAR *v11; // rdx
  int v12; // r9d
  signed __int64 v13; // r8
  WCHAR v14; // ax
  NTSTATUS result; // eax
  unsigned __int16 v16; // r9
  ULONG Length; // [rsp+30h] [rbp-258h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-250h] BYREF
  wchar_t pszDest[256]; // [rsp+50h] [rbp-238h] BYREF

  Length = 524;
  memset(pszDest, 0, sizeof(pszDest));
  memset(KeyValueInformation, 0, 0x20CuLL);
  if ( RtlStringCchPrintfW(pszDest, 0x100uLL, L"%d-", a3) < 0 )
  {
    v16 = 15;
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             0x12u,
             v16,
             (__int64)&WPP_fde1f29744cf32a1006834eb8d6e2bcd_Traceguids);
  }
  RtlInitUnicodeString(&DestinationString, pszDest);
  DestinationString.MaximumLength = 512;
  if ( RtlAppendUnicodeStringToString(&DestinationString, a1 + 13) < 0 )
  {
    v16 = 14;
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             0x12u,
             v16,
             (__int64)&WPP_fde1f29744cf32a1006834eb8d6e2bcd_Traceguids);
  }
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
  result = ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, Length, &Length);
  if ( result >= 0 )
  {
    if ( *((_DWORD *)KeyValueInformation + 1) == 1 && Length <= 0x200 )
    {
      result = RtlStringCchCopyW(a7, 0x80uLL, KeyValueInformation + 6);
      if ( result >= 0 )
        return result;
      v16 = 12;
    }
    else
    {
      v16 = 13;
    }
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             0x12u,
             v16,
             (__int64)&WPP_fde1f29744cf32a1006834eb8d6e2bcd_Traceguids);
  }
  return result;
}
