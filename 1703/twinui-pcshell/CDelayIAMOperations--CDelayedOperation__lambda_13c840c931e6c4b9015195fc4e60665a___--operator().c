/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_13c840c931e6c4b9015195fc4e60665a___::operator() @ 0x180019AC0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_9d6f2ab046dcca2ddf8fd17dd77b3b86___ @ 0x18001B60C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_9d6f2ab046dcca2ddf8fd17dd77b3b86___.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800260C4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CDelayIAMOperations::CDelayedOperation__lambda_13c840c931e6c4b9015195fc4e60665a___::operator()(
        __int64 a1)
{
  __int64 v2; // rcx
  PSRWLOCK v3; // rdi
  PVOID Ptr; // rbx
  int v5; // edi
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9[2]; // [rsp+20h] [rbp-38h]
  PVOID v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+20h]
  __int64 v13; // [rsp+80h] [rbp+28h] BYREF
  __int64 v14; // [rsp+88h] [rbp+30h] BYREF
  __int64 *v15; // [rsp+90h] [rbp+38h]
  PVOID v16; // [rsp+98h] [rbp+40h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_QWORD *)(a1 + 16);
  v13 = v2;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v2 = v13;
  }
  v15 = &v13;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  v16 = Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v10 = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v11 = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v6 = (unsigned int)v3[13].Ptr;
    *(_QWORD *)v9 = *(_QWORD *)Windows::Internal::ComTaskPool::WrapWithTask__lambda_9d6f2ab046dcca2ddf8fd17dd77b3b86___(
                                 &v14,
                                 &v10);
    v5 = Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, v6, 0LL);
    v7 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v10 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    if ( v2 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    v5 = -2147023728;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x10CF,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v5,
      v9[0]);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), (unsigned int)v5);
  }
}
