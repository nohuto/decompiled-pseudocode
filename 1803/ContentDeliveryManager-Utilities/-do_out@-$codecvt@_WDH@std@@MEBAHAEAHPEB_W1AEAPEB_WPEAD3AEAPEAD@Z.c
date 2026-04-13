/*
 * XREFs of ?do_out@?$codecvt@_WDH@std@@MEBAHAEAHPEB_W1AEAPEB_WPEAD3AEAPEAD@Z @ 0x180049350
 * Callers:
 *     <none>
 * Callees:
 *     _Wcrtomb @ 0x1800A5C5C (_Wcrtomb.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800C10B9 (memcpy_0.c)
 */

__int64 __fastcall std::codecvt<wchar_t,char,int>::do_out(
        __int64 a1,
        mbstate_t *a2,
        wchar_t *a3,
        wchar_t *a4,
        wchar_t **a5,
        char *a6,
        char *a7,
        void **a8)
{
  __int64 v8; // rax
  char *v10; // rcx
  wchar_t *v12; // rdx
  BOOL v13; // ebx
  const _Cvtvec *v14; // r9
  wchar_t v15; // dx
  int v16; // eax
  unsigned int Wchar; // r14d
  int v18; // eax
  __int64 v19; // rbp
  char Src[8]; // [rsp+28h] [rbp-40h] BYREF

  v8 = a1;
  v10 = a6;
  *a5 = a3;
  *a8 = a6;
  v12 = *a5;
  v13 = *a5 != a4;
  if ( *a5 != a4 )
  {
    while ( v10 != a7 )
    {
      v14 = (const _Cvtvec *)(v8 + 16);
      v15 = *v12;
      if ( __mb_cur_max > a7 - v10 )
      {
        Wchar = a2->_Wchar;
        v18 = Wcrtomb(Src, v15, a2, v14);
        if ( v18 < 0 )
          return 2LL;
        v19 = v18;
        if ( a7 - (_BYTE *)*a8 < v18 )
        {
          a2->_Wchar = Wchar;
          return v13;
        }
        memcpy_0(*a8, Src, v18);
        ++*a5;
        *a8 = (char *)*a8 + v19;
      }
      else
      {
        v16 = Wcrtomb(v10, v15, a2, v14);
        if ( v16 < 0 )
          return 2LL;
        ++*a5;
        *a8 = (char *)*a8 + v16;
      }
      v12 = *a5;
      v13 = 0;
      v10 = (char *)*a8;
      if ( *a5 == a4 )
        return v13;
      v8 = a1;
    }
  }
  return v13;
}
