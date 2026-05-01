/*
 * XREFs of ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x18004FE3C
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z @ 0x18004EAA0 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z @ 0x180050DA8 (--$FrameSnapInvoked@PEBGPEBGI@CAppManagerTelemetry@@SAX$$QEAPEBG0$$QEAI@Z.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NXZ @ 0x180051604 (-IsEnabled@CAppManagerTelemetry@@SA_NXZ.c)
 *     ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z @ 0x1801CD12C (-GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPE.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationFrameService::_SnapApplicationToLocation(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3)
{
  struct IApplicationView **v6; // r9
  __int64 v7; // rcx
  HRESULT ViewForApplication; // ebx
  IUnknown *v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  void *v12; // rcx
  IUnknown *v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  void *v17; // rcx
  __int64 v18; // rcx
  IUnknown *punk; // [rsp+38h] [rbp-49h] BYREF
  int v21; // [rsp+40h] [rbp-41h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-39h] BYREF
  __int64 v23; // [rsp+50h] [rbp-31h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-29h] BYREF
  __int64 v25; // [rsp+60h] [rbp-21h]
  __int64 v26; // [rsp+68h] [rbp-19h]
  LPVOID v27[3]; // [rsp+70h] [rbp-11h] BYREF
  _QWORD v28[2]; // [rsp+88h] [rbp+7h] BYREF
  int v29[4]; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v28[1] = -2LL;
  v23 = 0LL;
  ppvOut = 0LL;
  punk = 0LL;
  v21 = 1;
  (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)a1 + 32LL))(
    a1,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  v7 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  ViewForApplication = ApplicationViewHelpers::GetViewForApplication(punk, a2, (struct IImmersiveApplication *)&v23, v6);
  v9 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v9->lpVtbl->Release)(v9);
  }
  if ( ViewForApplication < 0 )
  {
    v10 = (unsigned int)ViewForApplication;
    v11 = 1406LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const char *)v10);
    goto LABEL_32;
  }
  punk = 0LL;
  v21 = 3;
  (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)a1 + 32LL))(
    a1,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  v12 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  ViewForApplication = IUnknown_QueryService(
                         punk,
                         &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                         &GUID_fff59320_db70_4865_8fed_8b502d692f12,
                         &ppvOut);
  v13 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v13->lpVtbl->Release)(v13);
  }
  if ( ViewForApplication < 0 )
  {
    v10 = (unsigned int)ViewForApplication;
    v11 = 1407LL;
    goto LABEL_15;
  }
  v14 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)ppvOut + 24LL))(
          ppvOut,
          v23,
          a3,
          0LL,
          v29);
  ViewForApplication = v14;
  if ( v14 < 0 )
  {
    v10 = (unsigned int)v14;
    v11 = 1410LL;
    goto LABEL_15;
  }
  if ( !CAppManagerTelemetry::IsEnabled() )
    goto LABEL_31;
  v27[0] = 0LL;
  pv = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27[1] = (LPVOID)-1LL;
  v27[2] = (LPVOID)-1LL;
  v15 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))a2->lpVtbl[1].AddRef)(a2, v27);
  ViewForApplication = v15;
  if ( v15 >= 0 )
  {
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v25 = -1LL;
    v26 = -1LL;
    v15 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, LPVOID *))a2->lpVtbl[5].QueryInterface)(a2, 0LL, &pv);
    ViewForApplication = v15;
    if ( v15 < 0 )
    {
      v16 = 1418LL;
      goto LABEL_23;
    }
    v21 = a3;
    punk = (IUnknown *)pv;
    v28[0] = v27[0];
    CAppManagerTelemetry::FrameSnapInvoked<unsigned short const *,unsigned short const *,unsigned int>(v28, &punk, &v21);
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v25 = 0LL;
    v26 = 0LL;
    if ( v27[0] )
      CoTaskMemFree(v27[0]);
LABEL_31:
    ViewForApplication = 0;
    goto LABEL_32;
  }
  v16 = 1417LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v16,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)v15);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v25 = 0LL;
  v26 = 0LL;
  if ( v27[0] )
    CoTaskMemFree(v27[0]);
LABEL_32:
  v17 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return (unsigned int)ViewForApplication;
}
