/*
 * XREFs of _lambda_f16d3e98efdf4d70b8b54f95ca021348_::operator() @ 0x18013AC40
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_f16d3e98efdf4d70b8b54f95ca021348__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18013D200 (wistd--_Func_impl_wistd--_Callable_obj__lambda_f16d3e98efdf4d70b8b54f95ca021348__0__wistd--detai.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_f16d3e98efdf4d70b8b54f95ca021348_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rbx
  PVOID v3; // rsi
  RTL_SRWLOCK *i; // rax
  __int64 (__fastcall ****Ptr)(_QWORD, GUID *, __int64 *); // rdi
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+58h] [rbp+10h]

  v2 = *a1 + 65;
  v9 = v2;
  AcquireSRWLockShared(v2);
  v3 = 0LL;
  for ( i = *a1; v3 < (*a1)[67].Ptr; i = *a1 )
  {
    v8 = 0LL;
    Ptr = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))i[66].Ptr;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    v6 = (**Ptr[(_QWORD)v3])(Ptr[(_QWORD)v3], &GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0, &v8);
    if ( v6 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        41LL,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    v3 = (char *)v3 + 1;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
}
