/*
 * XREFs of ?ReevaluateItem@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@W7E$AAAXPE$AAUISwitchItem@2345@@Z @ 0x180161B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _ReevaluateItem__QISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_W7E_AAAXPE_AAUISwitchItem_2345__Z(
        __int64 a1,
        unsigned __int64 a2)
{
  Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::OnSwitchItemChanged(
    (RTL_SRWLOCK *)(a1 - 8),
    a2);
}
