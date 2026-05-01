/*
 * XREFs of ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1801C5ECC
 * Callers:
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x1801C2E50 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x1801C0350 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 */

_OWORD *__fastcall std::basic_stringbuf<unsigned short>::str(__int64 a1, _OWORD *a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rbx
  void *v6; // rax
  unsigned __int64 v7; // r8
  __int128 v8; // xmm1
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int128 v11; // xmm0
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __m128i si128; // [rsp+30h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 || !std::basic_streambuf<unsigned short>::pptr(a1) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 || !std::basic_streambuf<unsigned short>::gptr(a1) )
    {
      v8 = _xmm;
      LOWORD(v13) = 0;
      goto LABEL_11;
    }
    v9 = std::basic_streambuf<unsigned short>::eback(a1);
    v10 = (std::basic_streambuf<unsigned short>::egptr(a1) - v9) >> 1;
    v6 = (void *)std::basic_streambuf<unsigned short>::eback(a1);
    v7 = v10;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 104);
    if ( v4 < std::basic_streambuf<unsigned short>::pptr(a1) )
      v4 = std::basic_streambuf<unsigned short>::pptr(a1);
    v5 = (__int64)(v4 - std::basic_streambuf<unsigned short>::pbase(a1)) >> 1;
    v6 = (void *)std::basic_streambuf<unsigned short>::pbase(a1);
    v7 = v5;
  }
  std::wstring::wstring((__int64)&v13, v6, v7);
  v8 = (__int128)si128;
LABEL_11:
  v11 = v13;
  LOWORD(v13) = 0;
  *a2 = v11;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  a2[1] = v8;
  std::wstring::_Tidy_deallocate((__int64)&v13);
  return a2;
}
