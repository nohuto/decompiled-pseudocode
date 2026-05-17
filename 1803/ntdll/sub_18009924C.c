/*
 * XREFs of sub_18009924C @ 0x18009924C
 * Callers:
 *     sub_180099480 @ 0x180099480 (sub_180099480.c)
 *     sub_1800996E8 @ 0x1800996E8 (sub_1800996E8.c)
 * Callees:
 *     sub_18009A10C @ 0x18009A10C (sub_18009A10C.c)
 *     sub_18009A150 @ 0x18009A150 (sub_18009A150.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_18009924C(
        char a1,
        __int64 a2,
        unsigned __int16 *a3,
        _DWORD *a4,
        void **a5,
        int a6,
        __int64 a7,
        unsigned __int64 Src,
        _DWORD *a9)
{
  unsigned __int16 *v11; // rsi
  _WORD *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // rbp
  int i; // ecx
  int v17; // eax
  unsigned __int16 v18; // ax
  char v19; // r9
  int v20; // ecx
  int v21; // esi
  __int64 v23; // rcx
  _WORD *v24; // rax
  int v25; // [rsp+60h] [rbp+8h]

  v11 = a3;
  v12 = *a5;
  v13 = -((a1 & 8) != 0);
  --*a4;
  v14 = *a3;
  v25 = v13;
  if ( (_WORD)v14 != 0xFFFF )
    sub_18009A150(v14, a7);
  v15 = Src - 1;
  if ( (a1 & 0x10) != 0 )
    v15 = Src;
  for ( i = a1 & 1; ; i = a1 & 1 )
  {
    if ( i && !a6 )
      goto LABEL_40;
    v17 = a6 - 1;
    if ( !i )
      v17 = a6;
    ++*a4;
    a6 = v17;
    v18 = sub_18009A10C(a7);
    *v11 = v18;
    if ( v18 == 0xFFFF )
      break;
    v19 = v18;
    if ( (a1 & 0x10) == 0 )
    {
      if ( (a1 & 0x20) == 0 || v18 >= 9u && v18 <= 0xDu || (v19 = v18, v18 == 32) )
      {
        if ( (a1 & 0x40) == 0 )
          break;
        if ( v18 < (unsigned __int16)(v18 >> 3) )
          break;
        v19 = v18;
        v20 = v25 ^ *(char *)((v18 >> 3) + a2);
        if ( !_bittest(&v20, v18 & 7) )
          break;
      }
    }
    if ( (a1 & 4) != 0 )
    {
      ++v12;
    }
    else
    {
      if ( !v15 )
        goto LABEL_34;
      if ( (a1 & 2) != 0 )
      {
        *(_WORD *)*a5 = v18;
        *a5 = (char *)*a5 + 2;
        --v15;
      }
      else
      {
        if ( v15 < dword_180156EF4 )
        {
          v21 = v19;
          LOBYTE(Src) = v19;
          if ( v19 > 0 && v19 > v15 || (unsigned int)v19 > 5 )
          {
LABEL_34:
            if ( (a1 & 2) != 0 )
              *v12 = 0;
            else
              *(_BYTE *)v12 = 0;
            return 0xFFFFFFFFLL;
          }
          memmove(*a5, &Src, v19);
        }
        else
        {
          *(_BYTE *)*a5 = v19;
          v21 = *(char *)*a5;
        }
        if ( v21 > 0 )
        {
          *a5 = (char *)*a5 + v21;
          v15 -= v21;
        }
        v11 = a3;
      }
    }
  }
  --*a4;
  v23 = *v11;
  if ( (_WORD)v23 != 0xFFFF )
    sub_18009A150(v23, a7);
LABEL_40:
  if ( v12 == *a5 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( (a1 & 0x10) == 0 )
    {
      v24 = *a5;
      if ( (a1 & 2) != 0 )
        *v24 = 0;
      else
        *(_BYTE *)v24 = 0;
    }
  }
  return 0LL;
}
