/*
 * XREFs of sub_18010CB1C @ 0x18010CB1C
 * Callers:
 *     sub_18010C9B4 @ 0x18010C9B4 (sub_18010C9B4.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryVolumeInformationFile @ 0x18009B3E0 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall sub_18010CB1C(__int64 a1, int *a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // [rsp+40h] [rbp-38h]
  unsigned int v7; // [rsp+58h] [rbp-20h]
  unsigned int v8; // [rsp+5Ch] [rbp-1Ch]

  result = ZwQueryVolumeInformationFile();
  if ( (int)result >= 0 )
  {
    v4 = v6 * v7 * (unsigned __int64)v8;
    if ( v4 > 0x200000000LL )
    {
      if ( v4 > 0x800000000LL )
      {
        v5 = 20;
        if ( v4 <= 0x2000000000LL )
          v5 = 15;
        *a2 = v5;
      }
      else
      {
        *a2 = 10;
      }
    }
    else
    {
      *a2 = 5;
    }
    return 0LL;
  }
  return result;
}
