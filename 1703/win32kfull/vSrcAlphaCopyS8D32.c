/*
 * XREFs of vSrcAlphaCopyS8D32 @ 0x1C00D4000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcAlphaCopyS8D32(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  __int64 v9; // r11
  _BYTE *v10; // rdi
  unsigned __int64 i; // rbx
  unsigned __int64 v12; // r10
  _BYTE *v13; // rax
  _DWORD *v14; // r9
  __int64 v15; // rcx

  v8 = a8;
  v9 = (unsigned int)(a6 - a5);
  v10 = (_BYTE *)(a1 + a2);
  for ( i = a4 + 4LL * a5; v8; --v8 )
  {
    v12 = (unsigned __int64)(4 * v9 + 3) >> 2;
    v13 = v10;
    v14 = (_DWORD *)i;
    if ( i > 4 * v9 + i )
      v12 = 0LL;
    if ( v12 )
    {
      do
      {
        v15 = (unsigned __int8)*v13;
        if ( *v13 )
        {
          if ( (unsigned int)v15 >= 0x72 )
          {
            *v14 = 0xFFFFFF;
          }
          else
          {
            _mm_lfence();
            *v14 = alAlpha_255[BYTE2(off_1C0324100[v15])] | ((alAlpha_255[BYTE1(off_1C0324100[v15])] | (alAlpha_255[LOBYTE(off_1C0324100[v15])] << 8)) << 8);
          }
        }
        ++v13;
        ++v14;
      }
      while ( v13 - v10 < v12 );
    }
    v10 += a3;
    i += a7;
  }
}
