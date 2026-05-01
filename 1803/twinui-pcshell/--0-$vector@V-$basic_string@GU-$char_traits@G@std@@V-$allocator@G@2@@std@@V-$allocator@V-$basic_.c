/*
 * XREFs of ??0?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@V?$initializer_list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@AEBV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18008C54C
 * Callers:
 *     _dynamic_initializer_for__c_defaultAppIdAllowListRegex__ @ 0x180002350 (_dynamic_initializer_for__c_defaultAppIdAllowListRegex__.c)
 * Callees:
 *     ??$_Range_construct_or_tidy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x18008C4F4 (--$_Range_construct_or_tidy@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$.c)
 */

__int128 *__fastcall std::vector<std::wstring>::vector<std::wstring>(__int64 a1, __int64 a2)
{
  qword_1804382B8 = 0LL;
  xmmword_1804382A8 = 0LL;
  std::vector<std::wstring>::_Range_construct_or_tidy<std::wstring const *>(a1, *(void **)a2, *(_QWORD *)(a2 + 8));
  return &xmmword_1804382A8;
}
