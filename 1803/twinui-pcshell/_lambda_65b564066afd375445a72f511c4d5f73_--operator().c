/*
 * XREFs of _lambda_65b564066afd375445a72f511c4d5f73_::operator() @ 0x180258184
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_65b564066afd375445a72f511c4d5f73__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18025A860 (wistd--_Func_impl_wistd--_Callable_obj__lambda_65b564066afd375445a72f511c4d5f73__0__ea_18025A860.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bb8a2f055e3fa5ba92d678fcbbac9abd_____lambda_bb8a2f055e3fa5ba92d678fcbbac9abd___ @ 0x180257288 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bb8a2f055e3fa.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_65b564066afd375445a72f511c4d5f73_::operator()(__int64 *a1, int *a2)
{
  __int64 v3; // rcx
  struct Windows::Internal::IComPoolTask **v4; // rax
  struct Windows::Internal::IComPoolTask *v5; // rbx
  __int64 v6; // rcx
  DWORD CurrentThreadId; // eax
  int v8; // ebx
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  int v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  struct Windows::Internal::IComPoolTask *v14; // [rsp+68h] [rbp+10h] BYREF

  v3 = *a1;
  v10 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v11 = *a2;
  v4 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bb8a2f055e3fa5ba92d678fcbbac9abd_____lambda_bb8a2f055e3fa5ba92d678fcbbac9abd___(
                                                    &v13,
                                                    (__int64)&v10);
  v5 = *v4;
  v14 = *v4;
  *v4 = 0LL;
  v6 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  CurrentThreadId = GetCurrentThreadId();
  v8 = Windows::Internal::ComTaskPool::RunTask(3u, 0, CurrentThreadId, 0, v5, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((void **)&v14);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      86LL,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
  return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v10);
}
