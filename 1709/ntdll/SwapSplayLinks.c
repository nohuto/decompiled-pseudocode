/*
 * XREFs of SwapSplayLinks @ 0x180069508
 * Callers:
 *     RtlDelete @ 0x1800693C0 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x180069460 (RtlDeleteNoSplay.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SwapSplayLinks(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r8
  _QWORD *v4; // r11
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *result; // rax
  _QWORD *v13; // rbx
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // r10

  v2 = a2;
  v3 = a1;
  if ( (_QWORD *)*a1 == a1 || (_QWORD *)*a2 == a1 )
  {
    v2 = a1;
    v3 = a2;
  }
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 == v2 )
  {
    v5 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
    {
      *v3 = v3;
    }
    else
    {
      v21 = 1LL;
      if ( (_QWORD *)v5[1] != v2 )
        v21 = 2LL;
      v5[v21] = v3;
      *v3 = *v2;
    }
    v6 = v3[1];
    v3[1] = v2[1];
    v7 = v2[2];
    v2[1] = v6;
    v8 = v3[2];
    v3[2] = v7;
    v2[2] = v8;
    if ( (_QWORD *)v3[1] == v3 )
      v3[1] = v2;
    else
      v3[2] = v2;
  }
  else
  {
    v13 = (_QWORD *)*v2;
    v14 = 1LL;
    if ( (_QWORD *)*v2 == v2 )
    {
      if ( (_QWORD *)v4[1] != v3 )
        v14 = 2LL;
      v4[v14] = v2;
      *v2 = *v3;
      *v3 = v3;
    }
    else
    {
      v18 = 1LL;
      if ( (_QWORD *)v4[1] != v3 )
        v18 = 2LL;
      if ( (_QWORD *)v13[1] != v2 )
        v14 = 2LL;
      v19 = v4[v18];
      v4[v18] = v13[v14];
      v13[v14] = v19;
      v20 = (_QWORD *)*v3;
      *v3 = *v2;
      *v2 = v20;
    }
    v15 = v3[1];
    v3[1] = v2[1];
    v16 = v2[2];
    v2[1] = v15;
    v17 = v3[2];
    v3[2] = v16;
    v2[2] = v17;
  }
  v9 = (_QWORD *)v3[1];
  if ( v9 )
    *v9 = v3;
  v10 = (_QWORD *)v3[2];
  if ( v10 )
    *v10 = v3;
  v11 = (_QWORD *)v2[1];
  if ( v11 )
    *v11 = v2;
  result = (_QWORD *)v2[2];
  if ( result )
    *result = v2;
  return result;
}
