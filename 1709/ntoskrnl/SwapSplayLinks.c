/*
 * XREFs of SwapSplayLinks @ 0x1401067F8
 * Callers:
 *     RtlDeleteNoSplay @ 0x1401052A0 (RtlDeleteNoSplay.c)
 *     RtlDelete @ 0x140106520 (RtlDelete.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SwapSplayLinks(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r8
  _QWORD *v4; // r11
  _QWORD *v5; // rbx
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *result; // rax
  _QWORD *v14; // rcx
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
    v14 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
    {
      *v3 = v3;
    }
    else
    {
      v21 = 1LL;
      if ( (_QWORD *)v14[1] != v2 )
        v21 = 2LL;
      v14[v21] = v3;
      *v3 = *v2;
    }
    v15 = v3[1];
    v3[1] = v2[1];
    v16 = v2[2];
    v2[1] = v15;
    v17 = v3[2];
    v3[2] = v16;
    v2[2] = v17;
    if ( (_QWORD *)v3[1] == v3 )
      v3[1] = v2;
    else
      v3[2] = v2;
  }
  else
  {
    v5 = (_QWORD *)*v2;
    v6 = 1LL;
    if ( (_QWORD *)*v2 == v2 )
    {
      if ( (_QWORD *)v4[1] != v3 )
        v6 = 2LL;
      v4[v6] = v2;
      *v2 = *v3;
      *v3 = v3;
    }
    else
    {
      v18 = 1LL;
      if ( (_QWORD *)v4[1] != v3 )
        v18 = 2LL;
      if ( (_QWORD *)v5[1] != v2 )
        v6 = 2LL;
      v19 = v4[v18];
      v4[v18] = v5[v6];
      v5[v6] = v19;
      v20 = (_QWORD *)*v3;
      *v3 = *v2;
      *v2 = v20;
    }
    v7 = v3[1];
    v3[1] = v2[1];
    v8 = v2[2];
    v2[1] = v7;
    v9 = v3[2];
    v3[2] = v8;
    v2[2] = v9;
  }
  v10 = (_QWORD *)v3[1];
  if ( v10 )
    *v10 = v3;
  v11 = (_QWORD *)v3[2];
  if ( v11 )
    *v11 = v3;
  v12 = (_QWORD *)v2[1];
  if ( v12 )
    *v12 = v2;
  result = (_QWORD *)v2[2];
  if ( result )
    *result = v2;
  return result;
}
