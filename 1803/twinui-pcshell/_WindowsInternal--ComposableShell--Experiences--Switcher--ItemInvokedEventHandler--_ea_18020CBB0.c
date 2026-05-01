/*
 * XREFs of _WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler_IXamlMultitaskingViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18020CBB0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1801F9D0C (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z @ 0x18020EAF8 (-Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler_IXamlMultitaskingViewController_void____cdecl_IXamlMultitaskingViewController::___Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____ptr64____ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64 *); // rdi
  __int64 v6; // rbx
  __int64 pExceptionObject; // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v9)(_QWORD, __int64, __int64 *); // [rsp+60h] [rbp+18h]
  void *Exception; // [rsp+68h] [rbp+20h]

  v4 = Platform::Details::IWeakReference::Resolve(*(_QWORD *)(a1 + 8), &_uuidof__AUIXamlMultitaskingViewController__);
  pExceptionObject = v4;
  v5 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v4);
  v9 = v5;
  __abi_winrt_ptr_dtor(v4);
  if ( !v5 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  v6 = __abi_winrt_cast_to(0, v5, (__int64)&_uuidof__AUIXamlMultitaskingViewController__);
  pExceptionObject = v6;
  (*(void (__fastcall **)(__int64, __int64))(a1 + 16))(v6, a2);
  __abi_winrt_ptr_dtor(v6);
  return __abi_winrt_ptr_dtor((__int64)v5);
}
