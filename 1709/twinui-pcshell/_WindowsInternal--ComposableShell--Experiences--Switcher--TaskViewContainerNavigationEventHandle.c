/*
 * XREFs of _WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler::TaskViewContainerNavigationEventHandler_IXamlSwitcherWindowInteractionEvents_void_(__cdecl_IXamlSwitcherWindowInteractionEvents::_)(unsigned_int)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x18015E060
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180147350 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1801473E4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z @ 0x18016A4CC (-Resolve@IWeakReference@Details@Platform@@UE$AAAPE$AAVObject@3@PEAVGuid@3@@Z.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewContainerNavigationEventHandler::TaskViewContainerNavigationEventHandler_IXamlSwitcherWindowInteractionEvents_void____cdecl_IXamlSwitcherWindowInteractionEvents::___unsigned_int____ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1,
        unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  void *v7; // rdi
  void *pExceptionObject; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h]
  void *Exception; // [rsp+68h] [rbp+20h]

  v4 = Platform::Details::IWeakReference::Resolve(
         *(_QWORD *)(a1 + 8),
         &_uuidof__AUIXamlSwitcherWindowInteractionEvents__);
  v5 = v4;
  pExceptionObject = (void *)v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v10 = v5;
  if ( !v5 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = (void *)__abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  pExceptionObject = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, void *, void **))v5)(
         v5,
         &_uuidof__AUIXamlSwitcherWindowInteractionEvents__,
         &pExceptionObject);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  v7 = pExceptionObject;
  Exception = pExceptionObject;
  (*(void (__fastcall **)(void *, _QWORD))(a1 + 16))(pExceptionObject, a2);
  if ( v7 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
