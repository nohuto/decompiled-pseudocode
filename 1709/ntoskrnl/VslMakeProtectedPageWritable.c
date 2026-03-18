/*
 * XREFs of VslMakeProtectedPageWritable @ 0x1401F2388
 * Callers:
 *     KeSetPagePrivilege @ 0x14015130C (KeSetPagePrivilege.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14011D9FC (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS VslMakeProtectedPageWritable()
{
  __int128 *v0; // rdx
  __int64 v1; // r8
  __int128 v3; // xmm0
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int128 v6; // [rsp+30h] [rbp-78h]

  if ( !HvlQueryVsmConnection(0LL) )
    return 0;
  v3 = *v0;
  v5 = v1;
  v6 = v3;
  return VslpEnterIumSecureMode(2u, 230LL, 0, (__int64)v4);
}
