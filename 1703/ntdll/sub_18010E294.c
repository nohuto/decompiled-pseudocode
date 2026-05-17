/*
 * XREFs of sub_18010E294 @ 0x18010E294
 * Callers:
 *     sub_180109490 @ 0x180109490 (sub_180109490.c)
 *     sub_18010E330 @ 0x18010E330 (sub_18010E330.c)
 * Callees:
 *     sub_180003048 @ 0x180003048 (sub_180003048.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_18010C1E0 @ 0x18010C1E0 (sub_18010C1E0.c)
 *     sub_18010D1BC @ 0x18010D1BC (sub_18010D1BC.c)
 *     sub_18010E10C @ 0x18010E10C (sub_18010E10C.c)
 */

unsigned __int64 __fastcall sub_18010E294(_WORD *Src, int a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  unsigned int v5; // eax
  char *v6; // rax
  _BYTE v8[20]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v9; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]

  v4 = sub_18010C1E0((__int64)Src, a2);
  if ( v4 )
  {
    if ( (unsigned int)sub_18010D1BC((int)Src, v3, (__int64)v8) )
    {
      v5 = v9;
      *(_DWORD *)(v4 + 48) = v11;
      *(_QWORD *)(v4 + 56) = __PAIR64__(v10, v5);
      v6 = sub_180003048(Src);
      *(_QWORD *)(v4 + 40) = v6;
      if ( !v6 )
      {
        sub_18010E10C(v4);
        return 0LL;
      }
    }
    else
    {
      *(_DWORD *)(v4 + 48) = 0;
      *(_QWORD *)(v4 + 56) = 0LL;
    }
  }
  return v4;
}
