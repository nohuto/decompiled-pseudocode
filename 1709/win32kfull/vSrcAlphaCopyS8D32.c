/*
 * XREFs of vSrcAlphaCopyS8D32 @ 0x1C000E0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall vSrcAlphaCopyS8D32(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  int v8; // edi
  _BYTE *result; // rax
  _BYTE *v10; // r11
  unsigned __int64 i; // rbx
  unsigned __int64 v12; // r10
  _DWORD *v13; // r9
  __int64 v14; // rcx

  v8 = a8;
  result = (_BYTE *)a2;
  v10 = (_BYTE *)(a2 + a1);
  for ( i = a4 + 4LL * a5; v8; --v8 )
  {
    v12 = (unsigned int)(a6 - a5);
    result = v10;
    v13 = (_DWORD *)i;
    if ( i > i + 4 * v12 )
      v12 = 0LL;
    if ( v12 )
    {
      do
      {
        v14 = (unsigned __int8)*result;
        if ( *result )
        {
          if ( (unsigned int)v14 >= 0x72 )
          {
            *v13 = 0xFFFFFF;
          }
          else
          {
            _mm_lfence();
            *v13 = alAlpha_255[BYTE2(off_1C0320100[v14])] | ((alAlpha_255[BYTE1(off_1C0320100[v14])] | (alAlpha_255[LOBYTE(off_1C0320100[v14])] << 8)) << 8);
          }
        }
        ++result;
        ++v13;
      }
      while ( result - v10 < v12 );
    }
    v10 += a3;
    i += a7;
  }
  return result;
}
