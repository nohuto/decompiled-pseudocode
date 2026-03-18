/*
 * XREFs of KeCopyPrivilegedPage @ 0x14015B1EC
 * Callers:
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KeCopyPrivilegedPage(__int64 a1, __int128 *a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _BYTE v9[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+28h] [rbp-80h]
  __int128 v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+40h] [rbp-68h]
  __int128 v13; // [rsp+48h] [rbp-60h]
  __int64 v14; // [rsp+58h] [rbp-50h]
  char v15; // [rsp+60h] [rbp-48h]

  v6 = *a4;
  v7 = *a2;
  v10 = a3;
  v11 = v6;
  v12 = a1;
  v13 = v7;
  v14 = a5;
  v15 = a6 & 1;
  return VslpEnterIumSecureMode(2u, 228LL, 0, (__int64)v9);
}
