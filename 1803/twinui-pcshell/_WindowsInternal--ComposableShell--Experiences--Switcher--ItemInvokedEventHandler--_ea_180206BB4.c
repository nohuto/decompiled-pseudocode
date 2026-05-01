/*
 * XREFs of _WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler_IXamlMultitaskingViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture @ 0x180206BB4
 * Callers:
 *     ??$?0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMultitaskingViewController@@P85@E$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@ZW4CallbackContext@Platform@@_N@Z @ 0x180201FDC (--$-0UIXamlMultitaskingViewController@@P80@E$AAAXPE$AAUISwitchItem@Multitasking@Com_ea_180201FDC.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18020B750 (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler_IXamlMultitaskingViewController_void____cdecl_IXamlMultitaskingViewController::___Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64____ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64, __int64 *))
{
  __int64 v4; // [rsp+60h] [rbp+18h]
  __int64 WeakReference; // [rsp+68h] [rbp+20h]

  *a1 = &off_1804320B0;
  v4 = __abi_winrt_cast_to(0, a2, (__int64)&_uuidof__AUIWeakReferenceSource_Details_Platform__);
  WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference(v4);
  a1[1] = __abi_winrt_ptr_ctor(WeakReference);
  __abi_winrt_ptr_dtor(WeakReference);
  __abi_winrt_ptr_dtor(v4);
  a1[2] = Platform::IDisposable::_Dispose_;
  return a1;
}
