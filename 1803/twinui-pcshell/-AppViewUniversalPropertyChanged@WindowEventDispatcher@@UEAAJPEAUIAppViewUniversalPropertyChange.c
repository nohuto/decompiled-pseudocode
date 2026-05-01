/*
 * XREFs of ?AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D48E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18006FAA0 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAY0M@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAY0M@$$CBG@Z @ 0x1801D1580 (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1801D5858 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?GetEventRegistration@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@PEBG0@Z @ 0x1801D59B0 (-GetEventRegistration@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@V-$CRefCountedObject@UViewEventR.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WindowEventDispatcher::AppViewUniversalPropertyChanged(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *a2)
{
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 *EventRegistration; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  ViewEventArgsForPropertyChanged *v19; // rdx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  void *v23; // [rsp+20h] [rbp-78h] BYREF
  __int64 v24; // [rsp+28h] [rbp-70h] BYREF
  RTL_SRWLOCK *v25; // [rsp+30h] [rbp-68h] BYREF
  ViewEventArgsForPropertyChanged *v26; // [rsp+38h] [rbp-60h] BYREF
  __int64 v27; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28; // [rsp+48h] [rbp-50h] BYREF
  __int64 v29; // [rsp+50h] [rbp-48h] BYREF
  __int64 v30[8]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v32; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+20h] BYREF

  v30[1] = -2LL;
  try
  {
    v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
           a2,
           &v32);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        831LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v4);
    if ( v32 )
    {
      result = 0LL;
    }
    else
    {
      v28 = 0LL;
      v7 = (**(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *, GUID *, __int64 *))a2)(
             a2,
             &GUID_a5447aa8_063b_4ddc_8b81_021591a43bf1,
             &v28);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          841LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v7);
      v27 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 48LL))(v28, &v27);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          844LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 48LL))(v27, &v33);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          847LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v9);
      v30[0] = 0LL;
      v10 = 0LL;
      v29 = 0LL;
      AcquireSRWLockShared(this + 56);
      v25 = this + 56;
      WindowEventDispatcher::GetCachedView(&this[-2], &v34, v33);
      v11 = v34;
      v34 = 0LL;
      v30[0] = v11;
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v34);
      if ( v11 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 232LL))(v11);
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 224LL))(v11);
        EventRegistration = (__int64 *)WindowEventDispatcher::GetEventRegistration(&this[-2], &v34, v13, v12);
        v10 = *EventRegistration;
        *EventRegistration = 0LL;
        v29 = v10;
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v34);
      }
      if ( this != (RTL_SRWLOCK *)-448LL )
        ReleaseSRWLockShared(this + 56);
      v24 = 0LL;
      if ( v11 )
      {
        v24 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 192LL))(v11, &v24);
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            867LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)(unsigned int)v15);
        v25 = 0LL;
        v16 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
                v11,
                &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e,
                (__int64 *)&v25);
        if ( v16 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            5691LL,
            (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
            (const char *)(unsigned int)v16);
        if ( !v32 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 136LL))(v24, &v34);
          if ( v17 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              880LL,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v17);
          v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 160LL))(v11, (unsigned int)v34);
          if ( v18 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              881LL,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v18);
          v26 = 0LL;
          v20 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForPropertyChanged,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,unsigned short const (&)[12]>(
                  &v26,
                  v19);
          if ( v20 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              884LL,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v20);
          v23 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
          v21 = AgileGitPtr::CopyLocal((AgileGitPtr *)(v10 + 32), &GUID_d1b9407f_a351_5319_bce5_178ee5585391, &v23);
          if ( v21 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              887LL,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v21);
          v22 = (*(__int64 (__fastcall **)(void *, RTL_SRWLOCK *, ViewEventArgsForPropertyChanged *))(*(_QWORD *)v23 + 24LL))(
                  v23,
                  v25,
                  v26);
          if ( v22 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              888LL,
              (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
              (const char *)(unsigned int)v22);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
          wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v26);
        }
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v25);
      }
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v24);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v29);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v30);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v27);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v28);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x382,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v5);
  }
  return result;
}
