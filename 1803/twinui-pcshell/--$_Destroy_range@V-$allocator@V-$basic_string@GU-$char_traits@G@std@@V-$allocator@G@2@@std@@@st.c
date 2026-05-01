/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1801A9E90
 * Callers:
 *     _std::_Uninitialized_copy_al_unchecked_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________ptr64_std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________::_1_::catch$25 @ 0x1800B610E (_std--_Uninitialized_copy_al_unchecked_std--basic_string_unsigned_short_std--char_t_ea_1800B610E.c)
 *     _std::_Uninitialized_copy_al_unchecked_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________ptr64_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________ptr64_std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________::_1_::catch$2 @ 0x1801A9F38 (_std--_Uninitialized_copy_al_unchecked_std--basic_string_unsigned_short_std--char_t_ea_1801A9F38.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::wstring>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::wstring::_Tidy_deallocate(v3);
      v3 += 32LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
