/*
 * XREFs of ReadString_0 @ 0x140191304
 * Callers:
 *     ReadStringDelimited_0 @ 0x14019153C (ReadStringDelimited_0.c)
 *     _winput_s @ 0x1401917BC (_winput_s.c)
 * Callees:
 *     _fgetwc_nolock @ 0x140192280 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x1401922C8 (_ungetwc_nolock.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall ReadString_0(
        char a1,
        __int64 a2,
        wint_t *a3,
        _DWORD *a4,
        void **a5,
        int a6,
        FILE *File,
        unsigned __int64 Src,
        _DWORD *a9)
{
  wint_t *v11; // rsi
  _WORD *v12; // r14
  unsigned __int64 v13; // rbp
  int i; // ecx
  int v15; // eax
  wint_t v16; // ax
  char v17; // r9
  int v18; // ecx
  int v19; // esi
  _WORD *v21; // rax
  int v22; // [rsp+60h] [rbp+8h]

  v11 = a3;
  v12 = *a5;
  --*a4;
  v22 = -((a1 & 8) != 0);
  if ( *a3 != 0xFFFF )
    ungetwc_nolock(*a3, File);
  v13 = Src - 1;
  if ( (a1 & 0x10) != 0 )
    v13 = Src;
  for ( i = a1 & 1; ; i = a1 & 1 )
  {
    if ( i && !a6 )
      goto LABEL_40;
    v15 = a6 - 1;
    if ( !i )
      v15 = a6;
    ++*a4;
    a6 = v15;
    v16 = fgetwc_nolock(File);
    *v11 = v16;
    if ( v16 == 0xFFFF )
      break;
    v17 = v16;
    if ( (a1 & 0x10) == 0 )
    {
      if ( (a1 & 0x20) == 0 || v16 >= 9u && v16 <= 0xDu || (v17 = v16, v16 == 32) )
      {
        if ( (a1 & 0x40) == 0 )
          break;
        if ( v16 < (unsigned __int16)(v16 >> 3) )
          break;
        v17 = v16;
        v18 = v22 ^ *(char *)((v16 >> 3) + a2);
        if ( !_bittest(&v18, v16 & 7) )
          break;
      }
    }
    if ( (a1 & 4) != 0 )
    {
      ++v12;
    }
    else
    {
      if ( !v13 )
        goto LABEL_34;
      if ( (a1 & 2) != 0 )
      {
        *(_WORD *)*a5 = v16;
        *a5 = (char *)*a5 + 2;
        --v13;
      }
      else
      {
        if ( v13 < _mb_cur_max )
        {
          v19 = v17;
          LOBYTE(Src) = v17;
          if ( v17 > 0 && v17 > v13 || (unsigned int)v17 > 5 )
          {
LABEL_34:
            if ( (a1 & 2) != 0 )
              *v12 = 0;
            else
              *(_BYTE *)v12 = 0;
            return 0xFFFFFFFFLL;
          }
          memmove(*a5, &Src, v17);
        }
        else
        {
          *(_BYTE *)*a5 = v17;
          v19 = *(char *)*a5;
        }
        if ( v19 > 0 )
        {
          *a5 = (char *)*a5 + v19;
          v13 -= v19;
        }
        v11 = a3;
      }
    }
  }
  --*a4;
  if ( *v11 != 0xFFFF )
    ungetwc_nolock(*v11, File);
LABEL_40:
  if ( v12 == *a5 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a9;
    if ( (a1 & 0x10) == 0 )
    {
      v21 = *a5;
      if ( (a1 & 2) != 0 )
        *v21 = 0;
      else
        *(_BYTE *)v21 = 0;
    }
  }
  return 0LL;
}
