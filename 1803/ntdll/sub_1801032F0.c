/*
 * XREFs of sub_1801032F0 @ 0x1801032F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009F9D0 @ 0x18009F9D0 (sub_18009F9D0.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_1801032F0(
        char *a1,
        size_t Size,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int *a7,
        _BYTE *a8)
{
  unsigned int v8; // esi
  __int64 v10; // r8
  int v12; // ebx
  __int16 v13; // ax
  unsigned __int64 v14; // r13
  char *v15; // r10
  __int16 v16; // cx
  __int16 *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r15
  _BYTE *v20; // r14
  int v21; // r12d
  __int64 v22; // rcx
  __int64 v23; // r9
  _BYTE *v24; // r8
  unsigned int v25; // eax
  _BYTE *v26; // rdx
  size_t v27; // r8
  bool v28; // zf
  unsigned int v29; // ecx
  char *v31; // [rsp+30h] [rbp-18h]
  int v32; // [rsp+90h] [rbp+48h]
  int v33; // [rsp+98h] [rbp+50h]
  int v34; // [rsp+A0h] [rbp+58h] BYREF
  int v35; // [rsp+A8h] [rbp+60h] BYREF

  v33 = Size;
  v32 = (int)a1;
  v8 = a5;
  v10 = (unsigned int)Size;
  v12 = 0;
  v13 = *(_WORD *)a3;
  v14 = a3 + a4;
  v15 = &a1[v10];
  v16 = *(_WORD *)a3;
  v31 = v15;
  while ( 1 )
  {
    v35 = 4096;
    v18 = (v16 & 0xFFFu) + 3;
    if ( v8 < 0x1000 )
      break;
    v17 = (__int16 *)(a3 + v18);
    if ( (unsigned __int64)v17 > v14 )
      goto LABEL_35;
    v8 -= 4096;
    a3 = (unsigned __int64)v17;
    if ( (unsigned __int64)v17 > v14 - 2 || (v13 = *v17) == 0 )
    {
      *a7 = 0;
      return (unsigned int)v12;
    }
    v16 = *v17;
  }
  v19 = (unsigned int)v18;
  v20 = a1;
  if ( a3 + v18 > v14 )
  {
LABEL_35:
    v12 = -1073741246;
    *a7 = a3;
    return (unsigned int)v12;
  }
  v21 = a6;
  while ( 1 )
  {
    v22 = 4096 - v8;
    if ( (unsigned int)v22 >= (unsigned int)v10 )
      v22 = (unsigned int)v10;
    a5 = v22;
    if ( v13 >= 0 )
    {
      v27 = (unsigned int)v22;
      if ( v22 + v8 + a3 + 2 > v14 )
        goto LABEL_35;
      v26 = (_BYTE *)(a3 + v8 + 2LL);
      goto LABEL_26;
    }
    if ( v8 || (_DWORD)v22 != 4096 )
      break;
    v23 = v19 + a3;
    v24 = (_BYTE *)(a3 + 2);
    if ( v21 )
    {
      v12 = sub_18009F9D0(v20, v15, v24, v23, &v34);
      if ( v12 < 0 )
        goto LABEL_19;
      a5 = v21;
    }
    else
    {
      v12 = sub_18009F9D0(v20, v15, v24, v23, &a5);
      if ( v12 < 0 )
      {
LABEL_19:
        v25 = a5;
LABEL_20:
        *a7 = v25;
        return (unsigned int)v12;
      }
    }
LABEL_27:
    v8 = 0;
    v20 += a5;
    v28 = v33 == a5;
    LODWORD(v10) = v33 - a5;
    v29 = (unsigned int)v20;
    v33 -= a5;
    if ( v28 )
      goto LABEL_33;
    a3 += v19;
    if ( a3 > v14 - 2 )
      goto LABEL_33;
    v13 = *(_WORD *)a3;
    if ( !*(_WORD *)a3 )
      goto LABEL_33;
    v35 = 4096;
    v19 = (v13 & 0xFFFu) + 3;
    if ( a3 + v19 > v14 )
      goto LABEL_35;
    v15 = v31;
  }
  v12 = sub_18009F9D0(a8, a8 + 4096, (_BYTE *)(a3 + 2), v19 + a3, &v35);
  if ( v12 < 0 )
  {
    v25 = v35;
    goto LABEL_20;
  }
  v26 = &a8[v8];
  if ( v35 - v8 >= a5 )
  {
    v27 = a5;
LABEL_26:
    memmove(v20, v26, v27);
    goto LABEL_27;
  }
  memmove(v20, v26, v35 - v8);
  v29 = v35 + (_DWORD)v20 - v8;
LABEL_33:
  *a7 = v29 - v32;
  return (unsigned int)v12;
}
