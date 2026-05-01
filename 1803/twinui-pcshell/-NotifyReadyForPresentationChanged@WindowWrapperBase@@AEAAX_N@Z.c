/*
 * XREFs of ?NotifyReadyForPresentationChanged@WindowWrapperBase@@AEAAX_N@Z @ 0x1801F2950
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_df930b25f2cfeb57d32c66b706a0431a__void_bool_::_Do_call @ 0x1801F4800 (std--_Func_impl_no_alloc__lambda_df930b25f2cfeb57d32c66b706a0431a__void_bool_--_Do_call.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e6576d5e67104240e8cccb7cd2bd69c_____lambda_6e6576d5e67104240e8cccb7cd2bd69c___ @ 0x1801EE8F4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6e6576d5e6710.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e4ee804990591e655a0497df19d4e172___ @ 0x1801EF6E0 (Windows--Internal--ComTaskPool--QueueTask__lambda_e4ee804990591e655a0497df19d4e172___.c)
 *     ??0?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802233CC (--0-$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_pol.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall WindowWrapperBase::NotifyReadyForPresentationChanged(WindowWrapperBase *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  struct Windows::Internal::IComPoolTask **v8; // rax
  struct Windows::Internal::IComPoolTask *v9; // rbx
  __int64 v10; // rcx
  int v11; // ebx
  WindowWrapperBase *v12; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  char v14; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v16; // [rsp+70h] [rbp+20h] BYREF
  __int64 v17; // [rsp+80h] [rbp+30h] BYREF
  struct Windows::Internal::IComPoolTask *v18; // [rsp+88h] [rbp+38h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 176LL))(*((_QWORD *)this + 39));
  if ( a2 )
  {
    if ( !*((_BYTE *)this + 212) )
    {
      *((_BYTE *)this + 212) = 1;
      v16 = *((int *)this + 82);
      v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_e4ee804990591e655a0497df19d4e172___(
             v5,
             v4,
             *((_DWORD *)this + 119),
             &v16);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          2066LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v6);
    }
  }
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
    &v17,
    (char *)this + 40);
  v12 = this;
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,wil::err_exception_policy>(
    &v13,
    v17);
  v14 = a2;
  v7 = *((_DWORD *)this + 119);
  v8 = (struct Windows::Internal::IComPoolTask **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e6576d5e67104240e8cccb7cd2bd69c_____lambda_6e6576d5e67104240e8cccb7cd2bd69c___(
                                                    &v16,
                                                    (__int64)&v12);
  v9 = *v8;
  v18 = *v8;
  *v8 = 0LL;
  v10 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = Windows::Internal::ComTaskPool::RunTask(3u, 2u, v7, 0, v9, 0LL);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease((void **)&v18);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v13);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2079LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v11);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v17);
}
