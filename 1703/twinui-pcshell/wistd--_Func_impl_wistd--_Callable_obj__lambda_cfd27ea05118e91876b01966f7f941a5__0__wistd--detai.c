/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_cfd27ea05118e91876b01966f7f941a5__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_Windows::Internal::Shell::Holographic::ShellState_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_Windows::Internal::Shell::Holographic::ShellState_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800E13B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_c401736c1c7abf5bd14884b3d5be4201___ @ 0x1800E0F38 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_c401736c1c7abf5bd14884b3d5be4201___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_cfd27ea05118e91876b01966f7f941a5__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_Windows::Internal::Shell::Holographic::ShellState_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_Windows::Internal::Shell::Holographic::ShellState_const_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx
  signed __int32 v2; // eax
  signed __int32 v3; // eax
  IUnknown *v4; // rdi
  DWORD CurrentThreadId; // eax
  int v6; // edi
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 v9; // [rsp+78h] [rbp+18h] BYREF

  v1 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 8) + 416LL);
  if ( v1 )
  {
    do
      v2 = *((_DWORD *)v1 + 7);
    while ( v2 != 0x7FFFFFFF && v2 != _InterlockedCompareExchange(v1 + 7, v2 + 1, v2) );
  }
  if ( v1 )
  {
    do
      v3 = *((_DWORD *)v1 + 7);
    while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange(v1 + 7, v3 + 1, v3) );
  }
  v4 = (IUnknown *)*Windows::Internal::ComTaskPool::WrapWithTask__lambda_c401736c1c7abf5bd14884b3d5be4201___(&v9);
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v4, 0LL);
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"internal\\onecoreuapshell\\inc\\creationthreaddispatcher.h",
      (const char *)(unsigned int)v6);
  if ( v1 )
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v1);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v1);
  }
}
