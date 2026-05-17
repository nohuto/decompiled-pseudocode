/*
 * XREFs of RtlOsDeploymentState @ 0x1800F9660
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
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
