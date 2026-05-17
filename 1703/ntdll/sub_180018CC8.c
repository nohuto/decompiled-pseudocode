/*
 * XREFs of sub_180018CC8 @ 0x180018CC8
 * Callers:
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 *     sub_180018A00 @ 0x180018A00 (sub_180018A00.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_180018CC8(__int64 **a1, __int64 *a2)
{
  __int64 *v2; // r8
  __int64 **v3; // rax
  __int64 **v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rax
  __int64 *v7; // r9
  __int64 *v9; // rax
  __int64 *v10; // rdx
  __int64 **v11; // rcx
  __int64 *v12; // rcx
  __int64 *v14; // r10
  __int64 **v15; // rax
  __int64 **v16; // rax
  __int64 v17; // r10

  if ( a2 != *a1 )
  {
    v2 = (__int64 *)*a2;
    v3 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v3 != a2 )
      __fastfail(3u);
    *v3 = v2;
    v2[1] = (__int64)v3;
    v4 = (__int64 **)(a2 + 2);
    a2[1] = (__int64)a2;
    *a2 = (__int64)a2;
    v5 = a2[2];
    v6 = *a1;
    if ( *(__int64 **)(v5 + 8) != a2 + 2 )
      __fastfail(3u);
    *v6 = v5;
    v6[1] = (__int64)v4;
    *(_QWORD *)(v5 + 8) = v6;
    *v4 = v6;
    *a1 = a2;
  }
  (*a1)[4] = 0LL;
  v7 = *a1;
  if ( *a1 )
  {
    v9 = v7 + 2;
    v10 = (__int64 *)v7[2];
    if ( v10 == v7 + 2 )
    {
      *a1 = 0LL;
    }
    else
    {
      v11 = (__int64 **)v7[3];
      if ( (__int64 *)v10[1] != v9 || *v11 != v9 )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = (__int64)v11;
      v7[3] = (__int64)(v7 + 2);
      *v9 = (__int64)v9;
      while ( 1 )
      {
        v12 = (__int64 *)*v10;
        if ( (__int64 *)*v10 == v10 )
          break;
        if ( v12[4] < v10[4] )
        {
          v12 = v10;
          v10 = (__int64 *)*v10;
        }
        v14 = (__int64 *)*v12;
        v15 = (__int64 **)v12[1];
        if ( *(__int64 **)(*v12 + 8) != v12 || *v15 != v12 )
          __fastfail(3u);
        *v15 = v14;
        v14[1] = (__int64)v15;
        v16 = (__int64 **)(v10 + 2);
        v17 = v10[2];
        if ( *(__int64 **)(v17 + 8) != v10 + 2 )
          __fastfail(3u);
        *v12 = v17;
        v12[1] = (__int64)v16;
        *(_QWORD *)(v17 + 8) = v12;
        *v16 = v12;
        v10 = (__int64 *)*v10;
      }
      *a1 = v10;
    }
  }
  return v7;
}
