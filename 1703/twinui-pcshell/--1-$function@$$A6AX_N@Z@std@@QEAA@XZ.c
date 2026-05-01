/*
 * XREFs of ??1?$function@$$A6AX_N@Z@std@@QEAA@XZ @ 0x18008C314
 * Callers:
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$5 @ 0x18019BC83 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$5.c)
 *     _StartLayout::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$0 @ 0x18019BE23 (_StartLayout--GetSelectedItem_ParsedTaskbarLayout__--_1_--dtor$0.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$9 @ 0x18019D1BE (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$9.c)
 *     _StartLayout::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$0 @ 0x18019D24A (_StartLayout--GetSelectedItem_ParsedPenWorkspaceLayout__--_1_--dtor$0.c)
 *     _ViewEventDispatcher::ViewDestroyed_::_1_::dtor$6 @ 0x18019E405 (_ViewEventDispatcher--ViewDestroyed_--_1_--dtor$6.c)
 *     _ViewEventDispatcher::ViewNavigationLevelChanged_::_1_::dtor$2 @ 0x18019E444 (_ViewEventDispatcher--ViewNavigationLevelChanged_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_ChangePopupUIShowingCount_::_1_::dtor$1 @ 0x18019E65D (_ViewEventDispatcher--_ChangePopupUIShowingCount_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::GetTopLevelHost_::_1_::dtor$1 @ 0x18019E753 (_ViewEventDispatcher--GetTopLevelHost_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::_HostChanged_::_1_::dtor$0 @ 0x18019E9E2 (_ViewEventDispatcher--_HostChanged_--_1_--dtor$0.c)
 *     _WindowReadyState::SetCallback_::_1_::dtor$0 @ 0x18019F4C5 (_WindowReadyState--SetCallback_--_1_--dtor$0.c)
 *     _WindowReadyState::SetCallback_::_1_::dtor$3 @ 0x18019F4D1 (_WindowReadyState--SetCallback_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::function<void (bool)>::~function<void (bool)>(__int64 a1, __int64 a2)
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
