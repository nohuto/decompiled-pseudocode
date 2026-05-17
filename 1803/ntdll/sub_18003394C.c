/*
 * XREFs of sub_18003394C @ 0x18003394C
 * Callers:
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 * Callees:
 *     sub_18009A1F4 @ 0x18009A1F4 (sub_18009A1F4.c)
 */

char __fastcall sub_18003394C(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int16 v11; // di
  __int64 v13; // rbp
  unsigned __int64 v14; // r8
  unsigned __int16 v15; // r12
  char v16; // di
  unsigned __int64 v17; // r13
  int v18; // eax
  bool v19; // zf
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // [rsp+78h] [rbp+10h]
  char v24; // [rsp+80h] [rbp+18h] BYREF

  v23 = a2;
  v8 = 0LL;
  v9 = a5;
  v11 = a3;
  v13 = 0LL;
  *a7 = 0LL;
  v14 = v9 - 8 + 8LL * a3;
  a5 = v14;
  *a8 = 0LL;
  while ( 1 )
  {
    if ( v9 > v14 )
      goto LABEL_14;
    v15 = v11 >> 1;
    if ( !(v11 >> 1) )
      break;
    v16 = v11 & 1;
    v17 = v9 + 8LL * v15;
    if ( !v16 )
      v17 -= 8LL;
    v18 = sub_18009A1F4(a1, a2, a6, a4, v17, &v24);
    if ( !v24 )
      return 0;
    if ( !v18 )
    {
      v21 = *(unsigned int *)(v17 + 4);
      goto LABEL_23;
    }
    if ( v18 >= 0 )
    {
      v14 = a5;
      v9 = v17 + 8;
      v11 = v15;
    }
    else
    {
      v14 = v17 - 8;
      v19 = v16 == 0;
      a5 = v17 - 8;
      v11 = v15;
      if ( v19 )
        v11 = v15 - 1;
    }
    a2 = v23;
  }
  if ( !v11 )
    goto LABEL_14;
  v22 = sub_18009A1F4(a1, a2, a6, a4, v9, &v24);
  if ( v24 )
  {
    if ( v22 )
      goto LABEL_14;
    v21 = *(unsigned int *)(v9 + 4);
LABEL_23:
    if ( (int)v21 < 0 )
    {
      LODWORD(v21) = v21 & 0x7FFFFFFF;
      v8 = v21 + a4;
    }
    else
    {
      v13 = v21 + a4;
    }
    if ( v21 + a4 <= (a1 & 0xFFFFFFFFFFFFFFFCuLL) + v23 )
    {
LABEL_14:
      *a7 = v8;
      *a8 = v13;
      return 1;
    }
  }
  return 0;
}
