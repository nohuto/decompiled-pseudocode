/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180043FE8
 * Callers:
 *     ??$_Buynode@AEBU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@AEBU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@1@@Z @ 0x1800424EC (--$_Buynode@AEBU-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$vari.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800433F8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBV-$basic_string@DU-$char_traits@D@std@@V-.c)
 * Callees:
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 */

_QWORD *__fastcall std::string::string(_QWORD *a1, __int64 a2)
{
  _OWORD *v3; // rdi
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rbp
  __int64 v6; // rsi
  void *v7; // rax
  _QWORD *result; // rax

  v3 = (_OWORD *)a2;
  v4 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v5 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) >= 0x10uLL )
    v3 = *(_OWORD **)a2;
  v6 = 15LL;
  if ( v5 >= 0x10 )
  {
    v6 = v5 | 0xF;
    if ( (v5 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v6 != -1 )
    {
      if ( (unsigned __int64)(v6 + 1) < 0x1000 )
      {
        v4 = operator new(v6 + 1);
      }
      else
      {
        if ( v6 + 40 < (unsigned __int64)(v6 + 1) )
          std::_Default_allocate_traits<1>::_Fail();
        v7 = operator new(v6 + 40);
        v4 = (_QWORD *)(((unsigned __int64)v7 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v4 - 1) = v7;
      }
    }
    *a1 = v4;
    memcpy_0(v4, v3, v5 + 1);
  }
  else
  {
    *(_OWORD *)a1 = *v3;
  }
  a1[2] = v5;
  result = a1;
  a1[3] = v6;
  return result;
}
