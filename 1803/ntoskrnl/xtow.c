/*
 * XREFs of xtow @ 0x140188080
 * Callers:
 *     _itow @ 0x140188030 (_itow.c)
 *     _ultow @ 0x140188060 (_ultow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xtow(unsigned int a1, __int16 *a2, unsigned int a3, int a4)
{
  __int16 *v5; // r10
  unsigned int v6; // eax
  __int16 *v7; // r8
  _WORD *v8; // rcx
  unsigned int v9; // edx
  __int16 *v10; // r9
  __int16 v11; // dx
  __int64 result; // rax
  __int16 v13; // cx

  v5 = a2;
  v6 = a1;
  if ( a4 )
  {
    v5 = a2 + 1;
    *a2 = 45;
    v6 = -a1;
  }
  v7 = v5;
  do
  {
    v8 = v5 + 1;
    v9 = v6 % a3;
    v6 /= a3;
    v10 = v5;
    if ( v9 <= 9 )
      v11 = v9 + 48;
    else
      v11 = v9 + 87;
    *v5++ = v11;
  }
  while ( v6 );
  *v8 = 0;
  do
  {
    result = (unsigned __int16)*v7;
    v13 = *v10;
    *v10-- = result;
    *v7++ = v13;
  }
  while ( v7 < v10 );
  return result;
}
