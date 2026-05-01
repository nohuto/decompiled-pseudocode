/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_9c9b74f73242e90608ebee76b1464adb___ @ 0x1801801E0
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_0f11cce5f101e8d9725eaa1c21987942__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1801839E0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_0f11cce5f101e8d9725eaa1c21987942__0__ea_1801839E0.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z @ 0x180180A54 (--4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_9c9b74f73242e90608ebee76b1464adb___(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ebx
  void *v9; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    *v5 = off_18032BEF0;
    v5[2] = 0LL;
    AgileGitPtr::operator=(v5 + 2, a2);
    v3 = v5;
  }
  v9 = v3;
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunTask(
         3u,
         0,
         CurrentThreadId,
         0,
         (struct Windows::Internal::IComPoolTask *)v3,
         0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v9);
  return v7;
}
