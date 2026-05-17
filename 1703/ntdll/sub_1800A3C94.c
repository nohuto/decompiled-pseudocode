/*
 * XREFs of sub_1800A3C94 @ 0x1800A3C94
 * Callers:
 *     sub_1800A3EC8 @ 0x1800A3EC8 (sub_1800A3EC8.c)
 *     sub_1800A4118 @ 0x1800A4118 (sub_1800A4118.c)
 * Callees:
 *     sub_1800A4AD0 @ 0x1800A4AD0 (sub_1800A4AD0.c)
 *     sub_1800A4B20 @ 0x1800A4B20 (sub_1800A4B20.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_1800A3C94(
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
  _WORD *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  int v15; // esi
  unsigned __int64 v16; // rbp
  int v17; // eax
  unsigned __int16 v19; // ax
  int v20; // ecx
  int v21; // esi
  __int64 v22; // rax
  __int64 v24; // rcx
  _WORD *v25; // rax
  int v27; // [rsp+70h] [rbp+18h]

  v12 = *a5;
  v13 = -((a1 & 8) != 0);
  --*a4;
  v14 = *a3;
  v27 = v13;
  if ( (_WORD)v14 != 0xFFFF )
    sub_1800A4B20(v14, a7);
  v15 = a1 & 0x10;
  v16 = Src - 1;
  if ( (a1 & 0x10) != 0 )
    v16 = Src;
  v17 = a1 & 1;
  while ( 1 )
  {
    if ( v17 )
    {
      if ( !a6-- )
        goto LABEL_37;
    }
    ++*a4;
    v19 = sub_1800A4AD0(a7, 0LL);
    *a3 = v19;
    if ( v19 == 0xFFFF )
      break;
    if ( !v15 && ((a1 & 0x20) == 0 || (unsigned __int16)(v19 - 9) <= 4u || v19 == 32) )
    {
      if ( (a1 & 0x40) == 0 )
        break;
      if ( v19 < (unsigned __int16)(v19 >> 3) )
        break;
      v20 = v27 ^ *(char *)((v19 >> 3) + a2);
      if ( !_bittest(&v20, v19 & 7) )
        break;
    }
    if ( (a1 & 4) != 0 )
    {
      ++v12;
LABEL_30:
      v17 = a1 & 1;
    }
    else
    {
      if ( !v16 )
        goto LABEL_31;
      if ( (a1 & 2) != 0 )
      {
        *(_WORD *)*a5 = v19;
        *a5 = (char *)*a5 + 2;
        --v16;
        goto LABEL_30;
      }
      if ( v16 < dword_180155E94 )
      {
        LOBYTE(Src) = *(_BYTE *)a3;
        v21 = (char)Src;
        if ( (char)Src > 0 && (char)Src > v16 || (unsigned int)(char)Src > 5 )
        {
LABEL_31:
          if ( (a1 & 2) != 0 )
            *v12 = 0;
          else
            *(_BYTE *)v12 = 0;
          return 0xFFFFFFFFLL;
        }
        memmove(*a5, &Src, (char)Src);
      }
      else
      {
        *(_BYTE *)*a5 = *(_BYTE *)a3;
        v21 = *(char *)*a5;
      }
      v17 = a1 & 1;
      if ( v21 > 0 )
      {
        v22 = v21;
        *a5 = (char *)*a5 + v21;
        v15 = a1 & 0x10;
        v16 -= v22;
        goto LABEL_30;
      }
      v15 = a1 & 0x10;
    }
  }
  --*a4;
  v24 = *a3;
  if ( (_WORD)v24 != 0xFFFF )
    sub_1800A4B20(v24, a7);
LABEL_37:
  if ( v12 == *a5 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( !v15 )
    {
      v25 = *a5;
      if ( (a1 & 2) != 0 )
        *v25 = 0;
      else
        *(_BYTE *)v25 = 0;
    }
  }
  return 0LL;
}
