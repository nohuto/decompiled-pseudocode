/*
 * XREFs of ?Invoke@WindowActivatedEventHandler@Xaml@UI@Windows@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@34@@Z @ 0x18020CB60
 * Callers:
 *     ?__abi_Windows_UI_Xaml_WindowActivatedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@WindowActivatedEventHandler@Xaml@UI@Windows@@2345@UE$AAAJPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@45@@Z @ 0x180215080 (-__abi_Windows_UI_Xaml_WindowActivatedEventHandler___abi_IDelegate____abi_Invoke@-Q__abi_IDelega.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Xaml::WindowActivatedEventHandler::Invoke(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(void ***)a1 == &Windows::UI::Xaml::WindowActivatedEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
  else
    return Windows::UI::Xaml::WindowActivatedEventHandler::__abi_IDelegate::Invoke(a1, a2, a3);
}
