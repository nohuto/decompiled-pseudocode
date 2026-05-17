/*
 * XREFs of sub_180109DC0 @ 0x180109DC0
 * Callers:
 *     sub_180109D60 @ 0x180109D60 (sub_180109D60.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwDeviceIoControlFile @ 0x1800A53E0 (ZwDeviceIoControlFile.c)
 */

__int64 __fastcall sub_180109DC0(__int64 a1, int *a2)
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
