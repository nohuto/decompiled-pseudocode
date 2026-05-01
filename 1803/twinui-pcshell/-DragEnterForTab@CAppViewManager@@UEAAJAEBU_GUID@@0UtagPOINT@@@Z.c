/*
 * XREFs of ?DragEnterForTab@CAppViewManager@@UEAAJAEBU_GUID@@0UtagPOINT@@@Z @ 0x18011F660
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18011D248 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ??1DragEnterForTab@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x18011DA84 (--1DragEnterForTab@AppViewManagerTabTelemetry@@QEAA@XZ.c)
 *     ?DragEnterForTabAppId@DragEnterForTab@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@AEBU_GUID@@1I@Z @ 0x18011FA50 (-DragEnterForTabAppId@DragEnterForTab@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@AEB.c)
 *     ?StartActivity@DragEnterForTab@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x180122164 (-StartActivity@DragEnterForTab@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180122FCC (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?_CheckTabletMode@CAppViewManager@@AEAAJXZ @ 0x1801258B8 (-_CheckTabletMode@CAppViewManager@@AEAAJXZ.c)
 */

__int64 __fastcall CAppViewManager::DragEnterForTab(
        CAppViewManager *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        struct tagPOINT a4)
{
  int v7; // ebx
  RTL_SRWLOCK *v8; // rbx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rbx
  int v24; // eax
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  char v29[8]; // [rsp+48h] [rbp-B8h] BYREF
  struct IApplicationView *v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h]
  struct _GUID v34; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID v35; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v36; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v37[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v33 = -2LL;
  v32 = a4;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v37,
    (__int64)"DragEnterForTab");
  v37[0] = &AppViewManagerTabTelemetry::DragEnterForTab::`vftable';
  AppViewManagerTabTelemetry::DragEnterForTab::StartActivity(
    (AppViewManagerTabTelemetry::DragEnterForTab *)v37,
    a2,
    &v32);
  v7 = CAppViewManager::_CheckTabletMode((CAppViewManager *)((char *)this - 56));
  if ( v7 < 0 )
    goto LABEL_35;
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 16) + 24LL))(
         *((_QWORD *)this + 16),
         a2,
         &v31);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( v8 )
      ReleaseSRWLockShared(v8);
    if ( !v31 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, const struct _GUID *))(**((_QWORD **)this + 16)
                                                                                          + 40LL))(
              *((_QWORD *)this + 16),
              a2,
              a3);
      v7 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x41C,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v11);
        goto LABEL_35;
      }
    }
    v36 = *a3;
    v26 = 0LL;
    v34 = v36;
    v12 = *((_QWORD *)this + 18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    v13 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int64 *))(*(_QWORD *)v12 + 96LL))(v12, &v34, &v26);
    v7 = v13;
    if ( v13 < 0 )
    {
      v14 = (unsigned int)v13;
      v15 = 1058LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)v14);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      goto LABEL_35;
    }
    v16 = v26;
    if ( !v26 )
    {
      v7 = -2147023728;
      v14 = 2147943568LL;
      v15 = 1059LL;
      goto LABEL_13;
    }
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 136LL))(v16, &v27);
    v7 = v17;
    if ( v17 < 0 )
    {
      v18 = (unsigned int)v17;
      v19 = 1062LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)v18);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      goto LABEL_14;
    }
    v20 = v27;
    if ( !v27 )
    {
      v7 = -2147023728;
      v18 = 2147943568LL;
      v19 = 1063LL;
      goto LABEL_19;
    }
    v28 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    v21 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 56LL))(v20, &v28);
    v7 = v21;
    if ( v21 >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 56LL))(v28, v29);
      v7 = v21;
      if ( v21 >= 0 )
      {
        *(_QWORD *)&v35.Data1 = 0LL;
        *(_QWORD *)v35.Data4 = 0LL;
        v30 = 0LL;
        v23 = *((_QWORD *)this + 17);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v30);
        if ( (*(int (__fastcall **)(__int64, __int64, struct IApplicationView **))(*(_QWORD *)v23 + 24LL))(
               v23,
               v26,
               &v30) >= 0 )
          (*(void (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v27 + 48LL))(v27, &v35);
        AppViewManagerTabTelemetry::DragEnterForTab::DragEnterForTabAppId(
          (AppViewManagerTabTelemetry::DragEnterForTab *)v37,
          v30,
          &v36,
          &v35,
          v29[0]);
        if ( *(_DWORD *)v29 <= 1u
          || (v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 19) + 88LL))(
                      *((_QWORD *)this + 19),
                      v26,
                      0LL),
              v7 = v24,
              v24 >= 0) )
        {
          wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v37);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v30);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
          v7 = 0;
          goto LABEL_35;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x43D,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v24);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v30);
        goto LABEL_26;
      }
      v22 = 1069LL;
    }
    else
    {
      v22 = 1066LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v21);
LABEL_26:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x417,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v9);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  v7 = v10;
LABEL_35:
  AppViewManagerTabTelemetry::DragEnterForTab::~DragEnterForTab((AppViewManagerTabTelemetry::DragEnterForTab *)v37);
  return (unsigned int)v7;
}
