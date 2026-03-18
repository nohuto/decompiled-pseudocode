/*
 * XREFs of VslReserveProtectedPages @ 0x1406B40C0
 * Callers:
 *     KeReservePrivilegedPages @ 0x140202724 (KeReservePrivilegedPages.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslReserveProtectedPages(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]
  __int64 v8; // [rsp+38h] [rbp-70h]
  __int64 v9; // [rsp+40h] [rbp-68h]

  v8 = a3;
  v6 = a1;
  v7 = a2;
  v9 = a4;
  return VslpEnterIumSecureMode(2u, 210LL, 0, (__int64)v5);
}
