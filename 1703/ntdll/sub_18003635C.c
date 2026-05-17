/*
 * XREFs of sub_18003635C @ 0x18003635C
 * Callers:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 * Callees:
 *     sub_1800364D8 @ 0x1800364D8 (sub_1800364D8.c)
 *     wcsncmp @ 0x18009BB40 (wcsncmp.c)
 */

_QWORD *__fastcall sub_18003635C(
        unsigned __int16 a1,
        __int64 a2,
        unsigned __int64 a3,
        const wchar_t *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  unsigned __int16 v6; // di
  __int64 v7; // rbx
  unsigned int *v8; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  bool i; // cc
  unsigned __int16 v13; // bp
  char v14; // di
  __int64 v15; // rax
  unsigned int *v16; // r12
  int v17; // ecx
  bool v18; // zf
  __int64 v19; // rax
  _QWORD *result; // rax
  __int64 v21; // r13
  int v22; // eax
  __int64 v23; // rdx
  unsigned int *v24; // [rsp+70h] [rbp+18h]
  const wchar_t *v25; // [rsp+78h] [rbp+20h]

  v25 = a4;
  v6 = a1;
  v7 = 0LL;
  v8 = (unsigned int *)a3;
  v10 = 0LL;
  v11 = a3 - 8 + 8LL * a1;
  v24 = (unsigned int *)v11;
  for ( i = a3 <= v11; ; i = (unsigned __int64)v8 <= v11 )
  {
    if ( !i )
      goto LABEL_21;
    v13 = v6 >> 1;
    if ( !(v6 >> 1) )
      break;
    v14 = v6 & 1;
    if ( v14 )
      v15 = v13;
    else
      v15 = v13 - 1;
    v16 = &v8[2 * v15];
    if ( ((unsigned __int64)a4 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v21 = *v16;
      if ( (unsigned int)v21 < 0x80000000 )
        goto LABEL_11;
      LODWORD(v21) = v21 & 0x7FFFFFFF;
      v22 = wcsncmp(a4, (const wchar_t *)(v21 + a2 + 2), *(unsigned __int16 *)(v21 + a2));
      a4 = v25;
      v17 = v22;
      if ( !v22 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( v25[v23] );
        if ( v23 != *(unsigned __int16 *)(v21 + a2) )
          goto LABEL_13;
      }
    }
    else
    {
      if ( *v16 >= 0x80000000 )
        goto LABEL_14;
      v17 = (_DWORD)a4 - *v16;
    }
    if ( !v17 )
    {
      v19 = v16[1];
LABEL_19:
      if ( (unsigned int)v19 < 0x80000000 )
        v10 = a2 + v19;
      else
        v7 = a2 + (v19 & 0xFFFFFFFF7FFFFFFFuLL);
      goto LABEL_21;
    }
    if ( v17 >= 0 )
    {
LABEL_13:
      v11 = (unsigned __int64)v24;
LABEL_14:
      v8 = v16 + 2;
      v6 = v13;
      continue;
    }
LABEL_11:
    v11 = (unsigned __int64)(v16 - 2);
    v18 = v14 == 0;
    v24 = v16 - 2;
    v6 = v13;
    if ( v18 )
      v6 = v13 - 1;
  }
  if ( v6 && !(unsigned int)sub_1800364D8(a4, a2, v8) )
  {
    v19 = v8[1];
    goto LABEL_19;
  }
LABEL_21:
  *a5 = v7;
  result = a6;
  *a6 = v10;
  return result;
}
