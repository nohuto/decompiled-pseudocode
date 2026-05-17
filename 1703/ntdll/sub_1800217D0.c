/*
 * XREFs of sub_1800217D0 @ 0x1800217D0
 * Callers:
 *     sub_18001E250 @ 0x18001E250 (sub_18001E250.c)
 *     sub_18001F6A8 @ 0x18001F6A8 (sub_18001F6A8.c)
 *     sub_18001FD40 @ 0x18001FD40 (sub_18001FD40.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_1800217D0(__int64 a1, __int64 *a2, int a3)
{
  char v3; // bl
  __int64 v4; // r10
  _QWORD *v5; // r9
  int v6; // r8d
  __int64 **v7; // rax
  _QWORD *v8; // r8
  __int64 *v9; // r11
  __int64 **v10; // r10
  __int64 ***v11; // r9
  __int64 *v13; // rcx

  v3 = a3;
  if ( *((_BYTE *)a2 + 38) )
  {
    if ( *((_BYTE *)a2 + 38) == 1 )
    {
      v4 = a1 + 40;
    }
    else
    {
      if ( *((_BYTE *)a2 + 38) != 2 )
        return a2;
      v4 = 0LL;
    }
    v5 = 0LL;
  }
  else
  {
    v4 = a1 + 24;
    v5 = (_QWORD *)(a1 + 8);
  }
  if ( a3 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return a2;
      v7 = 0LL;
    }
    else
    {
      v7 = (__int64 **)(a1 + 40);
    }
    v8 = 0LL;
  }
  else
  {
    v7 = (__int64 **)(a1 + 24);
    v8 = (_QWORD *)(a1 + 8);
  }
  if ( v4 )
  {
    v9 = (__int64 *)*a2;
    v10 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v10 != a2 )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (__int64)v10;
    if ( v5 )
      --*v5;
  }
  *((_BYTE *)a2 + 38) = v3;
  if ( v7 )
  {
    v11 = (__int64 ***)v7[1];
    if ( *v11 != v7 )
      __fastfail(3u);
    *a2 = (__int64)v7;
    a2[1] = (__int64)v11;
    *v11 = (__int64 **)a2;
    v7[1] = a2;
    if ( v8 )
      ++*v8;
    a2 = 0LL;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 && *(_QWORD *)(a1 + 8) > 8uLL )
  {
    a2 = *v7;
    v13 = (__int64 *)**v7;
    if ( (__int64 **)(*v7)[1] != v7 || (__int64 *)v13[1] != a2 )
      __fastfail(3u);
    *v7 = v13;
    v13[1] = (__int64)v7;
    --*v8;
    *((_BYTE *)a2 + 38) = 2;
  }
  if ( a2 && *((_BYTE *)a2 + 38) == 2 )
    a2[2] = 0LL;
  return a2;
}
