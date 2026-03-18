/*
 * XREFs of CheckDesktopPolicy @ 0x1C0060D80
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0025E50 (OpenCacheKeyEx.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     RtlLoadStringOrError @ 0x1C0060610 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicy(const UNICODE_STRING *a1, const WCHAR *a2)
{
  void *v5; // rsi
  NTSTATUS v6; // ebx
  int v7; // [rsp+30h] [rbp-F8h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-F4h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v11[160]; // [rsp+60h] [rbp-C8h] BYREF

  v7 = gdwPolicyFlags & 6;
  if ( (gdwPolicyFlags & 6) != 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      RtlLoadStringOrError((unsigned __int16)a2, v11, 80, 0);
      a2 = (const WCHAR *)v11;
    }
    do
    {
      v5 = OpenCacheKeyEx(a1, 4u, 0x20019u, &v7);
      if ( !v5 )
        break;
      RtlInitUnicodeString(&DestinationString, a2);
      v6 = ZwQueryValueKey(v5, &DestinationString, KeyValueBasicInformation, KeyValueInformation, 0x10u, &ResultLength);
      ZwClose(v5);
      if ( (v6 & 0xC0000000) != 0xC0000000 )
      {
        UserSetLastError(1260);
        return 1LL;
      }
    }
    while ( v7 );
  }
  return 0LL;
}
