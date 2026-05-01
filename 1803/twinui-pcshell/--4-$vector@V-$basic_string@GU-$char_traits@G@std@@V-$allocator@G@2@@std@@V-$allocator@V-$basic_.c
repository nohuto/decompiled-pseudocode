/*
 * XREFs of ??4?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801AA060
 * Callers:
 *     ??0AppStateChangePublisher@@QEAA@XZ @ 0x1801A9F5C (--0AppStateChangePublisher@@QEAA@XZ.c)
 * Callees:
 *     ??$_Assign_range@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x1801A9D30 (--$_Assign_range@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$b.c)
 */

__int64 *__fastcall std::vector<std::wstring>::operator=(__int64 *a1)
{
  if ( a1 != (__int64 *)&xmmword_1804382A8 )
    std::vector<std::wstring>::_Assign_range<std::wstring *>(
      a1,
      (unsigned __int64 *)xmmword_1804382A8,
      *((unsigned __int64 **)&xmmword_1804382A8 + 1));
  return a1;
}
