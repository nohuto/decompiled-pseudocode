/*
 * XREFs of KeSetPagePrivilege @ 0x14015130C
 * Callers:
 *     MiClearPfnImageVerified @ 0x140050290 (MiClearPfnImageVerified.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     MiMarkPfnVerified @ 0x1400CCEFC (MiMarkPfnVerified.c)
 *     MiDeletePerSessionProtos @ 0x14022DCD4 (MiDeletePerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x140837458 (MiReloadBootLoadedDrivers.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x1408688E8 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     VslMakeProtectedPageWritable @ 0x1401F2388 (VslMakeProtectedPageWritable.c)
 */

int __fastcall KeSetPagePrivilege(__int64 a1, __int128 *a2, __int16 a3)
{
  char v3; // bl
  __int128 v6; // xmm0
  __int64 v7; // rdx
  int result; // eax
  __int128 v9; // xmm0
  _BYTE v10[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v11; // [rsp+28h] [rbp-80h]
  __int128 v12; // [rsp+30h] [rbp-78h]

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    v6 = *a2;
    v7 = 229LL;
    goto LABEL_4;
  }
  if ( (a3 & 6) == 0 )
  {
    v6 = *a2;
    v7 = 227LL;
LABEL_4:
    v11 = a1;
    v12 = v6;
    return VslpEnterIumSecureMode(2u, v7, 0, (__int64)v10);
  }
  result = 0;
  if ( (a3 & 2) == 0
    || (v9 = *a2, v11 = a1, v12 = v9, result = VslpEnterIumSecureMode(2u, 231LL, 0, (__int64)v10), result >= 0) )
  {
    if ( (v3 & 4) != 0 )
      return VslMakeProtectedPageWritable(a1, a2);
  }
  return result;
}
