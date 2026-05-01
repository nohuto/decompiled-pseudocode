/*
 * XREFs of ?__abi_winrt_throw_on_disposed@@YAX_N@Z @ 0x180149C70
 * Callers:
 *     ?__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_CreateView@?QISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@SwitchItemDataViewImpl@2345@UE$AAAJPEAPE$AAVSwitchItemDataView@2345@@Z @ 0x180161D4C (-__abi_Windows_Internal_ComposableShell_Multitasking_ISwitchItemDataSource____abi_CreateView@-QI.c)
 * Callees:
 *     <none>
 */

void __fastcall __abi_winrt_throw_on_disposed(char a1)
{
  if ( a1 )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
}
