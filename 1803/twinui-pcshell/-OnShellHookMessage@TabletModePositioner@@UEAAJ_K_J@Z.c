/*
 * XREFs of ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x1802C9070
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18001F2C0 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1802C40FC (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1802C7B6C (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

__int64 __fastcall TabletModePositioner::OnShellHookMessage(TabletModePositioner *this, __int64 a2, HWND a3)
{
  CWinRTApplicationView **v3; // r14
  IUnknown *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 *v10; // rsi
  __int64 v11; // rbx
  int v12; // eax
  struct IApplicationView *v13; // rdx
  __int64 v14; // rbx
  int v15; // eax
  int inited; // eax
  __int64 v17; // rdx
  ApplicationViewHelpers *v18; // [rsp+20h] [rbp-10h] BYREF
  __int64 v19; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct IUnknown *v21; // [rsp+60h] [rbp+30h] BYREF
  __int64 v22; // [rsp+78h] [rbp+48h] BYREF

  v3 = (CWinRTApplicationView **)((char *)this + 120);
  if ( *((_QWORD *)this + 15) )
  {
    v5 = (IUnknown *)((char *)this - 168);
    if ( !TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 168)) )
    {
      v7 = 1309LL;
LABEL_4:
      v8 = -2147019873;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)0x8007139FLL);
      return v8;
    }
    v10 = (__int64 *)(v6 + 112);
    v11 = *(_QWORD *)(v6 + 112);
    if ( !v11 )
    {
      v7 = 1310LL;
      goto LABEL_4;
    }
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
    v12 = (*(__int64 (__fastcall **)(__int64, ApplicationViewHelpers **))(*(_QWORD *)v11 + 120LL))(v11, &v18);
    v8 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x521,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v12);
LABEL_21:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
      return v8;
    }
    if ( a3 == ApplicationViewHelpers::GetWindowForView(
                 (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v18,
                 v13) )
    {
      v19 = *v10;
      v14 = v19;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v19);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
      v22 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 40LL))(v14, &v22);
      v8 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x52D,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v15);
LABEL_20:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        goto LABEL_21;
      }
      v21 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      inited = TabletModePositioner::InitLayoutOperationHelper(
                 v5,
                 &CLSID_TabletModePositionerOperation,
                 &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
                 (void **)&v21);
      v8 = inited;
      if ( inited < 0 )
      {
        v17 = 1328LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)inited);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
        goto LABEL_20;
      }
      inited = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64))v21->lpVtbl[2].AddRef)(v21, v22, 4LL);
      v8 = inited;
      if ( inited < 0 )
      {
        v17 = 1329LL;
        goto LABEL_19;
      }
      inited = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)v5, v21);
      v8 = inited;
      if ( inited < 0 )
      {
        v17 = 1330LL;
        goto LABEL_19;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
  }
  return 0LL;
}
