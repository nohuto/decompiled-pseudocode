/*
 * XREFs of ?IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView@@PEAPEAU3@@Z @ 0x1802D35C8
 * Callers:
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1802C63A0 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F8490 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x180283C34 (-GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIAppli.c)
 */

__int64 __fastcall ScreenManagerHelpers::IsRelatedWin32ViewPresentInLayout(
        ScreenManagerHelpers *this,
        struct IAppLayout *a2,
        struct IApplicationView *a3,
        struct IApplicationView **a4)
{
  int ApplicationViewsFromLayout; // edi
  int v8; // eax
  CWinRTApplicationView *v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  DWORD WindowThreadProcessId; // edi
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h] BYREF
  struct IApplicationView *v16; // [rsp+30h] [rbp-30h] BYREF
  HWND v17; // [rsp+38h] [rbp-28h] BYREF
  _WORD *v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v22; // [rsp+98h] [rbp+38h] BYREF
  HWND hWnd; // [rsp+A0h] [rbp+40h] BYREF
  CWinRTApplicationView *v24; // [rsp+A8h] [rbp+48h] BYREF

  *(_QWORD *)a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  ApplicationViewsFromLayout = (**(__int64 (__fastcall ***)(struct IAppLayout *, GUID *, __int64 *))a2)(
                                 a2,
                                 &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
                                 &v14);
  if ( ApplicationViewsFromLayout >= 0 )
  {
    if ( !(*(unsigned int (__fastcall **)(ScreenManagerHelpers *))(*(_QWORD *)this + 48LL))(this) )
    {
      ApplicationViewsFromLayout = -2147019873;
      goto LABEL_23;
    }
    v24 = 0LL;
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
    ApplicationViewsFromLayout = TabletModePositionerHelpers::GetApplicationViewsFromLayout(
                                   this,
                                   (struct IAppLayout *)&hWnd,
                                   (unsigned int *)&v24,
                                   &v16);
    if ( ApplicationViewsFromLayout < 0 )
    {
LABEL_22:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v24);
      goto LABEL_23;
    }
    v15 = 0LL;
    ApplicationViewsFromLayout = Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(&v24, &v15);
    if ( ApplicationViewsFromLayout < 0 )
    {
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      goto LABEL_22;
    }
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v22 = 0;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v18);
    v19 = -1LL;
    v20 = -1LL;
    v8 = (*(__int64 (__fastcall **)(struct IAppLayout *, _WORD **))(*(_QWORD *)a2 + 136LL))(a2, &v18);
    v9 = v24;
    if ( v8 >= 0
      && v18
      && *v18
      && (*(int (__fastcall **)(CWinRTApplicationView *, _WORD *, int *))(*(_QWORD *)v24 + 152LL))(v24, v18, &v22) >= 0
      && v22 )
    {
      v10 = (**(__int64 (__fastcall ***)(CWinRTApplicationView *, GUID *, struct IApplicationView *))v9)(
              v9,
              &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
              a3);
      ApplicationViewsFromLayout = v10;
      if ( v10 < 0 )
      {
        v11 = 38LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
          (const char *)(unsigned int)v10);
      }
    }
    else
    {
      hWnd = 0LL;
      v17 = 0LL;
      ApplicationViewsFromLayout = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v15 + 24LL))(v15, &hWnd);
      if ( ApplicationViewsFromLayout < 0 )
        goto LABEL_20;
      ApplicationViewsFromLayout = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v14 + 24LL))(v14, &v17);
      if ( ApplicationViewsFromLayout < 0 )
        goto LABEL_20;
      WindowThreadProcessId = GetWindowThreadProcessId(hWnd, 0LL);
      if ( WindowThreadProcessId != GetWindowThreadProcessId(v17, 0LL) )
      {
        ApplicationViewsFromLayout = -2147467259;
        goto LABEL_20;
      }
      v10 = (**(__int64 (__fastcall ***)(CWinRTApplicationView *, GUID *, struct IApplicationView *))v9)(
              v9,
              &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
              a3);
      ApplicationViewsFromLayout = v10;
      if ( v10 < 0 )
      {
        v11 = 52LL;
        goto LABEL_18;
      }
    }
LABEL_20:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v18);
    goto LABEL_21;
  }
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return (unsigned int)ApplicationViewsFromLayout;
}
