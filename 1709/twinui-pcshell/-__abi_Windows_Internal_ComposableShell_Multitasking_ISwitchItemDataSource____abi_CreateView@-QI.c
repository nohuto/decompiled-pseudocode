/*
 * XREFs of ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_CreateView@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAJPEAPE$AAVSwitchItemDataView@2345@@Z @ 0x180161D4C
 * Callers:
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_CreateView@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@WBA@E$AAAJPEAPE$AAVSwitchItemDataView@2345@@Z @ 0x180161D90 (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_C_ea_180161D90.c)
 * Callees:
 *     ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x180149C70 (-__abi_winrt_throw_on_disposed@@YAX_N@Z.c)
 *     ?CreateView@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAPE$AAVSwitchItemDataView@2345@XZ @ 0x18016900C (-CreateView@-QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDat.c)
 */

void __fastcall __noreturn ___abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_CreateView__QISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_UE_AAAJPEAPE_AAVSwitchItemDataView_2345__Z(
        __int64 a1,
        _QWORD *a2)
{
  __abi_winrt_throw_on_disposed(*(_BYTE *)(a1 + 152));
  *a2 = 0LL;
  try
  {
    _CreateView__QISwitchItemDataSource_Multitasking_ComposableShell_Internal_Windows__SwitchItemDataViewImpl_2345_UE_AAAPE_AAVSwitchItemDataView_2345_XZ(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException(0);
  }
}
