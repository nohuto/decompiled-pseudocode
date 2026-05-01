/*
 * XREFs of ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x18012BC80
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x180081810 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x180108814 (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ??$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z @ 0x180128B88 (--$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x180305708 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationFrameService::_SnapApplicationToLocation(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  __int64 (__fastcall *v6)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  struct IApplicationView **v7; // r9
  HRESULT ViewForApplication; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  int v12; // eax
  char v13; // cl
  int v14; // eax
  __int64 v15; // rdx
  IUnknown *punk; // [rsp+38h] [rbp-49h] BYREF
  int v18; // [rsp+40h] [rbp-41h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-39h] BYREF
  CWinRTApplicationView *v20; // [rsp+50h] [rbp-31h] BYREF
  IUnknown *v21; // [rsp+58h] [rbp-29h] BYREF
  __int64 v22; // [rsp+60h] [rbp-21h]
  __int64 v23; // [rsp+68h] [rbp-19h]
  const WCHAR *v24; // [rsp+70h] [rbp-11h] BYREF
  __int64 v25; // [rsp+78h] [rbp-9h]
  __int64 v26; // [rsp+80h] [rbp-1h]
  LPCWSTR v27[2]; // [rsp+88h] [rbp+7h] BYREF
  int v28[4]; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v27[1] = (LPCWSTR)-2LL;
  v20 = 0LL;
  ppvOut = 0LL;
  punk = 0LL;
  v18 = 2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  v6 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)a1->Ptr + 4);
  if ( v6 == CWRLObjectWithGITSite::GetSite )
    CWRLObjectWithGITSite::GetSite(a1, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  else
    v6(a1, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(punk, a2, (struct IImmersiveApplication *)&v20, v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  if ( ViewForApplication >= 0 )
  {
    punk = 0LL;
    v18 = 9;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
    v11 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)a1->Ptr + 4);
    if ( v11 == CWRLObjectWithGITSite::GetSite )
      CWRLObjectWithGITSite::GetSite(a1, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
    else
      v11(a1, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    ViewForApplication = IUnknown_QueryService(
                           punk,
                           &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                           &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                           &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
    if ( ViewForApplication < 0 )
    {
      v9 = (unsigned int)ViewForApplication;
      v10 = 1436LL;
      goto LABEL_13;
    }
    v12 = (*(__int64 (__fastcall **)(void *, CWinRTApplicationView *, _QWORD, _QWORD, int *))(*(_QWORD *)ppvOut + 24LL))(
            ppvOut,
            v20,
            a3,
            0LL,
            v28);
    ViewForApplication = v12;
    if ( v12 < 0 )
    {
      v9 = (unsigned int)v12;
      v10 = 1439LL;
      goto LABEL_13;
    }
    if ( CAppManagerTelemetry::IsEnabled(v13) )
    {
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
      v25 = -1LL;
      v26 = -1LL;
      v14 = ((__int64 (__fastcall *)(struct IUnknown *, const WCHAR **))a2->lpVtbl[1].AddRef)(a2, &v24);
      ViewForApplication = v14;
      if ( v14 < 0 )
      {
        v15 = 1446LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          (const char *)(unsigned int)v14);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
        goto LABEL_22;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
      v22 = -1LL;
      v23 = -1LL;
      v14 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, IUnknown **))a2->lpVtbl[5].QueryInterface)(
              a2,
              0LL,
              &v21);
      ViewForApplication = v14;
      if ( v14 < 0 )
      {
        v15 = 1447LL;
        goto LABEL_19;
      }
      v18 = a3;
      punk = v21;
      v27[0] = v24;
      CAppManagerTelemetry::FrameSnapInvoked<unsigned short const *,unsigned short const *,unsigned int>(
        v27,
        (LPCWSTR *)&punk,
        (__int64)&v18);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
    }
    ViewForApplication = 0;
    goto LABEL_22;
  }
  v9 = (unsigned int)ViewForApplication;
  v10 = 1435LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)v9);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
  return (unsigned int)ViewForApplication;
}
