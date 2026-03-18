/*
 * XREFs of ?erase@?$list@U?$pair@$$CBII@std@@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@@Z @ 0x18016C0B0
 * Callers:
 *     ??$_Insert@AEAU?$pair@$$CBII@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBII@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@1@@Z @ 0x18016AEB8 (--$_Insert@AEAU-$pair@$$CBII@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned int const,unsigned int>>::erase(__int64 a1, _QWORD *a2, char *a3)
{
  __int64 v3; // rbx

  v3 = *(_QWORD *)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --*(_QWORD *)(a1 + 8);
  std::_Deallocate(a3, 1uLL, 0x18uLL);
  *a2 = v3;
  return a2;
}
