/*
 * XREFs of ReadString @ 0x1401905C4
 * Callers:
 *     ReadStringDelimited @ 0x140190780 (ReadStringDelimited.c)
 *     _input_s @ 0x14019093C (_input_s.c)
 * Callees:
 *     _inc @ 0x140190910 (_inc.c)
 *     _ungetc_nolock @ 0x1401921EC (_ungetc_nolock.c)
 */

__int64 __fastcall ReadString(
        char a1,
        __int64 a2,
        int *a3,
        _DWORD *a4,
        __int64 a5,
        unsigned int a6,
        FILE *File,
        __int64 a8,
        _DWORD *a9)
{
  _WORD **v9; // rdi
  int *v12; // r12
  _WORD *v13; // rsi
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r13
  int v17; // ecx
  __int64 v18; // rdx
  bool v19; // zf
  unsigned int v20; // eax
  FILE *v21; // rcx
  int v22; // eax
  int v23; // ecx
  _WORD *v24; // rax
  _WORD *v26; // rax
  char v27; // [rsp+50h] [rbp+8h] BYREF
  __int64 v28; // [rsp+58h] [rbp+10h]

  v28 = a2;
  v9 = (_WORD **)a5;
  v12 = a3;
  v13 = *(_WORD **)a5;
  v14 = -((a1 & 8) != 0);
  --*a4;
  v15 = *a3;
  LODWORD(a5) = v14;
  if ( v15 != -1 )
    ungetc_nolock(v15, File);
  v16 = a8 - 1;
  if ( (a1 & 0x10) != 0 )
    v16 = a8;
  v17 = a1 & 1;
  LODWORD(a8) = v17;
  while ( 1 )
  {
    v18 = a6;
    if ( v17 && !a6 )
      goto LABEL_33;
    v19 = v17 == 0;
    v20 = a6 - 1;
    v21 = File;
    if ( v19 )
      v20 = a6;
    ++*a4;
    a6 = v20;
    v22 = inc(v21, v18, a3, 0LL);
    *v12 = v22;
    if ( v22 == -1 )
      break;
    LOBYTE(a3) = v22;
    if ( (a1 & 0x10) == 0 )
    {
      if ( (a1 & 0x20) == 0 || v22 >= 9 && v22 <= 13 || (LOBYTE(a3) = v22, v22 == 32) )
      {
        if ( (a1 & 0x40) == 0 )
          break;
        if ( v22 < 0 )
          break;
        if ( v22 < v22 >> 3 )
          break;
        LOBYTE(a3) = v22;
        v23 = a5 ^ *(char *)((v22 >> 3) + v28);
        if ( !_bittest(&v23, v22 & 7) )
          break;
      }
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
      v24 = *v9;
      --v16;
      if ( (a1 & 2) != 0 )
      {
        *v24 = (unsigned __int16)&v27;
        ++*v9;
      }
      else
      {
        *(_BYTE *)v24 = (_BYTE)a3;
        *v9 = (_WORD *)((char *)*v9 + 1);
      }
    }
    v17 = a8;
  }
  --*a4;
  if ( *v12 != -1 )
    ungetc_nolock(*v12, File);
LABEL_33:
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
