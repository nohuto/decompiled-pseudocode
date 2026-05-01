/*
 * XREFs of ?Invoke@DispatchedHandler@Core@UI@Windows@@UE$AAAXXZ @ 0x180200C10
 * Callers:
 *     ?__abi_Windows_UI_Core_DispatchedHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@DispatchedHandler@Core@UI@Windows@@2345@UE$AAAJXZ @ 0x180200DC0 (-__abi_Windows_UI_Core_DispatchedHandler___abi_IDelegate____abi_Invoke@-Q__abi_IDelegate@Dispatc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Core::DispatchedHandler::Invoke(__int64 a1)
{
  if ( *(void ***)a1 == &Windows::UI::Core::DispatchedHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
  else
    return Windows::UI::Xaml::WindowActivatedEventHandler::__abi_IDelegate::Invoke();
}
