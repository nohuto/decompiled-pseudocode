/*
 * XREFs of sub_1800A2584 @ 0x1800A2584
 * Callers:
 *     sub_1800A272C @ 0x1800A272C (sub_1800A272C.c)
 *     sub_1800A28A4 @ 0x1800A28A4 (sub_1800A28A4.c)
 * Callees:
 *     sub_18009FCF4 @ 0x18009FCF4 (sub_18009FCF4.c)
 *     sub_1800A287C @ 0x1800A287C (sub_1800A287C.c)
 */

__int64 __fastcall sub_1800A2584(
        char a1,
        __int64 a2,
        int *a3,
        _DWORD *a4,
        _WORD **a5,
        int a6,
        __int64 a7,
        __int64 a8,
        _DWORD *a9)
{
  _WORD **v9; // rbx
  _WORD *v13; // rsi
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r12
  int v17; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // edx
  int v24; // ecx
  _WORD *v26; // rax
  char v27; // [rsp+60h] [rbp+8h] BYREF
  __int64 v28; // [rsp+68h] [rbp+10h]
  int v29; // [rsp+70h] [rbp+18h]

  v28 = a2;
  v9 = a5;
  v13 = *a5;
  v14 = -((a1 & 8) != 0);
  --*a4;
  v15 = *a3;
  v29 = v14;
  if ( v15 != -1 )
    sub_18009FCF4(v15, a7);
  v16 = a8 - 1;
  if ( (a1 & 0x10) != 0 )
    v16 = a8;
  v17 = a1 & 1;
  LODWORD(a5) = v17;
  while ( 1 )
  {
    if ( v17 )
    {
      if ( !a6-- )
        goto LABEL_31;
    }
    v19 = a7;
    ++*a4;
    v20 = sub_1800A287C(v19, 0LL);
    *a3 = v20;
    v21 = v20;
    if ( v20 == -1 )
      break;
    if ( (a1 & 0x10) == 0 && ((a1 & 0x20) == 0 || (unsigned int)(v20 - 9) <= 4 || v20 == 32) )
    {
      if ( (a1 & 0x40) == 0 )
        break;
      if ( v20 < 0 )
        break;
      v22 = v20 >> 3;
      if ( v21 < v21 >> 3 )
        break;
      v23 = v21 & 7;
      v24 = v29 ^ *(char *)(v22 + v28);
      if ( !_bittest(&v24, v23) )
        break;
    }
    if ( (a1 & 4) != 0 )
    {
      v13 = (_WORD *)((char *)v13 + 1);
    }
    else
    {
      if ( !v16 )
      {
        if ( (a1 & 2) != 0 )
          *v13 = 0;
        else
          *(_BYTE *)v13 = 0;
        return 0xFFFFFFFFLL;
      }
      if ( (a1 & 2) != 0 )
      {
        *(*v9)++ = (unsigned __int16)&v27;
      }
      else
      {
        *(_BYTE *)*v9 = *(_BYTE *)a3;
        *v9 = (_WORD *)((char *)*v9 + 1);
      }
      --v16;
    }
    v17 = (int)a5;
  }
  --*a4;
  if ( *a3 != -1 )
    sub_18009FCF4(*a3, a7);
LABEL_31:
  if ( v13 == *v9 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( (a1 & 0x10) == 0 )
    {
      v26 = *v9;
      if ( (a1 & 2) != 0 )
        *v26 = 0;
      else
        *(_BYTE *)v26 = 0;
    }
  }
  return 0LL;
}
