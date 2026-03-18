/*
 * XREFs of VslConfigureDynamicMemory @ 0x1401F1B00
 * Callers:
 *     KeConfigureDynamicMemory @ 0x14020269C (KeConfigureDynamicMemory.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14011D9FC (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS VslConfigureDynamicMemory()
{
  __int64 v0; // rdx
  unsigned int v1; // r8d
  __int64 v2; // r9
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int64 v6; // [rsp+30h] [rbp-78h]
  __int64 v7; // [rsp+38h] [rbp-70h]

  if ( !HvlQueryVsmConnection(0LL) )
    return 0;
  v5 = v2;
  v6 = v0;
  v7 = v1;
  return VslpEnterIumSecureMode(2u, 36LL, 0, (__int64)v4);
}
