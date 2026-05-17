/*
 * XREFs of sub_18008F810 @ 0x18008F810
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800AA0B0 @ 0x1800AA0B0 (sub_1800AA0B0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18008F810(char *a1, int a2, unsigned __int16 *a3, unsigned int a4, int a5, int *a6)
{
  unsigned __int16 *v6; // rsi
  char *v7; // r15
  int v8; // edi
  char *v9; // rbp
  unsigned __int16 v10; // bx
  unsigned __int64 v11; // r13
  unsigned __int16 i; // r14
  unsigned int v13; // r9d
  int v14; // r8d
  unsigned int v15; // ecx
  unsigned int v16; // r14d
  int *v17; // rax
  unsigned int v19; // ecx
  size_t v20; // r8
  char *v21; // r14
  int v22; // [rsp+70h] [rbp+8h]
  int v23; // [rsp+78h] [rbp+10h] BYREF
  char v24; // [rsp+88h] [rbp+20h] BYREF

  v22 = (int)a1;
  v6 = a3;
  v7 = &a1[a2];
  v23 = 0;
  v8 = 0;
  v9 = a1;
  v10 = *a3;
  v11 = (unsigned __int64)a3 + a4;
  for ( i = *a3; ; i = v10 )
  {
    v16 = (i & 0xFFF) + 3;
    if ( (unsigned __int64)v6 + v16 > v11 )
    {
LABEL_27:
      v17 = a6;
LABEL_16:
      v8 = -1073741246;
      *v17 = (int)v6;
      return (unsigned int)v8;
    }
    if ( v10 < 0x8000u )
    {
      if ( v16 < 2 )
        goto LABEL_27;
      v19 = v16 - 2;
      v23 = v16 - 2;
      if ( &v9[v16 - 2] > v7 )
      {
        v19 = (_DWORD)v7 - (_DWORD)v9;
        v23 = (_DWORD)v7 - (_DWORD)v9;
      }
      if ( (unsigned __int64)v6 + v19 + 2 > v11 )
        goto LABEL_27;
      memmove(v9, v6 + 1, v19);
      goto LABEL_5;
    }
    v13 = (_DWORD)v6 + v16;
    v14 = (_DWORD)v6 + 2;
    if ( a5 )
      break;
    v8 = sub_1800AA0B0((_DWORD)v9, (_DWORD)v7, v14, v13, (__int64)&v23);
    if ( v8 < 0 )
      goto LABEL_26;
LABEL_5:
    v15 = v23;
LABEL_6:
    v6 = (unsigned __int16 *)((char *)v6 + v16);
    v9 += v15;
    if ( v9 == v7 || (unsigned __int64)v6 > v11 - 2 || (v10 = *v6) == 0 )
    {
LABEL_13:
      v17 = a6;
      if ( (unsigned __int64)v6 <= v11 )
      {
        *a6 = (_DWORD)v9 - v22;
        return (unsigned int)v8;
      }
      goto LABEL_16;
    }
    if ( v15 < 0x1000 )
    {
      v20 = (int)(4096 - v15);
      v21 = &v9[v20];
      if ( &v9[v20] >= v7 )
        goto LABEL_13;
      memset(v9, 0, v20);
      v9 = v21;
    }
  }
  v8 = sub_1800AA0B0((_DWORD)v9, (_DWORD)v7, v14, v13, (__int64)&v24);
  if ( v8 >= 0 )
  {
    v15 = a5;
    v23 = a5;
    goto LABEL_6;
  }
LABEL_26:
  *a6 = v23;
  return (unsigned int)v8;
}
