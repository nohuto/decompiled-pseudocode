/*
 * XREFs of ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x18011F150
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006D604 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18008CBD0 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??1?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x180097C68 (--1-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_a0818f22e8da6413a11714d28d92e781___ @ 0x18009D2C0 (ShellPositionerHelpers--PerformCallbackOnView__lambda_a0818f22e8da6413a11714d28d92e781___.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_f1e02a3692b4c9337fd01f6030d19989___ @ 0x18009D438 (ShellPositionerHelpers--PerformCallbackOnView__lambda_f1e02a3692b4c9337fd01f6030d19989___.c)
 *     _lambda_a0818f22e8da6413a11714d28d92e781_::_lambda_a0818f22e8da6413a11714d28d92e781_ @ 0x18009D5B0 (_lambda_a0818f22e8da6413a11714d28d92e781_--_lambda_a0818f22e8da6413a11714d28d92e781_.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18011D248 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ??1DragComplete@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x18011DA5C (--1DragComplete@AppViewManagerTabTelemetry@@QEAA@XZ.c)
 *     _lambda_60cdd79d6ef93393eeddedcffed22f52_::operator() @ 0x18011DF60 (_lambda_60cdd79d6ef93393eeddedcffed22f52_--operator().c)
 *     ?DragTabComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x1801201E8 (-DragTabComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@AEBU_GUID@@.c)
 *     ?DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1801202C8 (-DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?StartActivity@DragComplete@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x180122050 (-StartActivity@DragComplete@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180122FCC (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180305708 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 */

__int64 __fastcall CAppViewManager::DragComplete(CAppViewManager *this, const struct _GUID *a2, struct tagPOINT a3)
{
  RTL_SRWLOCK *v5; // rbx
  int v6; // eax
  int v7; // edi
  __int64 v8; // rdi
  int v9; // eax
  struct IApplicationView **v10; // r9
  int ViewForApplication; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  RTL_SRWLOCK *v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rbx
  int v22; // eax
  struct IApplicationView *v23; // rbx
  IUnknown *v24; // rdi
  __int64 *v25; // rax
  struct IApplicationView *v27; // [rsp+38h] [rbp-D0h] BYREF
  struct IApplicationView *v28; // [rsp+40h] [rbp-C8h] BYREF
  CWinRTApplicationView *v29[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  struct IUnknown *v31[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+78h] [rbp-90h] BYREF
  struct tagPOINT v33; // [rsp+80h] [rbp-88h] BYREF
  struct _GUID v34; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v35; // [rsp+98h] [rbp-70h]
  char v36; // [rsp+A0h] [rbp-68h]
  __int64 v37; // [rsp+A8h] [rbp-60h]
  struct _GUID v38; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v39; // [rsp+C8h] [rbp-40h]
  _QWORD v40[40]; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+250h] [rbp+148h]

  v37 = -2LL;
  v33 = a3;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v40,
    (__int64)"DragComplete");
  v40[0] = &AppViewManagerTabTelemetry::DragComplete::`vftable';
  AppViewManagerTabTelemetry::DragComplete::StartActivity((AppViewManagerTabTelemetry::DragComplete *)v40, a2, &v33);
  v30 = 0LL;
  *(_QWORD *)&v38.Data1 = (char *)this - 56;
  *(_QWORD *)v38.Data4 = a2;
  v39 = &v30;
  v34 = v38;
  v35 = &v30;
  v36 = 1;
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64 *))(**((_QWORD **)this + 16) + 24LL))(
         *((_QWORD *)this + 16),
         a2,
         &v32);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x472,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    goto LABEL_35;
  }
  if ( (_DWORD)v32 )
  {
    v27 = 0LL;
    v8 = *((_QWORD *)this + 16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
    (*(void (__fastcall **)(__int64, const struct _GUID *, struct IApplicationView **))(*(_QWORD *)v8 + 64LL))(
      v8,
      a2,
      &v27);
    if ( v27 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v27, &v30);
      v9 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64))(**((_QWORD **)this + 16) + 48LL))(
             *((_QWORD *)this + 16),
             a2,
             1LL);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1148LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
  }
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  if ( !v30 )
  {
    (*(void (__fastcall **)(_QWORD, const struct _GUID *, struct _GUID *))(**((_QWORD **)this + 16) + 72LL))(
      *((_QWORD *)this + 16),
      a2,
      &v38);
    v15 = *(_QWORD *)&v38.Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&v38.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v15 = *(_QWORD *)v38.Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v15 )
      goto LABEL_37;
    v16 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64))(**((_QWORD **)this + 16) + 48LL))(
            *((_QWORD *)this + 16),
            a2,
            1LL);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1195LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v16);
    v28 = 0LL;
    v29[0] = 0LL;
    *(struct _GUID *)v31 = v38;
    v17 = *((_QWORD *)this + 18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v29);
    v18 = (*(__int64 (__fastcall **)(__int64, struct IUnknown **, CWinRTApplicationView **))(*(_QWORD *)v17 + 96LL))(
            v17,
            v31,
            v29);
    v7 = v18;
    if ( v18 < 0 )
    {
      v19 = (unsigned int)v18;
      v20 = 1200LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v29);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
      goto LABEL_35;
    }
    if ( v29[0] )
    {
      v21 = *((_QWORD *)this + 17);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
      v22 = (*(__int64 (__fastcall **)(__int64, CWinRTApplicationView *, struct IApplicationView **))(*(_QWORD *)v21 + 24LL))(
              v21,
              v29[0],
              &v28);
      v7 = v22;
      if ( v22 < 0 )
      {
        v19 = (unsigned int)v22;
        v20 = 1203LL;
        goto LABEL_34;
      }
      AppViewManagerTabTelemetry::DragComplete::DragTabComplete(
        (AppViewManagerTabTelemetry::DragComplete *)v40,
        v28,
        &v38);
      v23 = v28;
      v24 = (IUnknown *)*((_QWORD *)this + 8);
      v25 = lambda_a0818f22e8da6413a11714d28d92e781_::_lambda_a0818f22e8da6413a11714d28d92e781_(
              (__int64 *)v31,
              (__int64 *)&v28,
              (__int64 *)&v33);
      v7 = ShellPositionerHelpers::PerformCallbackOnView__lambda_a0818f22e8da6413a11714d28d92e781___(
             v24,
             (__int64)v23,
             v25);
      Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((CWinRTApplicationView **)v31);
      if ( v7 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v29);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
        goto LABEL_37;
      }
      v20 = 1223LL;
    }
    else
    {
      v7 = -2147023728;
      v20 = 1201LL;
    }
    v19 = (unsigned int)v7;
    goto LABEL_34;
  }
  v31[0] = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v30, (__int64 *)v31);
  v27 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *((IUnknown **)this + 8),
                         v31[0],
                         (struct IImmersiveApplication *)&v27,
                         v10);
  v7 = ViewForApplication;
  if ( ViewForApplication >= 0 )
  {
    AppViewManagerTabTelemetry::DragComplete::DragViewComplete((AppViewManagerTabTelemetry::DragComplete *)v40, v27);
    v29[0] = v27;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)v29);
    v29[1] = (CWinRTApplicationView *)v33;
    v7 = ShellPositionerHelpers::PerformCallbackOnView__lambda_f1e02a3692b4c9337fd01f6030d19989___(
           *((IUnknown **)this + 8),
           (__int64)v27,
           v29);
    Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>(v29);
    if ( v7 < 0 )
    {
      v12 = (unsigned int)v7;
      v13 = 1178LL;
      goto LABEL_14;
    }
    v14 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 552LL))(v30, 0LL);
    if ( v14 )
      ReleaseSRWLockExclusive(v14);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v31);
LABEL_37:
    wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v40);
    v7 = 0;
    goto LABEL_38;
  }
  v12 = (unsigned int)ViewForApplication;
  v13 = 1161LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)v12);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v31);
LABEL_35:
  v36 = 0;
  lambda_60cdd79d6ef93393eeddedcffed22f52_::operator()(&v34);
LABEL_38:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  AppViewManagerTabTelemetry::DragComplete::~DragComplete((AppViewManagerTabTelemetry::DragComplete *)v40);
  return (unsigned int)v7;
}
