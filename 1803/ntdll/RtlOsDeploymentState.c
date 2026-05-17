/*
 * XREFs of RtlOsDeploymentState @ 0x1800F7160
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 */

__int64 RtlOsDeploymentState()
{
  unsigned int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-78h] BYREF
  UNICODE_STRING v3; // [rsp+50h] [rbp-68h] BYREF
  int v4; // [rsp+60h] [rbp-58h]
  __int64 v5; // [rsp+68h] [rbp-50h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-48h]
  int v7; // [rsp+78h] [rbp-40h]
  __int128 v8; // [rsp+80h] [rbp-38h]
  int v9; // [rsp+94h] [rbp-24h]
  int v10; // [rsp+98h] [rbp-20h]
  int v11; // [rsp+9Ch] [rbp-1Ch]

  v0 = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  v4 = 48;
  v5 = 0LL;
  v7 = 576;
  p_DestinationString = &DestinationString;
  v8 = 0LL;
  if ( (int)ZwOpenKey() >= 0 )
  {
    RtlInitUnicodeString(&v3, L"Compact");
    if ( (int)ZwQueryValueKey() >= 0 && v9 == 4 && v10 == 4 && v11 )
      return 2;
  }
  return v0;
}
