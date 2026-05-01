/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@EEAAXXZ @ 0x1802110E0
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?Activate@IWindow@Xaml@UI@Windows@@UE$AAAXXZ @ 0x1801FD3F0 (-Activate@IWindow@Xaml@UI@Windows@@UE$AAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>::_Destroy(
        __int64 a1)
{
  Windows::UI::Xaml::IWindow::Activate(*(_QWORD *)(a1 + 16));
  return __abi_winrt_ptr_dtor(*(_QWORD *)(a1 + 16));
}
