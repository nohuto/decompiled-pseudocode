/*
 * XREFs of sub_180103030 @ 0x180103030
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800AA0B0 @ 0x1800AA0B0 (sub_1800AA0B0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180103030(
        char *a1,
        unsigned int a2,
        _WORD *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int *a7,
        _BYTE *a8)
{
  unsigned __int16 v8; // ax
  unsigned int v9; // edi
  unsigned int v10; // esi
  int v11; // ebx
  __int64 v12; // r10
  unsigned __int64 v14; // r15
  char *v15; // r11
  unsigned __int16 v16; // cx
  _WORD *v17; // rcx
  __int64 v18; // rcx
  _BYTE *v19; // rdi
  _WORD *v20; // r14
  _BYTE *v21; // r13
  int v22; // r12d
  unsigned int v23; // edx
  _BYTE *v24; // r8
  unsigned int v25; // eax
  _BYTE *v26; // rdx
  size_t v27; // r8
  unsigned int v28; // r9d
  bool v29; // zf
  char *v31; // [rsp+30h] [rbp-18h]
  int v32; // [rsp+90h] [rbp+48h]
  unsigned int v33; // [rsp+98h] [rbp+50h]
  int v34; // [rsp+A0h] [rbp+58h] BYREF
  int v35; // [rsp+A8h] [rbp+60h] BYREF

  v33 = a2;
  v32 = (int)a1;
  v8 = *a3;
  v9 = 0;
  v10 = a5;
  v11 = 0;
  v12 = a2;
  v14 = (unsigned __int64)a3 + a4;
  v15 = &a1[v12];
  v16 = *a3;
  v31 = v15;
  while ( 1 )
  {
    v35 = 4096;
    v18 = (v16 & 0xFFFu) + 3;
    if ( v10 < 0x1000 )
      break;
    v17 = (_WORD *)((char *)a3 + v18);
    if ( (unsigned __int64)v17 > v14 )
      goto LABEL_35;
    v10 -= 4096;
    a3 = v17;
    if ( (unsigned __int64)v17 > v14 - 2 )
      goto LABEL_33;
    v8 = *v17;
    if ( !*v17 )
      goto LABEL_33;
    v16 = *v17;
  }
  v19 = a1;
  v20 = (_WORD *)((char *)a3 + (unsigned int)v18);
  if ( (unsigned __int64)v20 > v14 )
  {
LABEL_35:
    v11 = -1073741246;
    *a7 = (unsigned int)a3;
    return (unsigned int)v11;
  }
  v21 = a8;
  v22 = a6;
  while ( 1 )
  {
    v23 = v12;
    if ( 4096 - v10 < (unsigned int)v12 )
      v23 = 4096 - v10;
    a5 = v23;
    if ( v8 < 0x8000u )
    {
      v28 = v23;
      if ( (unsigned __int64)a3 + v10 + (unsigned __int64)v23 + 2 > v14 )
        goto LABEL_35;
      v26 = (char *)a3 + v10 + 2;
      v27 = v28;
      goto LABEL_25;
    }
    if ( v10 || v23 != 4096 )
      break;
    v24 = a3 + 1;
    if ( v22 )
    {
      v11 = sub_1800AA0B0(v19, v15, v24, (__int64)v20, &v34);
      if ( v11 < 0 )
        goto LABEL_18;
      a5 = v22;
    }
    else
    {
      v11 = sub_1800AA0B0(v19, v15, v24, (__int64)v20, &a5);
      if ( v11 < 0 )
      {
LABEL_18:
        v25 = a5;
LABEL_19:
        *a7 = v25;
        return (unsigned int)v11;
      }
    }
LABEL_26:
    v10 = 0;
    v19 += a5;
    v29 = v33 == a5;
    LODWORD(v12) = v33 - a5;
    v33 -= a5;
    if ( v29 )
      goto LABEL_32;
    a3 = v20;
    if ( (unsigned __int64)v20 > v14 - 2 )
      goto LABEL_32;
    v8 = *v20;
    if ( !*v20 )
      goto LABEL_32;
    v35 = 4096;
    v20 = (_WORD *)((char *)v20 + (v8 & 0xFFFu) + 3);
    if ( (unsigned __int64)v20 > v14 )
      goto LABEL_35;
    v15 = v31;
  }
  v11 = sub_1800AA0B0(v21, v21 + 4096, (_BYTE *)a3 + 2, (__int64)v20, &v35);
  if ( v11 < 0 )
  {
    v25 = v35;
    goto LABEL_19;
  }
  v26 = &v21[v10];
  if ( v35 - v10 >= a5 )
  {
    v27 = a5;
LABEL_25:
    memmove(v19, v26, v27);
    goto LABEL_26;
  }
  memmove(v19, v26, v35 - v10);
  LODWORD(v19) = v35 - v10 + (_DWORD)v19;
LABEL_32:
  v9 = (_DWORD)v19 - v32;
LABEL_33:
  *a7 = v9;
  return (unsigned int)v11;
}
