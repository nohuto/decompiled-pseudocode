/*
 * XREFs of ??R?$_Func_class@USelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@std@@QEBA?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z @ 0x18008CEC4
 * Callers:
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedTaskbarLayout@@@Z@2@PEAUParsedTaskbarLayout@@@Z @ 0x18008C788 (--$GetSelectedItem@UParsedTaskbarLayout@@@StartLayout@@YAJAEBV-$vector@UParsedTaskbarLayout@@V-$.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0@V?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedPenWorkspaceLayout@@@Z@2@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1800CEA60 (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@StartLayout@@YAJAEBV-$vector@UParsedPenWorkspaceL.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<StartLayout::SelectionData,ParsedTaskbarLayout const &>::operator()(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return a2;
}
