/*
 * XREFs of sub_18008A314 @ 0x18008A314
 * Callers:
 *     sub_18008A2B0 @ 0x18008A2B0 (sub_18008A2B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x18009ABA0 (ZwDeviceIoControlFile.c)
 */

__int64 __fastcall sub_18008A314(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+50h] [rbp-48h] BYREF
  _DWORD v5[4]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v6; // [rsp+70h] [rbp-28h] BYREF
  int v7; // [rsp+78h] [rbp-20h]

  v5[1] = 0;
  v6 = 0LL;
  v5[2] = 0;
  v7 = 0;
  v5[0] = 7;
  result = ZwDeviceIoControlFile(a1, 0LL, 0LL, 0LL, &v4, 2954240, v5, 12, &v6, 12);
  if ( (int)result >= 0 )
  {
    *a2 = (_BYTE)v7 != 0 ? 10 : 20;
    return 0LL;
  }
  if ( (_DWORD)result == -1073741823 || (_DWORD)result == -1073741808 )
  {
    *a2 = 10;
    return 0LL;
  }
  return result;
}
