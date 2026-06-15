/*
 * XREFs of McTemplateU0q @ 0x140034B24
 * Callers:
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014B14 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?WriteSqmInfo@CAudioDGModule@@AEAAXXZ @ 0x1400348FC (-WriteSqmInfo@CAudioDGModule@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x140034AB4 (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0q(__int64 a1, __int128 *a2, int a3)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]
  int v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = a3;
  v4[2] = &v7;
  v6 = 0;
  v5 = 4;
  return McGenEventWriteUM(a1, a2, 2LL, (__int64)v4);
}
