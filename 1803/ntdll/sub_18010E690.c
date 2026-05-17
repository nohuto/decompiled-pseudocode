/*
 * XREFs of sub_18010E690 @ 0x18010E690
 * Callers:
 *     sub_18010A158 @ 0x18010A158 (sub_18010A158.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x18009ABA0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateFile @ 0x18009B560 (ZwCreateFile.c)
 */

__int64 __fastcall sub_18010E690(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  int v4; // ebx
  unsigned __int64 v5; // [rsp+E0h] [rbp+37h]

  *a2 = 0;
  result = ZwCreateFile();
  if ( (int)result >= 0 )
  {
    v4 = ZwDeviceIoControlFile();
    ZwClose();
    if ( v4 >= 0 )
    {
      if ( v5 <= 0xFFFFFFFF )
      {
        *a2 = v5;
        return 0LL;
      }
      else
      {
        return 3221226539LL;
      }
    }
    else
    {
      return (unsigned int)v4;
    }
  }
  return result;
}
