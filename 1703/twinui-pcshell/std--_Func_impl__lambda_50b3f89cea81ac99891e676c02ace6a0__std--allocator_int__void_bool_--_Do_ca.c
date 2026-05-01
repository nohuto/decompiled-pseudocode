/*
 * XREFs of std::_Func_impl__lambda_50b3f89cea81ac99891e676c02ace6a0__std::allocator_int__void_bool_::_Do_call @ 0x18011B380
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_0081d7bf3395a5842c6df6a4f55ba599___ @ 0x18011A380 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_0081d7bf3395a5842c6df6a4f55ba599___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Func_impl__lambda_50b3f89cea81ac99891e676c02ace6a0__std::allocator_int__void_bool_::_Do_call(
        __int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  int v3; // edi
  IUnknown **v4; // rax
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    v2 = v1 + 32;
  else
    v2 = 0LL;
  v8 = v2;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = *(_DWORD *)(v1 + 160);
  v4 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_0081d7bf3395a5842c6df6a4f55ba599___(&v7);
  result = Windows::Internal::ComTaskPool::RunTask(3, 2u, v3, 0, *v4, 0LL);
  v6 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
