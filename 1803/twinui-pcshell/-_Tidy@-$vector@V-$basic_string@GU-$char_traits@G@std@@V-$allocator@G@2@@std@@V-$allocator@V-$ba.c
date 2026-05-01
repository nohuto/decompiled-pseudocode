/*
 * XREFs of ?_Tidy@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXXZ @ 0x180097548
 * Callers:
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Range_construct_or_tidy_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64__::_1_::catch$9 @ 0x1800B60C0 (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un.c)
 *     _dynamic_atexit_destructor_for__c_defaultAppIdAllowListRegex__ @ 0x1800B6710 (_dynamic_atexit_destructor_for__c_defaultAppIdAllowListRegex__.c)
 *     ?_Destroy@?$_Ref_count_obj@UDocumentCollectionsConfig@@@std@@EEAAXXZ @ 0x1801AA0D0 (-_Destroy@-$_Ref_count_obj@UDocumentCollectionsConfig@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<std::wstring>::_Tidy(__int64 a1)
{
  char *v1; // rbx
  char *v3; // rsi

  v1 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(char **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        std::wstring::_Tidy_deallocate((__int64)v1);
        v1 += 32;
      }
      while ( v1 != v3 );
      v1 = *(char **)a1;
    }
    std::_Deallocate(v1, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v1) >> 5, 0x20uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
