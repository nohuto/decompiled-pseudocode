/*
 * XREFs of ResourceEntryBinarySearch @ 0x180023CB4
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180023154 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrpCompareResourceNames_U @ 0x180023E2C (LdrpCompareResourceNames_U.c)
 *     wcsncmp @ 0x1800968B0 (wcsncmp.c)
 */

_QWORD *__fastcall ResourceEntryBinarySearch(
        unsigned __int16 a1,
        __int64 a2,
        unsigned __int64 a3,
        const wchar_t *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  unsigned __int16 v7; // si
  __int64 v8; // rbx
  unsigned int *v9; // r14
  __int64 v10; // rdi
  unsigned __int16 v11; // bp
  char v12; // si
  int *v13; // r12
  int v14; // ecx
  unsigned int *v15; // rdx
  bool v16; // zf
  __int64 v17; // rax
  _QWORD *result; // rax
  __int64 v19; // r13
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+70h] [rbp+18h]
  const wchar_t *v23; // [rsp+78h] [rbp+20h]

  v23 = a4;
  v7 = a1;
  v8 = 0LL;
  v9 = (unsigned int *)a3;
  v10 = 0LL;
  v22 = a3 - 8 + 8LL * a1;
  if ( a3 > v22 )
    goto LABEL_20;
  while ( 1 )
  {
    v11 = v7 >> 1;
    if ( !(v7 >> 1) )
      break;
    v12 = v7 & 1;
    if ( v12 )
      v13 = (int *)&v9[2 * v11];
    else
      v13 = (int *)&v9[2 * v11 - 2];
    if ( ((unsigned __int64)a4 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      if ( *v13 < 0 )
        goto LABEL_27;
      v14 = (_DWORD)a4 - *v13;
LABEL_8:
      if ( !v14 )
      {
        v17 = (unsigned int)v13[1];
LABEL_18:
        if ( (int)v17 >= 0 )
          v10 = a2 + v17;
        else
          v8 = a2 + (v17 & 0xFFFFFFFF7FFFFFFFuLL);
        goto LABEL_20;
      }
      if ( v14 < 0 )
      {
LABEL_10:
        v15 = (unsigned int *)(v13 - 2);
        v16 = v12 == 0;
        v22 = (unsigned __int64)(v13 - 2);
        v7 = v11;
        if ( v16 )
          v7 = v11 - 1;
        goto LABEL_12;
      }
      goto LABEL_27;
    }
    v19 = (unsigned int)*v13;
    if ( (int)v19 >= 0 )
      goto LABEL_10;
    LODWORD(v19) = v19 & 0x7FFFFFFF;
    v20 = wcsncmp(a4, (const wchar_t *)(v19 + a2 + 2), *(unsigned __int16 *)(v19 + a2));
    a4 = v23;
    v14 = v20;
    if ( v20 )
      goto LABEL_8;
    v21 = -1LL;
    do
      ++v21;
    while ( v23[v21] );
    if ( v21 == *(unsigned __int16 *)(v19 + a2) )
      goto LABEL_8;
LABEL_27:
    v15 = (unsigned int *)v22;
    v9 = (unsigned int *)(v13 + 2);
    v7 = v11;
LABEL_12:
    if ( v9 > v15 )
      goto LABEL_20;
  }
  if ( v7 && !(unsigned int)LdrpCompareResourceNames_U(a4, a2, v9) )
  {
    v17 = v9[1];
    goto LABEL_18;
  }
LABEL_20:
  *a5 = v8;
  result = a6;
  *a6 = v10;
  return result;
}
