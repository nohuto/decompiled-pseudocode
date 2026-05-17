/*
 * XREFs of sub_180038510 @ 0x180038510
 * Callers:
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_1800385D0 @ 0x1800385D0 (sub_1800385D0.c)
 *     sub_180038944 @ 0x180038944 (sub_180038944.c)
 *     sub_1800389D0 @ 0x1800389D0 (sub_1800389D0.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180046E54 @ 0x180046E54 (sub_180046E54.c)
 *     sub_180047B2C @ 0x180047B2C (sub_180047B2C.c)
 */

__int64 __fastcall sub_180038510(int a1, int a2, __int64 a3, unsigned __int64 *a4)
{
  int v6; // ebx
  int v7; // r8d
  int v8; // edx
  __int16 v10; // si
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v6 = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    v7 = a2;
    v8 = 0;
  }
  else
  {
    if ( (a2 & 0x200) == 0 )
      goto LABEL_5;
    v7 = a2;
    v8 = a1;
    a1 = 0;
  }
  v6 = sub_1800385D0(a1, v8, v7, (_DWORD)a4, (__int64)&v11);
LABEL_5:
  if ( v6 >= 0 )
  {
    v6 = -1073741275;
    if ( v11 == 9 )
    {
      v6 = sub_1800389D0(*a4);
      if ( v6 >= 0 )
      {
        v6 = sub_180038944(a3, *a4);
        if ( v6 < 0 )
        {
          v10 = NtCurrentTeb()->SameTebFlags & 0x1000;
          if ( !v10 )
            sub_1800435B4(0LL);
          sub_180046E54(*a4, 0LL);
          if ( !v10 )
            sub_180047B2C();
        }
      }
    }
    if ( v6 < 0 )
    {
      sub_18001F5FC(*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)v6;
}
