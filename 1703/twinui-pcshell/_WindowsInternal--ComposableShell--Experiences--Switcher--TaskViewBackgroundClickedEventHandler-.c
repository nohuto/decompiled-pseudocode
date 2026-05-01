/*
 * XREFs of _WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewBackgroundClickedEventHandler::TaskViewBackgroundClickedEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(void)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x180130810
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18011D270 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z @ 0x18013416C (-Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewBackgroundClickedEventHandler::TaskViewBackgroundClickedEventHandler_IXamlSwitcherWindowInteractionEvents_void____cdecl_IXamlSwitcherWindowInteractionEvents::___void____ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // eax
  void *v5; // rdi
  void *pExceptionObject; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h]
  void *Exception; // [rsp+60h] [rbp+18h]

  v2 = Platform::Details::IWeakReference::Resolve(
         *(_QWORD *)(a1 + 8),
         &_uuidof__AUIXamlSwitcherWindowInteractionEvents__);
  v3 = v2;
  pExceptionObject = (void *)v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v8 = v3;
  if ( !v3 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = (void *)__abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  pExceptionObject = 0LL;
  v4 = (**(__int64 (__fastcall ***)(__int64, void *, void **))v3)(
         v3,
         &_uuidof__AUIXamlSwitcherWindowInteractionEvents__,
         &pExceptionObject);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  v5 = pExceptionObject;
  Exception = pExceptionObject;
  (*(void (__fastcall **)(void *))(a1 + 16))(pExceptionObject);
  if ( v5 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
