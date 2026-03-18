/*
 * XREFs of ReadString @ 0x140171DE8
 * Callers:
 *     ReadStringDelimited @ 0x140171F94 (ReadStringDelimited.c)
 *     _input_s @ 0x140172114 (_input_s.c)
 * Callees:
 *     _inc @ 0x1401720E8 (_inc.c)
 *     _ungetc_nolock @ 0x140173870 (_ungetc_nolock.c)
 */

__int64 __fastcall ReadString(
        char a1,
        __int64 a2,
        int *a3,
        _DWORD *a4,
        _WORD **a5,
        int a6,
        FILE *File,
        __int64 a8,
        _DWORD *a9)
{
  _WORD **v9; // rbx
  _WORD *v13; // rsi
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r12
  int v17; // eax
  FILE *v19; // rcx
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
    ungetc_nolock(v15, File);
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
    v19 = File;
    ++*a4;
    v20 = inc(v19, 0LL);
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
    ungetc_nolock(*a3, File);
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
