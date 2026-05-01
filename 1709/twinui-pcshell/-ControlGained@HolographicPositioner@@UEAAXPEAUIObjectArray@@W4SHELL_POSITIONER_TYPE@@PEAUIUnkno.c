/*
 * XREFs of ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800FC040
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800F9604 (-StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_.c)
 *     ??1?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F9E58 (--1-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FE680 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FF238 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180100C44 (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ??0?$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z @ 0x180100FA0 (--0-$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180101B90 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801022B8 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Para.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x180102B74 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::ControlGained(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  struct IApplicationView *v8; // rbx
  bool *v9; // r8
  HolographicPositioner *v10; // rdi
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  struct IApplicationView *v16; // rcx
  __int64 v17; // rcx
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  struct IApplicationView *v19; // [rsp+28h] [rbp-D8h]
  __int64 *v20; // [rsp+30h] [rbp-D0h]
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+40h] [rbp-C0h]
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  __int64 *v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  struct IApplicationView *v27; // [rsp+68h] [rbp-98h]
  _QWORD v28[4]; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+90h] [rbp-70h]
  int *v30; // [rsp+98h] [rbp-68h]
  int *v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h] BYREF
  char v33; // [rsp+ACh] [rbp-54h]
  int v34; // [rsp+D0h] [rbp-30h] BYREF
  const char *v35; // [rsp+D8h] [rbp-28h]
  __int64 v36; // [rsp+E0h] [rbp-20h]
  char v37; // [rsp+E8h] [rbp-18h]
  __int64 v38; // [rsp+F0h] [rbp-10h]
  _BYTE v39[144]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v40; // [rsp+188h] [rbp+88h]
  __int64 v41; // [rsp+190h] [rbp+90h]
  __int64 v42; // [rsp+198h] [rbp+98h]
  __int64 v43; // [rsp+1A0h] [rbp+A0h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v26 = -2LL;
  ObjectArrayAdapter<IApplicationView>::ObjectArrayAdapter<IApplicationView>(&v21);
  v18 = 0;
  v19 = 0LL;
  v20 = &v21;
  ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v18);
  v23 = v22;
  v24 = 0LL;
  v25 = &v21;
  ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v23);
  while ( 1 )
  {
    if ( v18 == v23 )
    {
      result = (__int64)v25;
      if ( v20 == v25 )
        break;
    }
    v8 = v19;
    v27 = v19;
    if ( v19 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v19 + 8LL))(v19);
    v28[1] = 0LL;
    v28[2] = v28;
    v28[3] = 0LL;
    v29 = 0;
    v30 = &v34;
    v31 = &v32;
    v32 = 0;
    v33 = 0;
    v37 = 0;
    v34 = 0;
    v35 = "ControlGained";
    v36 = 0LL;
    v38 = 1LL;
    v40 = 0LL;
    v41 = 0LL;
    memset(v39, 0, sizeof(v39));
    v42 = 0LL;
    v43 = 0LL;
    v28[0] = &HolographicPositionerTelemetry::ControlGained::`vftable';
    HolographicPositionerTelemetry::ControlGained::StartActivity(
      (__int64)v28,
      (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v8,
      a3,
      a4);
    v10 = (HolographicPositioner *)(a1 - 184);
    v11 = *(_DWORD *)(a1 - 184 + 464);
    if ( v11 )
      v12 = HolographicPositioner::_EnsureShellStateForView(v10, v8, v9);
    else
      v12 = 0;
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x30C,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v12);
    if ( !v11 )
    {
      v13 = HolographicPositioner::_HandleControlGainedForView(v10, v8, 0LL);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x313,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v13);
      v14 = HolographicPositioner::_RaiseRequestNavigateToView(v10, v8);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x316,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v14);
    }
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v28);
    v28[0] = &HolographicPositionerTelemetry::ControlGained::`vftable';
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v28);
    if ( v8 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v8 + 16LL))(v8);
    ++v18;
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v18);
  }
  v15 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    result = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return result;
}
