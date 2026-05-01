/*
 * XREFs of _Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty_::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty__WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl_void_(__cdecl_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::_)(WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty)___ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke @ 0x1801341E0
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
__int64 __fastcall Windows::Foundation::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty_::TypedEventHandler_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty__WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl_void____cdecl_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataViewImpl::___WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_enum_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty____ptr64__::_2_::__abi_PointerToMemberWeakRefCapture::Invoke(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  void *Exception; // rax
  int v9; // eax
  __int64 v10; // rdi
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 pExceptionObject; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h]

  v6 = Platform::Details::IWeakReference::Resolve(
         *(_QWORD *)(a1 + 8),
         (__int64)&_uuidof__AU__ISwitchItemDataViewImplPublicNonVirtuals_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__);
  v7 = v6;
  pExceptionObject = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v14 = v7;
  if ( !v7 )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v12 = Platform::DisconnectedException::DisconnectedException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor(v12);
    throw (Platform::DisconnectedException **)&pExceptionObject;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  pExceptionObject = 0LL;
  v9 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v7)(
         v7,
         &_uuidof__AU__ISwitchItemDataViewImplPublicNonVirtuals_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__,
         &pExceptionObject);
  if ( v9 < 0 )
    __abi_WinRTraiseException(v9);
  v10 = pExceptionObject;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(a1 + 16))(pExceptionObject + *(int *)(a1 + 24), a2, a3);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
