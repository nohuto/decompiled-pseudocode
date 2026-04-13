/*
 * XREFs of ?do_in@?$codecvt@GDH@std@@MEBAHAEAHPEBD1AEAPEBDPEAG3AEAPEAG@Z @ 0x180045570
 * Callers:
 *     <none>
 * Callees:
 *     _Mbrtowc @ 0x18009774C (_Mbrtowc.c)
 */

__int64 __fastcall std::codecvt<unsigned short,char,int>::do_in(
        __int64 a1,
        mbstate_t *a2,
        const char *a3,
        const char *a4,
        const char **a5,
        wchar_t *a6,
        wchar_t *a7,
        wchar_t **a8)
{
  BOOL v11; // edi
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // eax

  *a5 = a3;
  *a8 = a6;
  v11 = *a5 != a4;
  if ( *a5 != a4 )
  {
    while ( *a8 != a7 )
    {
      v12 = Mbrtowc(*a8, *a5, a4 - *a5, a2, (const _Cvtvec *)(a1 + 16));
      v13 = v12;
      if ( v12 == -2 )
      {
        *a5 = a4;
        return v11;
      }
      if ( v12 == -1 )
        return 2LL;
      if ( !v12 && !**a8 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( (*a5)[v14] );
        v13 = v14 + 1;
      }
      v15 = 0;
      v11 = 0;
      if ( v13 != -3 )
        v15 = v13;
      *a5 += v15;
      ++*a8;
      if ( *a5 == a4 )
        return v11;
    }
  }
  return v11;
}
