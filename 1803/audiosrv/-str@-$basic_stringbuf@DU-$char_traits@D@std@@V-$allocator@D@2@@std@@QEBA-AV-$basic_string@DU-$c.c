/*
 * XREFs of ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180097ACC
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18002E010 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD_K@Z @ 0x180096F10 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180096F5C (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 */

_OWORD *__fastcall std::stringbuf::str(__int64 a1, _OWORD *a2)
{
  unsigned __int64 v4; // rbx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v8; // [rsp+20h] [rbp-30h] BYREF
  __m128i si128; // [rsp+30h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 || !std::streambuf::pptr(a1) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 || !std::streambuf::gptr(a1) )
    {
      v5 = _xmm;
      LOBYTE(v8) = 0;
      goto LABEL_11;
    }
    std::streambuf::eback(a1);
    std::streambuf::egptr(a1);
    std::streambuf::eback(a1);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 104);
    if ( v4 < std::streambuf::pptr(a1) )
      std::streambuf::pptr(a1);
    std::streambuf::pbase(a1);
    std::streambuf::pbase(a1);
  }
  std::string::string(&v8);
  v5 = (__int128)si128;
LABEL_11:
  v6 = v8;
  LOBYTE(v8) = 0;
  *a2 = v6;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  a2[1] = v5;
  std::string::_Tidy_deallocate((__int64)&v8);
  return a2;
}
