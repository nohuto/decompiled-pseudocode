/*
 * XREFs of ?ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1801ADEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z @ 0x18014F470 (--0-$ObjectArrayAdapter@UIObservableObjectArrayChangedBeginEnd@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x18015033C (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801AC144 (--0-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ??1ControlLost@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1801ACF64 (--1ControlLost@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1801B05C0 (-StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_PO.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801B0718 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Para.c)
 *     ?_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x1801B1704 (-_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B35C8 (-_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B3868 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
unsigned int __fastcall HolographicPositioner::ControlLost(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  struct IApplicationView *v6; // rbx
  int v7; // eax
  HolographicPositioner *v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  CWinRTApplicationView *v12; // [rsp+20h] [rbp-E0h] BYREF
  struct IApplicationView *v13; // [rsp+28h] [rbp-D8h] BYREF
  void **v14; // [rsp+30h] [rbp-D0h]
  CWinRTApplicationView *v15; // [rsp+38h] [rbp-C8h] BYREF
  void *v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+48h] [rbp-B8h]
  CWinRTApplicationView *v18; // [rsp+50h] [rbp-B0h] BYREF
  CWinRTApplicationView *v19; // [rsp+58h] [rbp-A8h] BYREF
  void **v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  _QWORD v22[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v21 = -2LL;
  *a4 = 0LL;
  ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>::ObjectArrayAdapter<IObservableObjectArrayChangedBeginEnd>(
    (__int64)&v16,
    a2);
  LODWORD(v12) = 0;
  v13 = 0LL;
  v14 = &v16;
  ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v12);
  LODWORD(v18) = v17;
  v19 = 0LL;
  v20 = &v16;
  ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v18);
  while ( (_DWORD)v12 != (_DWORD)v18 || v14 != v20 )
  {
    v6 = v13;
    v15 = v13;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef((__int64 *)&v15);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v22,
      (__int64)"ControlLost");
    v22[0] = &HolographicPositionerTelemetry::ControlLost::`vftable';
    HolographicPositionerTelemetry::ControlLost::StartActivity(v22, v6, a3);
    HolographicPositioner::_TransitionViewFromHolographic((HolographicPositioner *)(a1 - 176), v6);
    v7 = HolographicPositioner::_RaiseViewRemoved((HolographicPositioner *)(a1 - 176), v6);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = 1576LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_10;
    }
    v7 = HolographicPositioner::_EnableSystemVisuals(v8, v6, 1);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = 1579LL;
      goto LABEL_6;
    }
    v9 = 0;
LABEL_10:
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        785LL,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v9);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v22);
    HolographicPositionerTelemetry::ControlLost::~ControlLost((HolographicPositionerTelemetry::ControlLost *)v22);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v15);
    LODWORD(v12) = (_DWORD)v12 + 1;
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v12);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
  return Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v16);
}
