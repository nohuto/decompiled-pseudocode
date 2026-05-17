/*
 * XREFs of sub_180088970 @ 0x180088970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180088A5C @ 0x180088A5C (sub_180088A5C.c)
 */

__int64 __fastcall sub_180088970(
        __int16 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  int v8; // r15d
  char *v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  char v12; // di
  __int64 (__fastcall *v13)(); // r12
  _WORD *v14; // rbx
  __int64 v15; // r13
  __int64 result; // rax
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF

  v8 = (int)a4;
  v9 = (char *)a4 + a5;
  v10 = a2 + a3;
  v11 = a2;
  v12 = 1;
  if ( a1 )
  {
    if ( a1 != 256 )
      return 3221225659LL;
    v13 = sub_180103280;
  }
  else
  {
    v13 = sub_180088CE0;
  }
  v14 = a4;
  if ( a2 >= v10 )
  {
LABEL_9:
    if ( v14 <= (_WORD *)v9 - 1 )
      *v14 = 0;
    *a7 = (_DWORD)v14 - v8;
    return v12 != 0 ? 0x117 : 0;
  }
  else
  {
    v15 = a8;
    while ( 1 )
    {
      result = sub_180088A5C(v13, v11, v10, v14, v9, &v17, v15);
      if ( (int)result < 0 )
        break;
      if ( !v12 || (v12 = 1, (_DWORD)result != 279) )
        v12 = 0;
      v11 += 4096LL;
      v14 = (_WORD *)((char *)v14 + v17);
      if ( v11 >= v10 )
        goto LABEL_9;
    }
  }
  return result;
}
