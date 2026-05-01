/*
 * XREFs of ?Invoke@BindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@UE$AAAXPE$AAUIBindableObservableVector@2345@PE$AAVObject@Platform@@@Z @ 0x18020C9B0
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_BindableVectorChangedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@BindableVectorChangedEventHandler@Interop@Xaml@UI@Windows@@23456@UE$AAAJPE$AAUIBindableObservableVector@3456@PE$AAVObject@Platform@@@Z @ 0x1802149C0 (-__abi_Windows_UI_Xaml_Interop_BindableVectorChangedEventHandler___abi_IDelegate____abi_Invoke@-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  if ( *(void ***)a1 == &Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
  else
    return Windows::UI::Xaml::WindowActivatedEventHandler::__abi_IDelegate::Invoke(a1, a2, a3);
}
