/*
 * XREFs of ?IsComponentAppView@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D6750
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D3130 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D3A80 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D3DE0 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D4080 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D4510 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 *     ?AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D4DC0 (-AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@Win.c)
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1801D9DD0 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall IsComponentAppView(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  const char *v12; // r9
  __int64 v13[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::ResultException *v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+58h] [rbp+10h] BYREF
  int v18; // [rsp+60h] [rbp+18h]
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v13[1] = -2LL;
  v16 = 0;
  v2 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, int *))(*(_QWORD *)a1 + 56LL))(
         a1,
         &v17);
  if ( v2 >= 0 )
  {
    if ( v17 != 3 )
      return v16;
    v13[0] = 0LL;
    v3 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, __int64 *))(*(_QWORD *)a1 + 64LL))(
           a1,
           v13);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        372LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
        (const char *)(unsigned int)v3);
LABEL_17:
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v13);
      return v16;
    }
    v19 = 0LL;
    v4 = 0;
    try
    {
      v5 = v19;
      v19 = 0LL;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v13[0])(
             v13[0],
             &GUID_43c44496_73a7_4b25_b876_1df2708e3e45,
             &v19);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          5691LL,
          (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
          (const char *)(unsigned int)v6);
    }
    catch ( wil::ResultException *v14 )
    {
      v12 = (const char *)*((unsigned int *)v14 + 7);
      v18 = (int)v12;
      if ( (int)v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          384LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
          v12);
      v4 = v18;
    }
    v7 = retaddr;
    if ( v4 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 216LL))(v19, &v16);
      v7 = retaddr;
      if ( v10 >= 0 )
      {
LABEL_16:
        wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v19);
        goto LABEL_17;
      }
      v8 = (unsigned int)v10;
      v9 = 389LL;
    }
    else
    {
      v8 = (unsigned int)v4;
      v9 = 387LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v7,
      v9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      (const char *)v8);
    goto LABEL_16;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    367LL,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
    (const char *)(unsigned int)v2);
  return v16;
}
