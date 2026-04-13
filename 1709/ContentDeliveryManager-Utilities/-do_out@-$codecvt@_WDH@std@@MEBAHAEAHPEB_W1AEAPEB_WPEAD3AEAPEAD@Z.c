/*
 * XREFs of ?do_out@?$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z @ 0x180045660
 * Callers:
 *     <none>
 * Callees:
 *     _Wcrtomb @ 0x180098BB4 (_Wcrtomb.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800B4279 (memcpy_0.c)
 */

__int64 __fastcall std::codecvt<wchar_t,char,int>::do_out(
        __int64 a1,
        mbstate_t *a2,
        wchar_t *a3,
        wchar_t *a4,
        wchar_t **a5,
        void *a6,
        _BYTE *a7,
        void **a8)
{
  BOOL v10; // ebx
  const _Cvtvec *v11; // r9
  wchar_t v12; // dx
  int v13; // eax
  unsigned int Wchar; // r15d
  int v15; // eax
  __int64 v16; // rbp
  __int64 v18; // [rsp+20h] [rbp-58h]
  char Src[8]; // [rsp+28h] [rbp-50h] BYREF

  *a5 = a3;
  *a8 = a6;
  v18 = a1;
  v10 = *a5 != a4;
  if ( *a5 != a4 )
  {
    while ( *a8 != a7 )
    {
      v11 = (const _Cvtvec *)(a1 + 16);
      v12 = **a5;
      if ( __mb_cur_max > a7 - (_BYTE *)*a8 )
      {
        Wchar = a2->_Wchar;
        v15 = Wcrtomb(Src, v12, a2, v11);
        if ( v15 < 0 )
          return 2LL;
        v16 = v15;
        if ( a7 - (_BYTE *)*a8 < v15 )
        {
          a2->_Wchar = Wchar;
          return v10;
        }
        memcpy_0(*a8, Src, v15);
        ++*a5;
        *a8 = (char *)*a8 + v16;
      }
      else
      {
        v13 = Wcrtomb((char *)*a8, v12, a2, v11);
        if ( v13 < 0 )
          return 2LL;
        ++*a5;
        *a8 = (char *)*a8 + v13;
      }
      v10 = 0;
      if ( *a5 == a4 )
        return v10;
      a1 = v18;
    }
  }
  return v10;
}
