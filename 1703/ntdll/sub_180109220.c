/*
 * XREFs of sub_180109220 @ 0x180109220
 * Callers:
 *     sub_180109064 @ 0x180109064 (sub_180109064.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_18005D9D8 @ 0x18005D9D8 (sub_18005D9D8.c)
 *     sub_18005DC70 @ 0x18005DC70 (sub_18005DC70.c)
 *     sub_18008A97C @ 0x18008A97C (sub_18008A97C.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_180108F48 @ 0x180108F48 (sub_180108F48.c)
 *     sub_18010D6E8 @ 0x18010D6E8 (sub_18010D6E8.c)
 *     sub_18010D87C @ 0x18010D87C (sub_18010D87C.c)
 */

__int64 __fastcall sub_180109220(int *a1, int *a2)
{
  int v3; // ebx
  int v4; // ebp
  _WORD *v6; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  int v14[4]; // [rsp+20h] [rbp-258h] BYREF
  _WORD v15[264]; // [rsp+30h] [rbp-248h] BYREF

  v3 = -1;
  v14[0] = -1;
  v4 = -1;
  v6 = v15;
  if ( (unsigned int)sub_18005DC70(v15) - 1 > 0x102 )
    v6 = 0LL;
  if ( a1 )
  {
    v8 = sub_18005D9D8();
    if ( v8 )
    {
      v10 = v8[2];
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 24);
        if ( v11 )
          v3 = *(_DWORD *)(v11 + 12);
      }
      sub_180108F48(v8);
    }
    if ( (unsigned int)sub_18008A97C(v9, v14) && v14[0] >= 0 && v14[0] != v3 )
    {
      if ( v3 >= 0 )
      {
        v4 = v14[0];
      }
      else
      {
        v3 = v14[0];
        if ( v6 )
        {
          v12 = sub_18010D87C(v6, (unsigned int)v14[0]);
          if ( v12 >= 0 && v12 != v3 )
            v4 = v12;
        }
      }
    }
    if ( v3 < 0 )
    {
      if ( v6 )
      {
        v3 = sub_18010D6E8(v6);
        if ( v3 == 9999 )
        {
          v13 = sub_18010D87C(v6, 9999LL);
          if ( v13 >= 0 )
            v3 = v13;
        }
      }
    }
    *a1 = v3;
    if ( a2 )
      *a2 = v4;
    return 1LL;
  }
  else
  {
    if ( !NtCurrentTeb()->LastErrorValue )
      RtlSetLastWin32Error(87);
    return 0LL;
  }
}
