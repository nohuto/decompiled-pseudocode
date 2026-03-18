/*
 * XREFs of ExpReadComPlusPackage @ 0x14045EAB8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 */

__int64 ExpReadComPlusPackage()
{
  NTSTATUS v0; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+44h] [rbp-24h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v0 = ZwOpenKey(&KeyHandle, 1u, &stru_14033C380);
  if ( v0 >= 0 )
  {
    v0 = ZwQueryValueKey(
           KeyHandle,
           &stru_14033C3B0,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength);
    if ( v0 >= 0 && v5 == 4 && v6 == 4 )
      MEMORY[0xFFFFF780000002E0] = v7;
    ZwClose(KeyHandle);
    if ( v0 >= 0 )
      return 0LL;
  }
  if ( v0 == -1073741772 )
    return 0LL;
  else
    return (unsigned int)v0;
}
