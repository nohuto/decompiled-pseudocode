/*
 * XREFs of ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x18004D87C
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x18004C570 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ??$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z @ 0x18004E674 (--$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NXZ @ 0x18004F0D4 (-IsEnabled@CAppManagerTelemetry@@SA_NXZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x18017F788 (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationFrameService::_SnapApplicationToLocation(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  IUnknown **GITSitePtr; // rbx
  struct IApplicationView **v7; // r9
  __int64 v8; // rdx
  HRESULT ViewForApplication; // ebx
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  IUnknown **v13; // rbx
  void *v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  void *v19; // rcx
  __int64 v20; // rcx
  __int64 v22; // [rsp+38h] [rbp-49h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-41h] BYREF
  __int64 v24; // [rsp+48h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-31h] BYREF
  __int64 v26; // [rsp+58h] [rbp-29h]
  __int64 v27; // [rsp+60h] [rbp-21h]
  LPVOID v28[3]; // [rsp+68h] [rbp-19h] BYREF
  LPVOID v29; // [rsp+80h] [rbp-1h] BYREF
  _QWORD v30[2]; // [rsp+88h] [rbp+7h] BYREF
  int v31[4]; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v30[1] = -2LL;
  v24 = 0LL;
  ppvOut = 0LL;
  GITSitePtr = (IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr(a1, &v22);
  v8 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(
                         *GITSitePtr,
                         a2,
                         (struct IImmersiveApplication *)&v24,
                         v7);
  v10 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( ViewForApplication < 0 )
  {
    v11 = (unsigned int)ViewForApplication;
    v12 = 1406LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)v11);
    goto LABEL_32;
  }
  v13 = (IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr(a1, &v22);
  v14 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  ViewForApplication = IUnknown_QueryService(
                         *v13,
                         &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                         &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                         &ppvOut);
  v15 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( ViewForApplication < 0 )
  {
    v11 = (unsigned int)ViewForApplication;
    v12 = 1407LL;
    goto LABEL_15;
  }
  v16 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)ppvOut + 24LL))(
          ppvOut,
          v24,
          a3,
          0LL,
          v31);
  ViewForApplication = v16;
  if ( v16 < 0 )
  {
    v11 = (unsigned int)v16;
    v12 = 1410LL;
    goto LABEL_15;
  }
  if ( !CAppManagerTelemetry::IsEnabled() )
    goto LABEL_31;
  v28[0] = 0LL;
  pv = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28[1] = (LPVOID)-1LL;
  v28[2] = (LPVOID)-1LL;
  v17 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))a2->lpVtbl[1].AddRef)(a2, v28);
  ViewForApplication = v17;
  if ( v17 >= 0 )
  {
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v26 = -1LL;
    v27 = -1LL;
    v17 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, LPVOID *))a2->lpVtbl[5].QueryInterface)(a2, 0LL, &pv);
    ViewForApplication = v17;
    if ( v17 < 0 )
    {
      v18 = 1418LL;
      goto LABEL_23;
    }
    LODWORD(v22) = a3;
    v29 = pv;
    v30[0] = v28[0];
    CAppManagerTelemetry::FrameSnapInvoked<unsigned short const *,unsigned short const *,unsigned int>(v30, &v29, &v22);
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v26 = 0LL;
    v27 = 0LL;
    if ( v28[0] )
      CoTaskMemFree(v28[0]);
LABEL_31:
    ViewForApplication = 0;
    goto LABEL_32;
  }
  v18 = 1417LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v18,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)v17);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v26 = 0LL;
  v27 = 0LL;
  if ( v28[0] )
    CoTaskMemFree(v28[0]);
LABEL_32:
  v19 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)ViewForApplication;
}
