/*
 * XREFs of ?_Tidy@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IEAAXXZ @ 0x1801C54F0
 * Callers:
 *     ??1?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1801C07B0 (--1-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::_Tidy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  char *v4; // rbx
  __int64 v5; // rax
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    if ( std::basic_streambuf<unsigned short>::pptr() )
      v2 = std::basic_streambuf<unsigned short>::epptr(a1);
    else
      v2 = std::basic_streambuf<unsigned short>::egptr(a1);
    v3 = v2;
    v4 = (char *)std::basic_streambuf<unsigned short>::eback(a1);
    v5 = std::basic_streambuf<unsigned short>::eback(a1);
    std::_Deallocate(v4, (v3 - v5) >> 1, 2uLL);
  }
  std::basic_streambuf<unsigned short>::setg(a1, 0LL, 0LL, 0LL);
  result = std::basic_streambuf<unsigned short>::setp(a1, 0LL, 0LL);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) &= ~1u;
  return result;
}
