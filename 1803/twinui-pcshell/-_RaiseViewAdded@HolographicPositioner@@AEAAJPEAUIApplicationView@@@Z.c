/*
 * XREFs of ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B31DC
 * Callers:
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B1DE4 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIViewHostItem@Holographic@Shell@Internal@Windows@@@?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AA2B8 (--$As@UIViewHostItem@Holographic@Shell@Internal@Windows@@@-$ComPtr@VApplicationViewBackedViewHos.c)
 *     ??$As@UIViewHostItem@Holographic@Shell@Internal@Windows@@@?$ComPtr@VWin32BackedViewHostItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AA2EC (--$As@UIViewHostItem@Holographic@Shell@Internal@Windows@@@-$ComPtr@VWin32BackedViewHostItem@@@WR.c)
 *     ??$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAUIViewHostItem@Holographic@Shell@Internal@Windows@@AEBQEAVViewHostItemEventArgs@@@Z @ 0x1801AA49C (--$AsyncInvokeAll@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAVViewHostItemEventArg.c)
 *     ??$MakeAndInitialize@VApplicationViewBackedViewHostItem@@V1@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewBackedViewHostItem@@AEAPEAUIApplicationView@@@Z @ 0x1801AB364 (--$MakeAndInitialize@VApplicationViewBackedViewHostItem@@V1@AEAPEAUIApplicationView@@@Details@WR.c)
 *     ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@@012@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x1801AB638 (--$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holograp_ea_1801AB638.c)
 *     ??$MakeAndInitialize@VWin32BackedViewHostItem@@V1@AEAPEAUIApplicationView@@AEAPEAUHWND__@@PEAVHolographicPositioner@@@Details@WRL@Microsoft@@YAJPEAPEAVWin32BackedViewHostItem@@AEAPEAUIApplicationView@@AEAPEAUHWND__@@$$QEAPEAVHolographicPositioner@@@Z @ 0x1801AB674 (--$MakeAndInitialize@VWin32BackedViewHostItem@@V1@AEAPEAUIApplicationView@@AEAPEAUHWND__@@PEAVHo.c)
 *     wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd___ @ 0x1801AB93C (wil--ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd___.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2B8 (-InternalRelease@-$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF2D8 (-InternalRelease@-$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _LogEventWithViewHostItemData @ 0x1801B2B30 (_LogEventWithViewHostItemData.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::_RaiseViewAdded(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  struct IApplicationView *v13; // [rsp+28h] [rbp-28h] BYREF
  RTL_SRWLOCK *v14; // [rsp+30h] [rbp-20h] BYREF
  RTL_SRWLOCK *v15[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IApplicationView *v17; // [rsp+78h] [rbp+28h] BYREF
  Win32BackedViewHostItem *v18; // [rsp+80h] [rbp+30h] BYREF
  Win32BackedViewHostItem *v19; // [rsp+88h] [rbp+38h] BYREF

  v17 = a2;
  v15[2] = (RTL_SRWLOCK *)-2LL;
  v18 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
         &v12) < 0 )
  {
    v19 = 0LL;
    Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::InternalRelease((__int64 *)&v19);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewBackedViewHostItem,ApplicationViewBackedViewHostItem,IApplicationView * &>(
           (volatile signed __int64 **)&v19,
           &v17);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 1356LL;
      goto LABEL_8;
    }
    v7 = Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItem>(
           &v19,
           (__int64 *)&v18);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 1358LL;
      goto LABEL_8;
    }
    goto LABEL_14;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK **))(*(_QWORD *)v12 + 24LL))(v12, v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 1346LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_24;
  }
  v19 = 0LL;
  v14 = this;
  Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::InternalRelease((__int64 *)&v19);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Win32BackedViewHostItem,Win32BackedViewHostItem,IApplicationView * &,HWND__ * &,HolographicPositioner *>(
         &v19,
         &v17,
         (HWND *)v15,
         &v14);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v7 = Microsoft::WRL::ComPtr<Win32BackedViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItem>(
           &v19,
           (__int64 *)&v18);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 1351LL;
      goto LABEL_8;
    }
LABEL_14:
    Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::InternalRelease((__int64 *)&v19);
    v15[0] = this;
    v15[1] = (RTL_SRWLOCK *)&v18;
    v4 = wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd___(v15);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 1366LL;
      goto LABEL_16;
    }
    LogEventWithViewHostItemData(
      (__int64)v18,
      (void (__fastcall *)(PCWSTR *, char *))HolographicPositionerTelemetry::HolographicViewAdded<unsigned short const *,unsigned int &>);
    v13 = 0LL;
    v17 = 0LL;
    v9 = Microsoft::WRL::Details::MakeAndInitialize<ViewHostItemEventArgs,ViewHostItemEventArgs,enum Windows::Internal::Shell::Holographic::ViewHostItemEventType const &,Windows::Foundation::Collections::IPropertySet *>(
           &v13,
           dword_1803A9298,
           (__int64 *)&v17);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v17 = v13;
      v19 = v18;
      v9 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<Windows::Internal::Shell::Holographic::IViewHostItem *,ViewHostItemEventArgs *>(
             &this[37],
             (volatile int *)&v19,
             (__int64 *)&v17);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v5 = 0;
        goto LABEL_23;
      }
      v10 = 1373LL;
    }
    else
    {
      v10 = 1372LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v9);
LABEL_23:
    Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::InternalRelease((__int64 *)&v13);
    goto LABEL_24;
  }
  v8 = 1349LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::InternalRelease((__int64 *)&v19);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  return v5;
}
