/*
 * XREFs of _WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::ItemContextMenuRequestedHandler_IXamlMultitaskingViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemContextMenuArgs_____ptr64_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel_____ptr64)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18020CCE0
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
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::ItemContextMenuRequestedHandler_IXamlMultitaskingViewController_void____cdecl_IXamlMultitaskingViewController::___WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemContextMenuArgs_____ptr64_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel_____ptr64____ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbx
  __int64 (__fastcall ***v7)(_QWORD, __int64, __int64 *); // rdi
  void *Exception; // rax
  __int64 v9; // rbx
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 pExceptionObject; // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v13)(_QWORD, __int64, __int64 *); // [rsp+68h] [rbp+20h]

  v6 = Platform::Details::IWeakReference::Resolve(*(_QWORD *)(a1 + 8), &_uuidof__AUIXamlMultitaskingViewController__);
  pExceptionObject = v6;
  v7 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v6);
  v13 = v7;
  __abi_winrt_ptr_dtor(v6);
  if ( !v7 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v11 = Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(v11);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  v9 = __abi_winrt_cast_to(0, v7, (__int64)&_uuidof__AUIXamlMultitaskingViewController__);
  pExceptionObject = v9;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 16))(v9, a2, a3);
  __abi_winrt_ptr_dtor(v9);
  return __abi_winrt_ptr_dtor((__int64)v7);
}
