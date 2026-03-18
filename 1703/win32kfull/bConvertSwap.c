/*
 * XREFs of bConvertSwap @ 0x1C0227164
 * Callers:
 *     bConvertExtras @ 0x1C0226D68 (bConvertExtras.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bConvertSwap(_WORD *a1, unsigned int *a2, unsigned __int64 a3, int a4)
{
  unsigned int v4; // eax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8

  v4 = *a2;
  if ( *a2 )
  {
    v6 = 0LL;
    v7 = (v4 >> 1) - 1;
    v8 = a3 + 2 * v7;
    v9 = (unsigned __int64)(2 * v7 + 1) >> 1;
    if ( a3 > v8 )
      v9 = 0LL;
    if ( v9 )
    {
      v10 = a3 - (_QWORD)a1;
      do
      {
        ++v6;
        *a1 = __ROR2__(*(_WORD *)((char *)a1 + v10), 8);
        ++a1;
      }
      while ( v6 < v9 );
    }
    *a1 = 0;
  }
  else
  {
    *a2 = (a4 & 0xFFFFFFFE) + 2;
  }
  return 1LL;
}
