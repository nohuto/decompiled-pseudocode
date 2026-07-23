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

__int64 __fastcall sub_180038510(PUNICODE_STRING a1, __int16 a2, __int64 a3, char **a4)
{
  int v6; // ebx
  _UNICODE_STRING *v7; // rdx
  __int16 v9; // si
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v10) = 0;
  v6 = -1073741275;
  if ( (a2 & 0x20) != 0 )
  {
    v7 = 0LL;
  }
  else
  {
    if ( (a2 & 0x200) == 0 )
      goto LABEL_5;
    v7 = a1;
    a1 = 0LL;
  }
  v6 = sub_1800385D0(a1, v7, (__int64)&v10);
LABEL_5:
  if ( v6 >= 0 )
  {
    v6 = -1073741275;
    if ( (_DWORD)v10 == 9 )
    {
      v6 = sub_1800389D0(*a4);
      if ( v6 >= 0 )
      {
        v6 = sub_180038944(a3, *a4);
        if ( v6 < 0 )
        {
          v9 = NtCurrentTeb()->SameTebFlags & 0x1000;
          if ( !v9 )
            sub_1800435B4(0LL);
          sub_180046E54(*a4, 0LL);
          if ( !v9 )
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
