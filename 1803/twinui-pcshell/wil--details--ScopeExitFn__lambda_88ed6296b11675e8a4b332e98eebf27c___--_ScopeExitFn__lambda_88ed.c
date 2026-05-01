/*
 * XREFs of wil::details::ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___::_ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___ @ 0x1802073B8
 * Callers:
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SetDataSource_::_1_::dtor$8 @ 0x18020EFA7 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SetDataS_ea_18020EFA7.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?DisconnectFromDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x18020A83C (-DisconnectFromDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___::_ScopeExitFn__lambda_88ed6296b11675e8a4b332e98eebf27c___(
        __int64 *a1)
{
  if ( *((_BYTE *)a1 + 8) )
  {
    *((_BYTE *)a1 + 8) = 0;
    Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DisconnectFromDataSource(*a1);
  }
  return __abi_winrt_ptr_dtor(*a1);
}
