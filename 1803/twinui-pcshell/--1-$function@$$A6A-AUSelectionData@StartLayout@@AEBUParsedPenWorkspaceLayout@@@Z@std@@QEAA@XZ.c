/*
 * XREFs of ??1?$function@$$A6A?AUSelectionData@StartLayout@@AEBUParsedPenWorkspaceLayout@@@Z@std@@QEAA@XZ @ 0x18014A7EC
 * Callers:
 *     _StartLayout::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$0 @ 0x180149E56 (_StartLayout--GetSelectedItem_ParsedTaskbarLayout__--_1_--dtor$0.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$5 @ 0x18014B70E (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$5.c)
 *     _StartLayout::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$0 @ 0x18019BA9E (_StartLayout--GetSelectedItem_ParsedPenWorkspaceLayout__--_1_--dtor$0.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$9 @ 0x18019C56D (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$9.c)
 *     _ViewEventDispatcher::GetTopLevelHost_::_1_::dtor$1 @ 0x1801CB49E (_ViewEventDispatcher--GetTopLevelHost_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::_ChangePopupUIShowingCount_::_1_::dtor$1 @ 0x1801CFC52 (_ViewEventDispatcher--_ChangePopupUIShowingCount_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::function<StartLayout::SelectionData (ParsedPenWorkspaceLayout const &)>::~function<StartLayout::SelectionData (ParsedPenWorkspaceLayout const &)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
