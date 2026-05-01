/*
 * XREFs of ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801AD920
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z @ 0x18014F470 (--0-$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x18015033C (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801AC144 (--0-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ??1ControlGained@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1801ACF14 (--1ControlGained@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801B02E8 (-StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801B0718 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Para.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1801B1868 (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B1DE4 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B2FDC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
unsigned int __fastcall HolographicPositioner::ControlGained(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct IApplicationView *v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  bool v12[8]; // [rsp+20h] [rbp-E0h] BYREF
  CWinRTApplicationView *v13; // [rsp+28h] [rbp-D8h] BYREF
  struct IApplicationView *v14; // [rsp+30h] [rbp-D0h] BYREF
  void **v15; // [rsp+38h] [rbp-C8h]
  CWinRTApplicationView *v16; // [rsp+40h] [rbp-C0h] BYREF
  void *v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+50h] [rbp-B0h]
  CWinRTApplicationView *v19; // [rsp+58h] [rbp-A8h] BYREF
  CWinRTApplicationView *v20; // [rsp+60h] [rbp-A0h] BYREF
  void **v21; // [rsp+68h] [rbp-98h]
  __int64 v22; // [rsp+70h] [rbp-90h]
  _QWORD v23[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v22 = -2LL;
  ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>::ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>(
    (__int64)&v17,
    a2);
  LODWORD(v13) = 0;
  v14 = 0LL;
  v15 = &v17;
  ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v13);
  LODWORD(v19) = v18;
  v20 = 0LL;
  v21 = &v17;
  ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v19);
  while ( (_DWORD)v13 != (_DWORD)v19 || v15 != v21 )
  {
    v7 = v14;
    v16 = v14;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v16);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v23,
      (__int64)"ControlGained");
    v23[0] = &HolographicPositionerTelemetry::ControlGained::`vftable';
    HolographicPositionerTelemetry::ControlGained::StartActivity(v23, v7, a3, a4);
    v12[0] = 0;
    v8 = HolographicPositioner::_EnsureShellStateForView((HolographicPositioner *)(a1 - 176), v7, v12);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        803LL,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v8);
    if ( v12[0] )
    {
      v9 = HolographicPositioner::_HandleControlGainedForView((HolographicPositioner *)(a1 - 176), v7, 0LL);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          810LL,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v9);
      v10 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)(a1 - 176), v7);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          813LL,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v10);
    }
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
    HolographicPositionerTelemetry::ControlGained::~ControlGained((HolographicPositionerTelemetry::ControlGained *)v23);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
    LODWORD(v13) = (_DWORD)v13 + 1;
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v13);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  return Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v17);
}
