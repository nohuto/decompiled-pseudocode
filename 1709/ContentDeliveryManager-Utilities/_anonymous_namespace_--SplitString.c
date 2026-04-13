/*
 * XREFs of _anonymous_namespace_::SplitString @ 0x18002ADC0
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18002AF5C (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18002B160 (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 * Callees:
 *     ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002F240 (-push_back@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V.c)
 *     ?find_first_not_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x180030D24 (-find_first_not_of@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K@Z.c)
 *     ?find_first_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x180030DCC (-find_first_of@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180033414 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall anonymous_namespace_::SplitString(_QWORD *a1, __int64 a2)
{
  int v4; // r15d
  __int64 first_not_of; // rsi
  __int64 first_of; // r14
  void *v8[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+50h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = 1;
  if ( *(_QWORD *)(a2 + 16) )
  {
    first_not_of = std::wstring::find_first_not_of(a2, L"`");
    do
    {
      first_of = std::wstring::find_first_of(a2, L"`", first_not_of);
      v9 = 7LL;
      v8[2] = 0LL;
      LOWORD(v8[0]) = 0;
      std::wstring::assign(v8);
      v4 |= 2u;
      std::vector<std::wstring>::push_back(a1, v8);
      if ( v9 >= 8 )
        operator delete(v8[0]);
      first_not_of = first_of + 1;
    }
    while ( first_of != -1 );
  }
  return a1;
}
