/*
 * XREFs of KeSetPagePrivilege @ 0x1401FC9E8
 * Callers:
 *     MiMarkPfnVerified @ 0x140005D80 (MiMarkPfnVerified.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiClearPfnImageVerified @ 0x1400C7700 (MiClearPfnImageVerified.c)
 *     MiDeletePerSessionProtos @ 0x140221048 (MiDeletePerSessionProtos.c)
 *     MiReloadBootLoadedDrivers @ 0x140815898 (MiReloadBootLoadedDrivers.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x1408319F4 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     VslMakeProtectedPageWritable @ 0x1401ED568 (VslMakeProtectedPageWritable.c)
 */

int __fastcall KeSetPagePrivilege(__int64 a1, __int128 *a2, __int16 a3)
{
  char v3; // bl
  __int128 v4; // xmm0
  __int64 v5; // rdx
  int result; // eax
  __int128 v7; // xmm0
  _BYTE v8[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v9; // [rsp+28h] [rbp-80h]
  __int128 v10; // [rsp+30h] [rbp-78h]

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    v4 = *a2;
    v5 = 229LL;
LABEL_9:
    v9 = a1;
    v10 = v4;
    return VslpEnterIumSecureMode(1, v5, 0LL, (__int64)v8);
  }
  if ( (a3 & 6) == 0 )
  {
    v4 = *a2;
    v5 = 227LL;
    goto LABEL_9;
  }
  result = 0;
  if ( (a3 & 2) == 0
    || (v7 = *a2, v9 = a1, v10 = v7, result = VslpEnterIumSecureMode(1, 231LL, 0LL, (__int64)v8), result >= 0) )
  {
    if ( (v3 & 4) != 0 )
      return VslMakeProtectedPageWritable();
  }
  return result;
}
