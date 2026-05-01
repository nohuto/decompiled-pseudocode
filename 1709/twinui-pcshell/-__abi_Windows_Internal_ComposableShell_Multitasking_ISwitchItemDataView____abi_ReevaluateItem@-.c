/*
 * XREFs of ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_ReevaluateItem@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAJPE$AAUISwitchItem@2345@@Z @ 0x1801616BC
 * Callers:
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_ReevaluateItem@?QISwitchItemDataView@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@W7E$AAAJPE$AAUISwitchItem@2345@@Z @ 0x1801616F0 (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_Ree_ea_1801616F0.c)
 * Callees:
 *     ?OnSwitchItemChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@W4SwitchItemProperty@2345@@Z @ 0x180161A90 (-OnSwitchItemChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AA.c)
 */

__int64 __fastcall ___abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataView____abi_ReevaluateItem__QISwitchItemDataView_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_UE_AAAJPE_AAUISwitchItem_2345__Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 152) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::OnSwitchItemChanged(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
  return 0LL;
}
