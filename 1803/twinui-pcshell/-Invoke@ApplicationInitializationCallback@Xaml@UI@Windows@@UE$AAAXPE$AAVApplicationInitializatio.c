/*
 * XREFs of ?Invoke@ApplicationInitializationCallback@Xaml@UI@Windows@@UE$AAAXPE$AAVApplicationInitializationCallbackParams@234@@Z @ 0x1801FDD10
 * Callers:
 *     ?__abi_Windows_UI_Xaml_ApplicationInitializationCallback___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@ApplicationInitializationCallback@Xaml@UI@Windows@@2345@UE$AAAJPE$AAVApplicationInitializationCallbackParams@345@@Z @ 0x1801FF370 (-__abi_Windows_UI_Xaml_ApplicationInitializationCallback___abi_IDelegate____abi_Invoke@-Q__abi_I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Xaml::ApplicationInitializationCallback::Invoke(__int64 a1)
{
  if ( *(void ***)a1 == &Windows::UI::Xaml::ApplicationInitializationCallback::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
  else
    return Windows::UI::Xaml::WindowActivatedEventHandler::__abi_IDelegate::Invoke();
}
