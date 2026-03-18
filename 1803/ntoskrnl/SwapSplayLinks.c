/*
 * XREFs of SwapSplayLinks @ 0x1400B0EA4
 * Callers:
 *     RtlDelete @ 0x140069CC0 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x1400B0DD0 (RtlDeleteNoSplay.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SwapSplayLinks(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r8
  _QWORD *v4; // rcx
  _QWORD *v5; // r11
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *result; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r10

  v2 = a1;
  v3 = a2;
  v4 = (_QWORD *)*a1;
  if ( v4 == v2 || (v5 = (_QWORD *)*a2, v6 = v4, (_QWORD *)*a2 == v2) )
  {
    v6 = (_QWORD *)*a2;
    v3 = v2;
    v2 = a2;
    v5 = v4;
  }
  if ( v6 == v3 )
  {
    if ( v5 == v3 )
    {
      v16 = v2;
    }
    else
    {
      v24 = 1LL;
      if ( (_QWORD *)v5[1] != v3 )
        v24 = 2LL;
      v5[v24] = v2;
      v16 = (_QWORD *)*v3;
    }
    *v2 = v16;
    v17 = v2[1];
    v2[1] = v3[1];
    v18 = v3[2];
    v3[1] = v17;
    v19 = v2[2];
    v2[2] = v18;
    v3[2] = v19;
    v12 = (_QWORD *)v2[1];
    if ( v12 == v2 )
    {
      v2[1] = v3;
      v12 = v3;
    }
    else
    {
      v2[2] = v3;
    }
  }
  else
  {
    v7 = (_QWORD *)v6[1];
    v8 = 1LL;
    if ( v5 == v3 )
    {
      if ( v7 != v2 )
        v8 = 2LL;
      v6[v8] = v3;
      *v3 = *v2;
      *v2 = v2;
    }
    else
    {
      v20 = 1LL;
      if ( v7 != v2 )
        v20 = 2LL;
      v21 = &v6[v20];
      if ( (_QWORD *)v5[1] != v3 )
        v8 = 2LL;
      v22 = *v21;
      *v21 = v5[v8];
      v5[v8] = v22;
      v23 = *v2;
      *v2 = *v3;
      *v3 = v23;
    }
    v9 = v2[1];
    v2[1] = v3[1];
    v10 = v3[2];
    v3[1] = v9;
    v11 = v2[2];
    v2[2] = v10;
    v3[2] = v11;
    v12 = (_QWORD *)v2[1];
  }
  if ( v12 )
    *v12 = v2;
  v13 = (_QWORD *)v2[2];
  if ( v13 )
    *v13 = v2;
  v14 = (_QWORD *)v3[1];
  if ( v14 )
    *v14 = v3;
  result = (_QWORD *)v3[2];
  if ( result )
    *result = v3;
  return result;
}
