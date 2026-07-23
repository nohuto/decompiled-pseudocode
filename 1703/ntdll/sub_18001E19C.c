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

__int64 __fastcall sub_18001E19C(PUNICODE_STRING a1, __int16 a2, __int64 a3, __int64 *a4)
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
  v6 = sub_180021AE0(a1, v7, (__int64)&v10);
LABEL_5:
  if ( v6 >= 0 )
  {
    v6 = -1073741275;
    if ( (_DWORD)v10 == 9 )
    {
      v6 = sub_18001BDBC(*a4);
      if ( v6 >= 0 )
      {
        v6 = sub_18001BE0C(a3, *a4);
        if ( v6 < 0 )
        {
          v9 = NtCurrentTeb()->SameTebFlags & 0x1000;
          if ( !v9 )
            sub_18001AE14(0);
          sub_180011D94(*a4, 0);
          if ( !v9 )
            sub_18001A338();
        }
      }
    }
    if ( v6 < 0 )
    {
      sub_18003015C((PVOID)*a4);
      *a4 = 0LL;
    }
  }
  return (unsigned int)v6;
}
