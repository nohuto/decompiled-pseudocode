/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAUParsedTaskbarLayout@@PEAU1@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAPEAUParsedTaskbarLayout@@PEAU1@00AEAV?$allocator@UParsedTaskbarLayout@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18014A044
 * Callers:
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18014A388 (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 * Callees:
 *     ??$construct@UParsedPenWorkspaceLayout@@U1@@?$_Default_allocator_traits@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@SAXAEAV?$allocator@UParsedPenWorkspaceLayout@@@1@QEAUParsedPenWorkspaceLayout@@$$QEAU3@@Z @ 0x18014A0C8 (--$construct@UParsedPenWorkspaceLayout@@U1@@-$_Default_allocator_traits@V-$allocator@UParsedPenW.c)
 */

__int64 __fastcall std::_Uninitialized_move_al_unchecked<ParsedTaskbarLayout *,ParsedTaskbarLayout *,std::allocator<ParsedTaskbarLayout>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v7; // [rsp+50h] [rbp+18h]

  v7 = a3;
  v3 = a3;
  v5 = a1;
  try
  {
    while ( v5 != a2 )
    {
      std::_Default_allocator_traits<std::allocator<ParsedPenWorkspaceLayout>>::construct<ParsedPenWorkspaceLayout,ParsedPenWorkspaceLayout>(
        a1,
        v3,
        v5);
      v3 += 104LL;
      v7 = v3;
      v5 += 104LL;
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<ParsedTaskbarLayout>>(a3, v7);
    throw;
  }
  return v3;
}
