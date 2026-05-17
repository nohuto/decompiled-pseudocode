/*
 * XREFs of sub_18009FF90 @ 0x18009FF90
 * Callers:
 *     _itoa_s @ 0x18009FDF0 (_itoa_s.c)
 *     _ltoa_s @ 0x18009FE20 (_ltoa_s.c)
 *     _ultoa_s @ 0x18009FE70 (_ultoa_s.c)
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 */

__int64 __fastcall sub_18009FF90(unsigned int a1, char *a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned int v9; // ebx
  unsigned __int64 v10; // r9
  char *v11; // rcx
  char *v12; // r8
  int v13; // eax
  unsigned int v14; // edx
  char v15; // dl
  char *v17; // rdx
  char v18; // cl

  if ( !a2 )
    goto LABEL_20;
  if ( !a3 )
  {
    v9 = 22;
LABEL_16:
    sub_180095DE0();
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
      *a2 = 45;
      v11 = a2 + 1;
      v10 = 1LL;
      a1 = -a1;
    }
    v12 = v11;
    do
    {
      v14 = a1 % a4;
      v13 = a1 / a4;
      a1 /= a4;
      if ( v14 <= 9 )
        v15 = v14 + 48;
      else
        v15 = v14 + 87;
      *v11 = v15;
      ++v10;
      ++v11;
    }
    while ( v13 && v10 < a3 );
    if ( v10 >= a3 )
    {
      *a2 = 0;
      goto LABEL_16;
    }
    *v11 = 0;
    v17 = v11 - 1;
    do
    {
      v18 = *v17;
      *v17-- = *v12;
      *v12++ = v18;
    }
    while ( v12 < v17 );
    return 0LL;
  }
  else
  {
LABEL_20:
    sub_180095DE0();
    return 22LL;
  }
}
