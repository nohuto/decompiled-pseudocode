/*
 * XREFs of ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C0006FC0
 * Callers:
 *     Win32UserInitialize @ 0x1C01DD910 (Win32UserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0025E50 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

_BOOL8 IsDesktopHeapLoggingOn(void)
{
  void *v0; // rbx
  int v1; // edi
  int v3; // [rsp+30h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-44h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+48h] [rbp-30h] BYREF
  int v7; // [rsp+54h] [rbp-24h]

  v3 = gdwPolicyFlags;
  v0 = (void *)OpenCacheKeyEx(0LL, 2LL, 131097LL, &v3);
  if ( !v0 )
    return 0LL;
  v1 = 0;
  while ( 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"DesktopHeapLogging");
    if ( ZwQueryValueKey(v0, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
      break;
    if ( !v3 )
      goto LABEL_5;
    ZwClose(v0);
    v0 = (void *)OpenCacheKeyEx(0LL, 2LL, 131097LL, &v3);
    if ( !v0 )
      return 0LL;
  }
  v1 = v7;
LABEL_5:
  ZwClose(v0);
  return v1 != 0;
}
