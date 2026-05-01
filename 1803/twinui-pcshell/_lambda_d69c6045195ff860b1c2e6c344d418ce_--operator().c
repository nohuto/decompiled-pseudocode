/*
 * XREFs of _lambda_d69c6045195ff860b1c2e6c344d418ce_::operator() @ 0x1801F1304
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d69c6045195ff860b1c2e6c344d418ce___::Run @ 0x1801F3280 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d69c6045195ff860b1c2e6c344d418ce___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z @ 0x180180A54 (--4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_8fc892d76078465b937591a5e1afd338___1_Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_8fc892d76078465b937591a5e1afd338___1_Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x1801EF9A0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyncOperationCom.c)
 *     ??0?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802233CC (--0-$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_pol.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_d69c6045195ff860b1c2e6c344d418ce_::operator()(_QWORD *a1)
{
  __int64 v2; // rsi
  int AgileReference; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rcx
  int v8; // eax
  RTL_SRWLOCK *v9; // rbx
  void *v10; // rax
  RTL_SRWLOCK *v11; // rsi
  int v12; // eax
  wil *v13; // rcx
  const char *v15; // r9
  PSRWLOCK SRWLock[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-30h] BYREF
  __int64 v18[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v22; // [rsp+70h] [rbp+8h]
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  try
  {
    v24 = 0LL;
    v2 = a1[1];
    if ( v2 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v24);
      v23 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v23);
      AgileReference = RoGetAgileReference(0LL, &GUID_067c572c_3d80_58c9_807a_311aafdc58b6, v2, &v23);
      if ( AgileReference >= 0 )
      {
        v4 = v24;
        v24 = v23;
        v23 = v4;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v23);
      if ( AgileReference < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          791LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)AgileReference);
    }
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*a1 + 312LL) + 152LL))(*(_QWORD *)(*a1 + 312LL), SRWLock);
    v5 = *a1;
    if ( !*(_QWORD *)(*a1 + 104LL) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        796LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8007139FLL);
    if ( *(_BYTE *)(v5 + 236) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        799LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8000000ALL);
    if ( *(_DWORD *)(v5 + 464) != 4 || *(_DWORD *)(v5 + 468) != 4 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        808LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8007139FLL);
    v23 = 0LL;
    v7 = *(_QWORD *)(v5 + 336);
    v23 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 464LL))(v7, 0LL, &v23);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        811LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v8);
    wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
      &v25,
      *a1);
    v17 = *a1;
    wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
      v18,
      v25);
    v9 = 0LL;
    v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = 0LL;
    if ( v10 )
    {
      v9 = (RTL_SRWLOCK *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus____ptr64_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_8fc892d76078465b937591a5e1afd338___1_Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_8fc892d76078465b937591a5e1afd338___1_Windows::Foundation::IAsyncOperation_bool______ptr64_enum_ABI::Windows::Foundation::AsyncStatus_(
                            (__int64)v10,
                            &v17);
      v11 = v9;
    }
    SRWLock[2] = v9;
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v18);
    v12 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *))(*(_QWORD *)v23 + 48LL))(v23, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        822LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v12);
    *(_BYTE *)(*a1 + 236LL) = 1;
    AgileGitPtr::operator=((__int64 *)(*a1 + 240LL), &v24);
    if ( v11 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v11->Ptr + 2))(v11);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v25);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v23);
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v24);
  }
  catch ( ... )
  {
    *(_DWORD *)a1[2] = wil::ResultFromCaughtException(v13);
    v15 = (const char *)*(unsigned int *)a1[2];
    v22 = (unsigned int)v15;
    if ( (int)v15 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x342,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v15);
    return v22;
  }
  return 0LL;
}
