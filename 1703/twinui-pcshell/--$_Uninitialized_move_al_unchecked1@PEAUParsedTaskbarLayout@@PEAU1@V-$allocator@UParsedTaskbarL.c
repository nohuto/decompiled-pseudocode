/*
 * XREFs of ??$_Uninitialized_move_al_unchecked1@PEAUParsedTaskbarLayout@@PEAU1@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@YAPEAUParsedTaskbarLayout@@PEAU1@00AEAU?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18008D274
 * Callers:
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18008CA34 (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 * Callees:
 *     ??$construct@UParsedPenWorkspaceLayout@@U1@@?$_Wrap_alloc@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@QEAAXPEAUParsedPenWorkspaceLayout@@$$QEAU2@@Z @ 0x18008CFFC (--$construct@UParsedPenWorkspaceLayout@@U1@@-$_Wrap_alloc@V-$allocator@UParsedPenWorkspaceLayout.c)
 */

__int64 __fastcall std::_Uninitialized_move_al_unchecked1<ParsedTaskbarLayout *,ParsedTaskbarLayout *,std::allocator<ParsedTaskbarLayout>>(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 *v5; // rdi
  __int64 v7; // [rsp+50h] [rbp+18h]

  v7 = a3;
  v3 = a3;
  v5 = (__int64 *)a1;
  try
  {
    while ( v5 != a2 )
    {
      std::_Wrap_alloc<std::allocator<ParsedPenWorkspaceLayout>>::construct<ParsedPenWorkspaceLayout,ParsedPenWorkspaceLayout>(
        a1,
        v3,
        v5);
      v3 += 104LL;
      v7 = v3;
      v5 += 13;
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<ParsedPenWorkspaceLayout>,ParsedPenWorkspaceLayout *>(a3, v7);
    throw;
  }
  return v3;
}
