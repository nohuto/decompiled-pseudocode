/*
 * XREFs of sub_180095184 @ 0x180095184
 * Callers:
 *     _i64toa_s @ 0x1800950F0 (_i64toa_s.c)
 *     _ui64toa_s @ 0x180095150 (_ui64toa_s.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

__int64 __fastcall sub_180095184(unsigned __int64 a1, char *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned int v8; // ebx
  unsigned __int64 v9; // rcx
  char *v10; // rdi
  char *v11; // r8
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  char *v14; // r9
  _BYTE *v15; // rax
  char v16; // dl
  char v18; // cl

  if ( !a2 )
    goto LABEL_20;
  if ( !a3 )
  {
    v8 = 22;
LABEL_16:
    sub_18008B020();
    return v8;
  }
  *a2 = 0;
  v8 = 34;
  if ( a3 <= (unsigned __int64)(a5 != 0) + 1 )
    goto LABEL_16;
  if ( a4 - 2 <= 0x22 )
  {
    v9 = 0LL;
    v10 = a2;
    if ( a5 )
    {
      *a2 = 45;
      v10 = a2 + 1;
      v9 = 1LL;
      a1 = -(__int64)a1;
    }
    v11 = v10;
    v12 = a4;
    do
    {
      v13 = a1 % v12;
      v14 = v10;
      a1 /= v12;
      v15 = v10 + 1;
      if ( (unsigned int)v13 <= 9 )
        v16 = v13 + 48;
      else
        v16 = v13 + 87;
      ++v9;
      *v10 = v16;
      if ( !a1 )
        break;
      ++v10;
    }
    while ( v9 < a3 );
    if ( v9 >= a3 )
    {
      *a2 = 0;
      goto LABEL_16;
    }
    *v15 = 0;
    do
    {
      v18 = *v14;
      *v14-- = *v11;
      *v11++ = v18;
    }
    while ( v11 < v14 );
    return 0LL;
  }
  else
  {
LABEL_20:
    sub_18008B020();
    return 22LL;
  }
}
