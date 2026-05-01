/*
 * XREFs of ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1802C5080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800F6188 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801AD200 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18028C50C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18028C5A0 (--1-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18028C828 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18028CEFC (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ @ 0x1802C4BC4 (-CancelMoveSizeOperationForOperableView@TabletModePositioner@@AEAAJXZ.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1802C5C5C (-CreateAndInitApplicationViewOperation@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIAp.c)
 *     ?GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1802C71E0 (-GetScaleFactor@TabletModePositioner@@AEAAJPEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1802C801C (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1802CA070 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1802CBC8C (-StartActivity@TMPControlGained@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONE.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1802CE3BC (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1802CE6EC (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 */

void __fastcall TabletModePositioner::ControlGained(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  int v7; // eax
  bool v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct IApplicationView *v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  struct IApplicationView *v16; // rcx
  int inited; // eax
  __int64 v18; // rbx
  struct IApplicationViewOperation *v19; // rbx
  int v20; // eax
  int ScaleFactor; // eax
  int v22; // eax
  __int64 v23; // rdx
  bool IsEmpty; // al
  struct tagRECT *p_rc; // r9
  struct IUnknown *v26; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v27; // [rsp+38h] [rbp-C8h] BYREF
  enum DEVICE_SCALE_FACTOR v28[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-B8h] BYREF
  struct IApplicationViewOperation *v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v34[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v34,
    (__int64)"TMPControlGained");
  v34[0] = &TabletModeTraceLogging::TMPControlGained::`vftable';
  TabletModeTraceLogging::TMPControlGained::StartActivity(v34, a2, a3);
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &v29);
  if ( v29 == *(_DWORD *)(a1 + 108) )
  {
    v26 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v26);
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)a2 + 32LL))(
           a2,
           0LL,
           &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
           &v26);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        923LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v7);
LABEL_46:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v26);
      goto LABEL_47;
    }
    if ( ((int (__fastcall *)(struct IUnknown *, int *))v26->lpVtbl[9].QueryInterface)(v26, &v31) < 0 || !v31 )
      goto LABEL_46;
    v32 = 0LL;
    v8 = 1;
    v9 = 0LL;
    rc = 0LL;
    if ( a3 != 3 )
    {
      if ( a3 != 5 )
        goto LABEL_40;
      v30 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
      inited = TabletModePositioner::CreateAndInitApplicationViewOperation(v16, &v30);
      if ( inited >= 0 )
      {
        v18 = *(_QWORD *)(a1 + 208);
        v27 = 0LL;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v27);
        if ( (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v18 + 72LL))(v18, &v27) >= 0 )
          v8 = (unsigned int)SHIsSameObject(v27, v26) != 0;
        v19 = v30;
        (*(void (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v30 + 96LL))(v30, 0LL);
        v20 = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationViewOperation *))v26->lpVtbl[13].AddRef)(
                v26,
                v19);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            986LL,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v20);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v27);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          973LL,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
      }
      ((void (__fastcall *)(struct IUnknown *, struct tagRECT *))v26->lpVtbl[5].AddRef)(v26, &rc);
      OffsetRect(&rc, -rc.left, -rc.top);
      v28[0] = SCALE_100_PERCENT;
      ScaleFactor = TabletModePositioner::GetScaleFactor((TabletModePositioner *)(a1 - 128), v28);
      if ( ScaleFactor < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          997LL,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)ScaleFactor);
      rc.right += 2 * (v28[0] * GetSystemMetrics(5) / -100);
      rc.bottom += 2 * (v28[0] * GetSystemMetrics(6) / -100);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
LABEL_36:
      if ( !v8 )
        goto LABEL_45;
      if ( v9 )
      {
        v22 = TabletModePositioner::SwitchToCustomLayoutHelper(a1 - 128, v9);
        if ( v22 < 0 )
        {
          v23 = 1006LL;
LABEL_44:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            v23,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v22);
        }
LABEL_45:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
        goto LABEL_46;
      }
LABEL_40:
      IsEmpty = Geometry::CRect::IsEmpty((Geometry::CRect *)&rc);
      p_rc = &rc;
      if ( IsEmpty )
        p_rc = 0LL;
      v22 = TabletModePositioner::SwitchToAppHelper(a1 - 128, v26, 2LL, p_rc, 0LL);
      if ( v22 >= 0 )
        goto LABEL_45;
      v23 = 1013LL;
      goto LABEL_44;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(
      (CWinRTApplicationView **)(a1 + 144),
      (CWinRTApplicationView **)&v26);
    v10 = *(_QWORD *)(a1 + 136);
    if ( v10 && (*(unsigned int (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v10 + 184LL))(v10, v26) )
    {
      Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v32, (__int64 *)(a1 + 136));
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 136));
      v9 = v32;
    }
    v11 = *(_QWORD *)(a1 + 208);
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v27);
    if ( (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v11 + 72LL))(v11, &v27) < 0
      || (unsigned int)SHIsSameObject(v27, v26) )
    {
LABEL_24:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v27);
      goto LABEL_36;
    }
    *(_QWORD *)v28 = 0LL;
    v8 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v28);
    v13 = TabletModePositioner::CreateAndInitApplicationViewOperation(v12, (struct IApplicationViewOperation **)v28);
    if ( v13 >= 0 )
    {
      v15 = *(_QWORD *)v28;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v28 + 96LL))(*(_QWORD *)v28, 0LL);
      v13 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v26->lpVtbl[13].AddRef)(v26, v15);
      if ( v13 >= 0 )
      {
LABEL_23:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v28);
        goto LABEL_24;
      }
      v14 = 965LL;
    }
    else
    {
      v14 = 959LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v14,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_23;
  }
  if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
    DwmpEndTransitionRequest(91LL);
  TabletModePositioner::SetTabletMode(a1 - 128, v29);
  if ( (int)TabletModePositioner::CancelMoveSizeOperationForOperableView((TabletModePositioner *)(a1 - 128)) < 0 )
  {
    v6 = TabletModePositioner::InitializeAppLayoutForTabletModeEntry((TabletModePositioner *)(a1 - 128));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        902LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v6);
  }
  *(_BYTE *)(a1 + 112) = 1;
LABEL_47:
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v34);
  v34[0] = &TabletModeTraceLogging::TMPControlGained::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v34);
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v34);
}
