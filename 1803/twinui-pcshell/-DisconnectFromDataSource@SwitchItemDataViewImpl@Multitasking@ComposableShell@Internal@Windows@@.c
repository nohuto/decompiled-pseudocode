/*
 * XREFs of ?DisconnectFromDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x18020A83C
 * Callers:
 *     wil::details::ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___::_ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___ @ 0x1802073B8 (wil--details--ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___--_ScopeExitFn__lambda_88ed.c)
 *     ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x18020ECE0 (-SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$A.c)
 * Callees:
 *     ?set@ContextMenuEntries@__ISwitchItemContextMenuArgsPublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAU?$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@@Z @ 0x180221D08 (-set@ContextMenuEntries@__ISwitchItemContextMenuArgsPublicNonVirtuals@Switcher@Experiences@Compo.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DisconnectFromDataSource(
        __int64 a1)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)(a1 + 88);
  WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitchItemContextMenuArgsPublicNonVirtuals::ContextMenuEntries::set(
    *(_QWORD *)(a1 + 88),
    *(_QWORD *)(a1 + 96));
  return __abi_winrt_ptr_assign(v1, 0LL);
}
