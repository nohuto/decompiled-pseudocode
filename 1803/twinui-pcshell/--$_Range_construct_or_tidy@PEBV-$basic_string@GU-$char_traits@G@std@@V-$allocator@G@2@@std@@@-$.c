/*
 * XREFs of ??$_Range_construct_or_tidy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x18008C4F4
 * Callers:
 *     ??0?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@V?$initializer_list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@AEBV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18008C54C (--0-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 * Callees:
 *     ?_Buy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAA_N_K@Z @ 0x18008C490 (-_Buy@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$bas.c)
 *     ??$_Uninitialized_copy_al_unchecked@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18008C57C (--$_Uninitialized_copy_al_unchecked@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 */

char __fastcall std::vector<std::wstring>::_Range_construct_or_tidy<std::wstring const *>(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  __int64 v4; // rax

  LOBYTE(v4) = std::vector<std::wstring>::_Buy((__int64 *)&xmmword_1804382A8, (a3 - (__int64)a2) >> 5);
  if ( (_BYTE)v4 )
  {
    try
    {
      v4 = std::_Uninitialized_copy_al_unchecked<std::wstring const *,std::wstring *,std::allocator<std::wstring>>(a2);
      *((_QWORD *)&xmmword_1804382A8 + 1) = v4;
    }
    catch ( ... )
    {
      std::vector<std::wstring>::_Tidy(&xmmword_1804382A8);
      throw;
    }
  }
  return v4;
}
