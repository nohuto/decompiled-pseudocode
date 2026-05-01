/*
 * XREFs of ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1802C8180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18007C640 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x1802841B0 (-IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x1802C3F60 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1802C5C5C (-CreateAndInitApplicationViewOperation@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIAp.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1802CE3BC (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 */

__int64 __fastcall TabletModePositioner::InitializePosition(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  PositionerPropertySetHelpers *v6; // rcx
  int DetailsForActivation; // eax
  unsigned int v8; // ebx
  struct IApplicationView *v10; // rcx
  int inited; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-8h]
  int v21; // [rsp+3Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IUnknown v23; // [rsp+78h] [rbp+38h] BYREF

  if ( IsPeopleExperienceHostView(a2) )
    return 0LL;
  v19 = 0LL;
  v20 = 0;
  v21 = 0;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v6,
                           (struct IApplicationView *)a3,
                           &v23,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v19);
  v8 = DetailsForActivation;
  if ( DetailsForActivation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27D,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation);
    return v8;
  }
  if ( ((__int64)v23.lpVtbl & 3) != 0 )
  {
    v23.lpVtbl = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    inited = TabletModePositioner::CreateAndInitApplicationViewOperation(v10, (struct IApplicationViewOperation **)&v23);
    v12 = inited;
    if ( inited < 0 )
    {
      v13 = 645LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)inited);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
      return v12;
    }
    lpVtbl = v23.lpVtbl;
    inited = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))v23.lpVtbl->QueryInterface + 6))(
               v23.lpVtbl,
               3LL);
    v12 = inited;
    if ( inited < 0 )
    {
      v13 = 646LL;
      goto LABEL_14;
    }
    inited = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, __int64))lpVtbl->QueryInterface + 9))(lpVtbl, 1LL);
    v12 = inited;
    if ( inited < 0 )
    {
      v13 = 647LL;
      goto LABEL_14;
    }
    inited = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IUnknownVtbl *))(*(_QWORD *)a2 + 320LL))(
               a2,
               lpVtbl);
    v12 = inited;
    if ( inited < 0 )
    {
      v13 = 648LL;
      goto LABEL_14;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    goto LABEL_24;
  }
  v23.lpVtbl = 0LL;
  v15 = v19;
  if ( v19
    && (v16 = *((_QWORD *)this + 26),
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v23),
        (*(int (__fastcall **)(__int64, __int64, struct IUnknown *))(*(_QWORD *)v16 + 48LL))(v16, v15, &v23) >= 0) )
  {
    v17 = TabletModePositioner::AppToAppSwitchHelper((IUnknown *)this - 16, (__int64)v23.lpVtbl, v20, (__int64)a2, v21);
    v8 = v17;
    if ( v17 < 0 )
    {
      v18 = 656LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v23);
      return v8;
    }
  }
  else
  {
    v17 = TabletModePositioner::SwitchToAppHelper((char *)this - 128, a2, 0LL, 0LL, 0LL);
    v8 = v17;
    if ( v17 < 0 )
    {
      v18 = 661LL;
      goto LABEL_22;
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v23);
LABEL_24:
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)this + 21, a2);
  return 0LL;
}
