/*
 * XREFs of sub_18001E19C @ 0x18001E19C
 * Callers:
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 * Callees:
 *     sub_180011D94 @ 0x180011D94 (sub_180011D94.c)
 *     sub_18001A338 @ 0x18001A338 (sub_18001A338.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     sub_18001BDBC @ 0x18001BDBC (sub_18001BDBC.c)
 *     sub_18001BE0C @ 0x18001BE0C (sub_18001BE0C.c)
 *     sub_180021AE0 @ 0x180021AE0 (sub_180021AE0.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 */

__int64 __fastcall sub_18001E19C(int a1, int a2, __int64 a3, __int64 *a4)
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
  v6 = sub_180021AE0(a1, v8, v7, (_DWORD)a4, (__int64)&v11);
LABEL_5:
  if ( v6 >= 0 )
  {
    v6 = -1073741275;
    if ( v11 == 9 )
    {
      v6 = sub_18001BDBC(*a4);
      if ( v6 >= 0 )
      {
        v6 = sub_18001BE0C(a3, *a4);
        if ( v6 < 0 )
        {
          v10 = NtCurrentTeb()->SameTebFlags & 0x1000;
          if ( !v10 )
            sub_18001AE14(0);
          sub_180011D94(*a4, 0);
          if ( !v10 )
            sub_18001A338();
        }
      }
    }
    if ( v6 < 0 )
    {
      sub_18003015C(*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)v6;
}
