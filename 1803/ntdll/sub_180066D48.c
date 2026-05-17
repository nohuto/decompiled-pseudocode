/*
 * XREFs of sub_180066D48 @ 0x180066D48
 * Callers:
 *     RtlDelete @ 0x180066C00 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x180066CA0 (RtlDeleteNoSplay.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180066D48(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r8
  _QWORD *v4; // rcx
  _QWORD *v5; // r11
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *result; // rax
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r10

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
      v7 = v2;
    }
    else
    {
      v23 = 1LL;
      if ( (_QWORD *)v5[1] != v3 )
        v23 = 2LL;
      v5[v23] = v2;
      v7 = (_QWORD *)*v3;
    }
    *v2 = v7;
    v8 = v2[1];
    v2[1] = v3[1];
    v9 = v3[2];
    v3[1] = v8;
    v10 = v2[2];
    v2[2] = v9;
    v3[2] = v10;
    v11 = (_QWORD *)v2[1];
    if ( v11 == v2 )
    {
      v2[1] = v3;
      v11 = v3;
    }
    else
    {
      v2[2] = v3;
    }
  }
  else
  {
    v15 = 1LL;
    if ( v5 == v3 )
    {
      if ( (_QWORD *)v6[1] != v2 )
        v15 = 2LL;
      v6[v15] = v3;
      *v3 = *v2;
      *v2 = v2;
    }
    else
    {
      v19 = 1LL;
      if ( (_QWORD *)v6[1] != v2 )
        v19 = 2LL;
      v20 = &v6[v19];
      if ( (_QWORD *)v5[1] != v3 )
        v15 = 2LL;
      v21 = *v20;
      *v20 = v5[v15];
      v5[v15] = v21;
      v22 = *v2;
      *v2 = *v3;
      *v3 = v22;
    }
    v16 = v2[1];
    v2[1] = v3[1];
    v17 = v3[2];
    v3[1] = v16;
    v18 = v2[2];
    v2[2] = v17;
    v3[2] = v18;
    v11 = (_QWORD *)v2[1];
  }
  if ( v11 )
    *v11 = v2;
  v12 = (_QWORD *)v2[2];
  if ( v12 )
    *v12 = v2;
  v13 = (_QWORD *)v3[1];
  if ( v13 )
    *v13 = v3;
  result = (_QWORD *)v3[2];
  if ( result )
    *result = v3;
  return result;
}
