/*
 * XREFs of ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C00B1E28
 * Callers:
 *     Win32UserInitialize @ 0x1C01F2A58 (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C003C8E0 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

__int64 IsDesktopHeapLoggingOn(void)
{
  unsigned int v0; // edi
  int v1; // ebx
  void *v2; // rbp
  int v3; // esi
  int v5; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-44h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-30h] BYREF
  int v9; // [rsp+54h] [rbp-24h]

  v0 = 0;
  v5 = gdwPolicyFlags;
  v1 = gdwPolicyFlags;
  while ( 1 )
  {
    v2 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v5);
    if ( !v2 )
      break;
    RtlInitUnicodeString(&DestinationString, L"DesktopHeapLogging");
    if ( ZwQueryValueKey(v2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) < 0 )
    {
      v3 = v5;
      if ( !v5 )
        v1 = 0;
    }
    else
    {
      v1 = v9;
      v3 = 0;
      v5 = 0;
    }
    ZwClose(v2);
    if ( !v3 )
      goto LABEL_10;
  }
  v1 = 0;
LABEL_10:
  LOBYTE(v0) = v1 != 0;
  return v0;
}
