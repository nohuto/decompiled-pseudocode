/*
 * XREFs of ?_GetApplicationViewUniqueId@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAI@Z @ 0x1801B1B4C
 * Callers:
 *     ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B21A4 (-_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F8454 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F8490 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$As@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AA27C (--$As@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@-$ComPtr@UIImmersiv.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HolographicPositioner::_GetApplicationViewUniqueId(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        unsigned int *a3)
{
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HolographicPositioner *v14; // [rsp+50h] [rbp+20h] BYREF
  CWinRTApplicationView *v15; // [rsp+58h] [rbp+28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+68h] [rbp+38h] BYREF

  v14 = this;
  *a3 = 0;
  v15 = a2;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v15);
  v17 = 0LL;
  v4 = Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v15, &v17);
  v14 = 0LL;
  if ( v4 >= 0 )
  {
    v5 = v17;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    v6 = (*(__int64 (__fastcall **)(__int64, HolographicPositioner **))(*(_QWORD *)v5 + 24LL))(v5, &v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x719,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_16;
    }
    v16 = 0LL;
    v8 = Microsoft::WRL::ComPtr<IImmersiveApplication>::As<Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow>(
           &v14,
           &v16);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 48LL))(v16, a3);
      v7 = v8;
      if ( v8 >= 0 )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        goto LABEL_16;
      }
      v9 = 1822LL;
    }
    else
    {
      v9 = 1820LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_9;
  }
  v10 = Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(&v15, (__int64 *)&v14);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(HolographicPositioner *, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v16);
    v7 = v10;
    if ( v10 >= 0 )
    {
      *a3 = v16;
      v7 = 0;
      goto LABEL_16;
    }
    v11 = 1831LL;
  }
  else
  {
    v11 = 1828LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v10);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
  return v7;
}
