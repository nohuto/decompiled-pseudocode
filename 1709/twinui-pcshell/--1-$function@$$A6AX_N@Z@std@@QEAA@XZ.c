/*
 * XREFs of ??1?$function@$$A6AX_N@Z@std@@QEAA@XZ @ 0x18008E8E8
 * Callers:
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$5 @ 0x1801EA6F3 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$5.c)
 *     _StartLayout::GetSelectedItem_ParsedTaskbarLayout__::_1_::dtor$0 @ 0x1801EA89B (_StartLayout--GetSelectedItem_ParsedTaskbarLayout__--_1_--dtor$0.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$9 @ 0x1801ECF70 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$9.c)
 *     _StartLayout::GetSelectedItem_ParsedPenWorkspaceLayout__::_1_::dtor$0 @ 0x1801ECFFC (_StartLayout--GetSelectedItem_ParsedPenWorkspaceLayout__--_1_--dtor$0.c)
 *     _ViewEventDispatcher::ViewDestroyed_::_1_::dtor$6 @ 0x1801EE618 (_ViewEventDispatcher--ViewDestroyed_--_1_--dtor$6.c)
 *     _ViewEventDispatcher::ViewNavigationLevelChanged_::_1_::dtor$2 @ 0x1801EE657 (_ViewEventDispatcher--ViewNavigationLevelChanged_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_ChangePopupUIShowingCount_::_1_::dtor$1 @ 0x1801EE858 (_ViewEventDispatcher--_ChangePopupUIShowingCount_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::GetTopLevelHost_::_1_::dtor$1 @ 0x1801EE92A (_ViewEventDispatcher--GetTopLevelHost_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::_HostChanged_::_1_::dtor$0 @ 0x1801EEB89 (_ViewEventDispatcher--_HostChanged_--_1_--dtor$0.c)
 *     _WindowReadyState::SetCallback_::_1_::dtor$0 @ 0x1801EF618 (_WindowReadyState--SetCallback_--_1_--dtor$0.c)
 *     _WindowReadyState::SetCallback_::_1_::dtor$3 @ 0x1801EF624 (_WindowReadyState--SetCallback_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
