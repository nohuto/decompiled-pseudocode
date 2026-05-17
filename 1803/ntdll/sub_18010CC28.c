/*
 * XREFs of sub_18010CC28 @ 0x18010CC28
 * Callers:
 *     sub_18010CBC8 @ 0x18010CBC8 (sub_18010CBC8.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x18009ABA0 (ZwDeviceIoControlFile.c)
 */

__int64 __fastcall sub_18010CC28(__int64 a1, int *a2)
{
  __int64 result; // rax
  int v4; // eax
  int v5; // [rsp+60h] [rbp-28h]

  result = ZwDeviceIoControlFile();
  if ( (int)result >= 0 )
  {
    v4 = 50;
    if ( v5 == 1 )
      v4 = 100;
    *a2 = v4;
    return 0LL;
  }
  if ( (unsigned int)(result + 0x3FFFFFFF) <= 1 || (_DWORD)result == -1073741808 )
  {
    *a2 = 100;
    return 0LL;
  }
  return result;
}
