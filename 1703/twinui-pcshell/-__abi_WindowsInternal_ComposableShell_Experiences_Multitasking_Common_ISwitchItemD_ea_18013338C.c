/*
 * XREFs of ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataView____abi_ReevaluateItem@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@UE$AAAJPE$AAUISwitchItem@23456@@Z @ 0x18013338C
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataView____abi_ReevaluateItem@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@W7E$AAAJPE$AAUISwitchItem@23456@@Z @ 0x1801333C0 (-__abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemD_ea_1801333C0.c)
 * Callees:
 *     ?OnSwitchItemChanged@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItem@23456@W4SwitchItemProperty@23456@@Z @ 0x1801344A0 (-OnSwitchItemChanged@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@Wind.c)
 */

__int64 __fastcall ___abi_WindowsInternal_ComposableShell_Experiences_Multitasking_Common_ISwitchItemDataView____abi_ReevaluateItem__QISwitchItemDataView_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__SwitchItemDataViewImpl_23456_UE_AAAJPE_AAUISwitchItem_23456__Z(
        __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 152) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::OnSwitchItemChanged(a1);
  }
  catch ( ... )
  {
    return (unsigned int)__abi_translateCurrentException(0);
  }
  return v1;
}
