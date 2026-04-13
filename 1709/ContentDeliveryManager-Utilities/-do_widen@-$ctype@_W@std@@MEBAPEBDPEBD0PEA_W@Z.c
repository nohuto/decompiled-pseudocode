/*
 * XREFs of ?do_widen@?$ctype@_W@std@@MEBAPEBDPEBD0PEA_W@Z @ 0x180026970
 * Callers:
 *     <none>
 * Callees:
 *     _Mbrtowc @ 0x18009774C (_Mbrtowc.c)
 */

char *__fastcall std::ctype<wchar_t>::do_widen(__int64 a1, char *a2, unsigned __int64 a3, wchar_t *a4)
{
  unsigned __int64 v4; // rdi
  char *v6; // rbx
  __int64 v7; // rbp
  const _Cvtvec *v8; // rsi
  int v9; // eax
  wchar_t v10; // cx
  mbstate_t v12; // [rsp+30h] [rbp-38h] BYREF
  char v13; // [rsp+78h] [rbp+10h] BYREF
  wchar_t v14; // [rsp+80h] [rbp+18h] BYREF

  v4 = a3 - (_QWORD)a2;
  v6 = a2;
  v7 = 0LL;
  if ( (unsigned __int64)a2 > a3 )
    v4 = 0LL;
  if ( v4 )
  {
    v8 = (const _Cvtvec *)(a1 + 48);
    do
    {
      v13 = *v6;
      v12._Wchar = 0;
      v9 = Mbrtowc(&v14, &v13, 1uLL, &v12, v8);
      v10 = v14;
      if ( v9 < 0 )
        v10 = -1;
      ++v6;
      ++v7;
      *a4++ = v10;
    }
    while ( v7 != v4 );
  }
  return v6;
}
