/*
 * XREFs of ?clear@?$list@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x180197318
 * Callers:
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x1801C96F8 (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801CAF0C (-clear@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 * Callees:
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@2@@Z @ 0x18019723C (-_Freenode@-$_List_buy@U-$pair@$$CBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil.c)
 */

void __fastcall std::list<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>::clear(
        __int64 a1)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      std::_List_buy<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>::_Freenode(
        a1,
        (__int64)v2);
      v2 = v3;
    }
    while ( v3 != *(_QWORD **)a1 );
  }
}
