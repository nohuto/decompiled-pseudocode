/*
 * XREFs of sub_1800955AC @ 0x1800955AC
 * Callers:
 *     _ltow_s @ 0x180095410 (_ltow_s.c)
 *     _ultow_s @ 0x180095460 (_ultow_s.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

__int64 __fastcall sub_1800955AC(unsigned int a1, __int16 *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned int v9; // ebx
  unsigned __int64 v10; // rcx
  __int16 *v11; // rdi
  __int16 *v12; // r8
  unsigned int v13; // edx
  __int16 *v14; // r9
  _WORD *v15; // rax
  __int16 v16; // dx
  __int16 v18; // cx

  if ( !a2 )
    goto LABEL_20;
  if ( !a3 )
  {
    v9 = 22;
LABEL_16:
    sub_18008B020();
    return v9;
  }
  *a2 = 0;
  v9 = 34;
  if ( a3 <= (unsigned __int64)(a5 != 0) + 1 )
    goto LABEL_16;
  if ( a4 - 2 <= 0x22 )
  {
    v10 = 0LL;
    v11 = a2;
    if ( a5 )
    {
      a1 = -a1;
      *a2 = 45;
      v11 = a2 + 1;
      v10 = 1LL;
    }
    v12 = v11;
    do
    {
      v13 = a1 % a4;
      v14 = v11;
      a1 /= a4;
      v15 = v11 + 1;
      if ( v13 <= 9 )
        v16 = v13 + 48;
      else
        v16 = v13 + 87;
      ++v10;
      *v11 = v16;
      if ( !a1 )
        break;
      ++v11;
    }
    while ( v10 < a3 );
    if ( v10 >= a3 )
    {
      *a2 = 0;
      goto LABEL_16;
    }
    *v15 = 0;
    do
    {
      v18 = *v14;
      *v14-- = *v12;
      *v12++ = v18;
    }
    while ( v12 < v14 );
    return 0LL;
  }
  else
  {
LABEL_20:
    sub_18008B020();
    return 22LL;
  }
}
