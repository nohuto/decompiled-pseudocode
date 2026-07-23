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

__int64 __fastcall sub_18010E294(WCHAR *Src)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned int v4; // eax
  char *v5; // rax
  _BYTE v7[20]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v8; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]

  v3 = sub_18010C1E0(Src);
  if ( v3 )
  {
    if ( (unsigned int)sub_18010D1BC(Src, v2, (__int64)v7) )
    {
      v4 = v8;
      *(_DWORD *)(v3 + 48) = v10;
      *(_QWORD *)(v3 + 56) = __PAIR64__(v9, v4);
      v5 = sub_180003048(Src);
      *(_QWORD *)(v3 + 40) = v5;
      if ( !v5 )
      {
        sub_18010E10C((_QWORD *)v3);
        return 0LL;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 48) = 0;
      *(_QWORD *)(v3 + 56) = 0LL;
    }
  }
  return v3;
}
