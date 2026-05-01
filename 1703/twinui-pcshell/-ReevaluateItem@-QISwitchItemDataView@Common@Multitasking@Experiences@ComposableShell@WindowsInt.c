/*
 * XREFs of ?ReevaluateItem@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@W7E$AAAXPE$AAUISwitchItem@23456@@Z @ 0x180135550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _ReevaluateItem__QISwitchItemDataView_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__SwitchItemDataViewImpl_23456_W7E_AAAXPE_AAUISwitchItem_23456__Z(
        __int64 a1,
        unsigned __int64 a2)
{
  WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::OnSwitchItemChanged(
    (RTL_SRWLOCK *)(a1 - 8),
    a2);
}
