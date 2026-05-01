/*
 * XREFs of ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1802C55A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18007C640 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18010618C (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x1802841B0 (-IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x1802C3F60 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802C98E4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@wil@@C.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1802CE3BC (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 */

__int64 __fastcall TabletModePositioner::ControlGainedForActivation(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        struct IApplicationView *a4)
{
  CWinRTApplicationView **v5; // rbx
  CWinRTApplicationView **v9; // rcx
  PositionerPropertySetHelpers *v10; // rcx
  int DetailsForActivation; // ebx
  __int64 v12; // rdx
  char lpVtbl; // bl
  const struct _GUID *v15; // rdx
  __int64 v16; // rcx
  int Instance; // eax
  int v18; // eax
  int v19; // eax
  CWinRTApplicationView *v20; // r14
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  void *v24; // [rsp+30h] [rbp-20h] BYREF
  struct IUnknown *v25; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-10h]
  int v27; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IUnknown v29; // [rsp+70h] [rbp+20h] BYREF

  v5 = (CWinRTApplicationView **)(a1 + 168);
  if ( (unsigned int)SHIsSameObject(a2, *(struct IUnknown **)(a1 + 168)) )
  {
    v9 = v5;
LABEL_37:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v9);
    return 0LL;
  }
  if ( !IsPeopleExperienceHostView((struct IApplicationView *)a2) )
  {
    v25 = 0LL;
    v26 = 0;
    v27 = 0;
    DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                             v10,
                             a4,
                             &v29,
                             (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v25);
    if ( DetailsForActivation < 0 )
    {
      v12 = 694LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)DetailsForActivation);
      return (unsigned int)DetailsForActivation;
    }
    lpVtbl = (char)v29.lpVtbl;
    if ( ((__int64)v29.lpVtbl & 1) == 0 )
    {
      if ( ((__int64)v29.lpVtbl & 0x10) != 0 )
      {
        DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[9].AddRef)(a2, 1LL);
        if ( DetailsForActivation < 0 )
        {
          v12 = 702LL;
          goto LABEL_6;
        }
        return 0LL;
      }
      wil::Feature<__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch>::ReportUsageToService();
      if ( (lpVtbl & 2) != 0 )
      {
        DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[9].AddRef)(a2, 1LL);
        if ( DetailsForActivation < 0 )
        {
          v12 = 717LL;
          goto LABEL_6;
        }
        DetailsForActivation = ((__int64 (__fastcall *)(struct IUnknown *))a2->lpVtbl[14].Release)(a2);
        if ( DetailsForActivation < 0 )
        {
          v12 = 718LL;
          goto LABEL_6;
        }
        return 0LL;
      }
      if ( (*(unsigned int (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a1 + 120) + 184LL))(
             *(_QWORD *)(a1 + 120),
             a2) )
      {
        ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl[2].QueryInterface)(a2);
        return 0LL;
      }
      v29.lpVtbl = 0LL;
      if ( a3 == 5 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
        Instance = CEnumerableObjectCollection::CreateInstance(v16, v15, (void **)&v29.lpVtbl);
        DetailsForActivation = Instance;
        if ( Instance >= 0 )
        {
          v25 = a2;
          Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v25);
          v18 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, struct IUnknown *))v29.lpVtbl->QueryInterface + 5))(
                  v29.lpVtbl,
                  a2);
          DetailsForActivation = v18;
          if ( v18 >= 0 )
          {
            v24 = 0LL;
            Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v24);
            v19 = (*(__int64 (__fastcall **)(struct IUnknownVtbl *, GUID *, void **))v29.lpVtbl->QueryInterface)(
                    v29.lpVtbl,
                    &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                    &v24);
            DetailsForActivation = v19;
            if ( v19 >= 0 )
            {
              (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a1 + 80LL))(a1, v24, 5LL);
              Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v24);
              Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v25);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
              return 0LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2E0,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v19);
            Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v24);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2DD,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v18);
          }
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v25);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2DA,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)Instance);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
        return (unsigned int)DetailsForActivation;
      }
      v20 = (CWinRTApplicationView *)v25;
      if ( v25
        && (v21 = *(_QWORD *)(a1 + 208),
            Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v29),
            (*(int (__fastcall **)(__int64, CWinRTApplicationView *, struct IUnknown *))(*(_QWORD *)v21 + 48LL))(
              v21,
              v20,
              &v29) >= 0) )
      {
        v22 = TabletModePositioner::AppToAppSwitchHelper(
                (IUnknown *)(a1 - 128),
                (__int64)v29.lpVtbl,
                v26,
                (__int64)a2,
                v27);
        DetailsForActivation = v22;
        if ( v22 < 0 )
        {
          v23 = 747LL;
LABEL_35:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v23,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v22);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v29);
          return (unsigned int)DetailsForActivation;
        }
      }
      else
      {
        v22 = TabletModePositioner::SwitchToAppHelper(a1 - 128, a2, 0LL, 0LL, 0LL);
        DetailsForActivation = v22;
        if ( v22 < 0 )
        {
          v23 = 752LL;
          goto LABEL_35;
        }
      }
      v9 = (CWinRTApplicationView **)&v29;
      goto LABEL_37;
    }
  }
  return 0LL;
}
