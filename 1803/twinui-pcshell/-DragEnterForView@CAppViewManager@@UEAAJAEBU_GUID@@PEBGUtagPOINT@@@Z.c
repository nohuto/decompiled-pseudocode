/*
 * XREFs of ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x18011FB60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveApplication@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006D604 (--$As@UIImmersiveApplication@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x1800810EC (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 *     ??0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z @ 0x180081130 (--0CAutoApplicationCreationResourceGuarantee@@QEAA@PEAUIIAMServiceProvider@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18011D248 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ??1DragEnterForView@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x18011DAAC (--1DragEnterForView@AppViewManagerTabTelemetry@@QEAA@XZ.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x18011EC4C (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ?SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@Internal@Windows@@PEAUHWND__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z @ 0x1801217D4 (-SetSourceViewSizePreference@ViewSizePreferenceHelpers@@YAJAEAVPropertySetHelper@ShellHelpers@In.c)
 *     ?StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x180122278 (-StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180122FCC (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?_CheckTabletMode@CAppViewManager@@AEAAJXZ @ 0x1801258B8 (-_CheckTabletMode@CAppViewManager@@AEAAJXZ.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180126678 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 */

__int64 __fastcall CAppViewManager::DragEnterForView(
        CAppViewManager *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        struct tagPOINT a4)
{
  int v7; // ebx
  int v8; // esi
  RTL_SRWLOCK *v9; // rbx
  int v10; // eax
  int v11; // edi
  int ViewForSwitchInternal; // eax
  __int64 v13; // rdi
  int v14; // eax
  RTL_SRWLOCK *v15; // rbx
  __int64 v16; // rsi
  int v17; // eax
  RTL_SRWLOCK *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  RTL_SRWLOCK *v24; // rbx
  int v25; // eax
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  int v28[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  struct IIAMServiceProvider *v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+60h] [rbp-A0h] BYREF
  struct tagPOINT v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  const struct _GUID *v36; // [rsp+78h] [rbp-88h]
  CApplicationFrameService *v37; // [rsp+80h] [rbp-80h] BYREF
  char *v38; // [rsp+88h] [rbp-78h]
  __int64 v39; // [rsp+90h] [rbp-70h]
  _QWORD v40[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v39 = -2LL;
  v36 = a2;
  v34 = a4;
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v40,
    (__int64)"DragEnterForView");
  v40[0] = &AppViewManagerTabTelemetry::DragEnterForView::`vftable';
  AppViewManagerTabTelemetry::DragEnterForView::StartActivity(
    (AppViewManagerTabTelemetry::DragEnterForView *)v40,
    a3,
    a2,
    &v34);
  v7 = CAppViewManager::_CheckTabletMode((CAppViewManager *)((char *)this - 56));
  v8 = 0;
  if ( v7 >= 0 )
  {
    v9 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v10 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 16) + 24LL))(
            *((_QWORD *)this + 16),
            a2,
            &v33);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BC,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v10);
      if ( v9 )
        ReleaseSRWLockShared(v9);
      goto LABEL_5;
    }
    if ( v9 )
      ReleaseSRWLockShared(v9);
    if ( !v33 )
    {
      *(_QWORD *)v28 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v28);
      ViewForSwitchInternal = CAppViewManager::_GetViewForSwitchInternal((char *)this - 56, 0LL, a3);
      v7 = ViewForSwitchInternal;
      if ( ViewForSwitchInternal < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C4,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)ViewForSwitchInternal);
LABEL_11:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v28);
        goto LABEL_48;
      }
      v29 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      v13 = *(_QWORD *)v28;
      v14 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v28)(
              *(_QWORD *)v28,
              &GUID_068fc85a_d4d0_45b0_ab39_311de750a277,
              &v29);
      v7 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C6,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v14);
LABEL_14:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
        goto LABEL_11;
      }
      v27 = 0LL;
      v31 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
      (***((void (__fastcall ****)(_QWORD, GUID *, struct IIAMServiceProvider **))this + 8))(
        *((_QWORD *)this + 8),
        &GUID_5f75d642_3fd3_46f6_86d3_a4aee3c0ffee,
        &v31);
      CAutoApplicationCreationResourceGuarantee::CAutoApplicationCreationResourceGuarantee(
        (CAutoApplicationCreationResourceGuarantee *)&v37,
        v31);
      if ( (int)v38 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          977LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v38);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 24LL))(v29, &v35);
      v15 = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v16 = *((_QWORD *)this + 8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      v17 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, __int64, __int64 *))(*(_QWORD *)v16 + 168LL))(
              v16,
              a3,
              v35,
              &v27);
      v8 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D6,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v17);
        if ( v15 )
          ReleaseSRWLockExclusive(v15);
        CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee(&v37);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v28);
        goto LABEL_47;
      }
      v8 = 0;
      if ( v15 )
        ReleaseSRWLockExclusive(v15);
      CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee(&v37);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
      v18 = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 384LL))(v13);
      if ( !v20 )
      {
        v11 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E9,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)0x8000FFFFLL);
        if ( v18 )
          ReleaseSRWLockExclusive(v18);
LABEL_26:
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 176LL))(*((_QWORD *)this + 8), v27);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v28);
LABEL_5:
        v7 = v11;
        goto LABEL_48;
      }
      LOBYTE(v19) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 552LL))(v27, v19);
      if ( v18 )
        ReleaseSRWLockExclusive(v18);
      v30 = 0LL;
      v21 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v30);
      v7 = v21;
      if ( v21 < 0 )
      {
        v22 = 1012LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v21);
LABEL_32:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 176LL))(*((_QWORD *)this + 8), v27);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
        goto LABEL_14;
      }
      v21 = ViewSizePreferenceHelpers::SetSourceViewSizePreference(&v30, v20, 0LL);
      v7 = v21;
      if ( v21 < 0 )
      {
        v22 = 1014LL;
        goto LABEL_31;
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 8) + 152LL))(
              *((_QWORD *)this + 8),
              v27,
              v30);
      v7 = v21;
      if ( v21 < 0 )
      {
        v22 = 1018LL;
        goto LABEL_31;
      }
      v32 = 0LL;
      v23 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication>(&v27, &v32);
      v7 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3FF,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v23);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
        goto LABEL_32;
      }
      v24 = CApplicationManagerUtility::g_pIAMGlobals;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v25 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, __int64))(**((_QWORD **)this + 16) + 32LL))(
              *((_QWORD *)this + 16),
              v36,
              v32);
      v11 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x401,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v25);
        if ( v24 )
          ReleaseSRWLockExclusive(v24);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
        goto LABEL_26;
      }
      if ( v24 )
        ReleaseSRWLockExclusive(v24);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v28);
    }
    wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v40);
LABEL_47:
    v7 = v8;
  }
LABEL_48:
  AppViewManagerTabTelemetry::DragEnterForView::~DragEnterForView((AppViewManagerTabTelemetry::DragEnterForView *)v40);
  return (unsigned int)v7;
}
