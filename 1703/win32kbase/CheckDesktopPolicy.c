/*
 * XREFs of CheckDesktopPolicy @ 0x1C00719E0
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0044A10 (OpenCacheKeyEx.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     RtlLoadStringOrError @ 0x1C0073FB0 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicy(PCUNICODE_STRING Source, PCWSTR SourceString)
{
  void *v5; // rsi
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+30h] [rbp-F8h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-F4h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v14[160]; // [rsp+60h] [rbp-C8h] BYREF

  v10 = gdwPolicyFlags & 6;
  if ( (gdwPolicyFlags & 6) != 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( ((unsigned __int64)SourceString & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      RtlLoadStringOrError((unsigned __int16)SourceString, v14);
      SourceString = (PCWSTR)v14;
    }
    do
    {
      v5 = OpenCacheKeyEx(Source, 4u, 0x20019u, &v10);
      if ( !v5 )
        break;
      RtlInitUnicodeString(&DestinationString, SourceString);
      v6 = ZwQueryValueKey(v5, &DestinationString, KeyValueBasicInformation, KeyValueInformation, 0x10u, &ResultLength);
      ZwClose(v5);
      if ( (v6 & 0xC0000000) != 0xC0000000 )
      {
        UserSetLastError(1260LL, v7, v8, v9);
        return 1LL;
      }
    }
    while ( v10 );
  }
  return 0LL;
}
