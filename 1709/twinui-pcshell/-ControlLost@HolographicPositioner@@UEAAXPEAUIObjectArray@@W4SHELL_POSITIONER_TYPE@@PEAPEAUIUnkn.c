/*
 * XREFs of ?ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1800FBD90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1800F9BB4 (-StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_PO.c)
 *     ??1?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F9E58 (--1-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FE4DC (-_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FFED0 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x180100AA0 (-_EnableSystemVisuals@HolographicPositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ??0?$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z @ 0x180100FA0 (--0-$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180101B90 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801022B8 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Para.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x180102B74 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::ControlLost(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  struct IApplicationView *v7; // rbx
  int v8; // eax
  HolographicPositioner *v9; // rcx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct IApplicationView *v13; // rcx
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-E0h] BYREF
  struct IApplicationView *v16; // [rsp+28h] [rbp-D8h]
  __int64 *v17; // [rsp+30h] [rbp-D0h]
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h]
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  __int64 *v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h]
  struct IApplicationView *v24; // [rsp+68h] [rbp-98h]
  _QWORD v25[4]; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+90h] [rbp-70h]
  int *v27; // [rsp+98h] [rbp-68h]
  int *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h] BYREF
  char v30; // [rsp+ACh] [rbp-54h]
  int v31; // [rsp+D0h] [rbp-30h] BYREF
  const char *v32; // [rsp+D8h] [rbp-28h]
  __int64 v33; // [rsp+E0h] [rbp-20h]
  char v34; // [rsp+E8h] [rbp-18h]
  __int64 v35; // [rsp+F0h] [rbp-10h]
  _BYTE v36[144]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v37; // [rsp+188h] [rbp+88h]
  __int64 v38; // [rsp+190h] [rbp+90h]
  __int64 v39; // [rsp+198h] [rbp+98h]
  __int64 v40; // [rsp+1A0h] [rbp+A0h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v23 = -2LL;
  *a4 = 0LL;
  ObjectArrayAdapter<IApplicationView>::ObjectArrayAdapter<IApplicationView>(&v18);
  v15 = 0;
  v16 = 0LL;
  v17 = &v18;
  ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v15);
  v20 = v19;
  v21 = 0LL;
  v22 = &v18;
  ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v20);
  while ( 1 )
  {
    if ( v15 == v20 )
    {
      result = (__int64)v22;
      if ( v17 == v22 )
        break;
    }
    v7 = v16;
    v24 = v16;
    if ( v16 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v16 + 8LL))(v16);
    v25[1] = 0LL;
    v25[2] = v25;
    v25[3] = 0LL;
    v26 = 0;
    v27 = &v31;
    v28 = &v29;
    v29 = 0;
    v30 = 0;
    v34 = 0;
    v31 = 0;
    v32 = "ControlLost";
    v33 = 0LL;
    v35 = 1LL;
    v37 = 0LL;
    v38 = 0LL;
    memset(v36, 0, sizeof(v36));
    v39 = 0LL;
    v40 = 0LL;
    v25[0] = &HolographicPositionerTelemetry::ControlLost::`vftable';
    HolographicPositionerTelemetry::ControlLost::StartActivity(
      (__int64)v25,
      (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v7,
      a3);
    HolographicPositioner::_TransitionViewFromHolographic((HolographicPositioner *)(a1 - 184), v7);
    v8 = HolographicPositioner::_RaiseViewRemoved((HolographicPositioner *)(a1 - 184), v7);
    v10 = v8;
    if ( v8 < 0 )
    {
      v11 = 1623LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_12;
    }
    v8 = HolographicPositioner::_EnableSystemVisuals(v9, v7, 1);
    v10 = v8;
    if ( v8 < 0 )
    {
      v11 = 1626LL;
      goto LABEL_8;
    }
    v10 = 0;
LABEL_12:
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2FA,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v10);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v25);
    v25[0] = &HolographicPositionerTelemetry::ControlLost::`vftable';
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v25);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v25);
    if ( v7 )
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v7 + 16LL))(v7);
    ++v15;
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v15);
  }
  v12 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    result = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return result;
}
