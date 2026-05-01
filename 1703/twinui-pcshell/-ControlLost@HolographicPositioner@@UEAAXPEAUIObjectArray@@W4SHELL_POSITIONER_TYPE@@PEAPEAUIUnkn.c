/*
 * XREFs of ?ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1800D89C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??DIterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA?AV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@XZ @ 0x18004363C (--DIterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA-AV-$ComPtr@UIImmersiveMonitor@@@WRL@.c)
 *     ??1?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800D6ABC (--1-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DAC2C (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?end@?$ObjectArrayAdapter@UIApplicationView@@@@QEAA?AVIterator@1@XZ @ 0x1800DC620 (-end@-$ObjectArrayAdapter@UIApplicationView@@@@QEAA-AVIterator@1@XZ.c)
 *     ?begin@?$ObjectArrayAdapter@UIApplicationView@@@@QEAA?AVIterator@1@XZ @ 0x1800DC65C (-begin@-$ObjectArrayAdapter@UIApplicationView@@@@QEAA-AVIterator@1@XZ.c)
 *     ??0?$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1800DC694 (--0-$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800DD3C0 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800DDAE8 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Para.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x1800DE2E0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 *     ??$Start@PEAUIApplicationView@@AEAW4SHELL_POSITIONER_TYPE@@@ControlLost@HolographicPositionerTelemetry@@SA?AV01@$$QEAPEAUIApplicationView@@AEAW4SHELL_POSITIONER_TYPE@@@Z @ 0x1800DE56C (--$Start@PEAUIApplicationView@@AEAW4SHELL_POSITIONER_TYPE@@@ControlLost@HolographicPositionerTel.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HolographicPositioner::ControlLost(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  struct IApplicationView *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-E0h] BYREF
  struct IApplicationView *v12; // [rsp+28h] [rbp-D8h] BYREF
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h]
  __int64 v15; // [rsp+40h] [rbp-C0h]
  _QWORD v16[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct IApplicationView *v17; // [rsp+58h] [rbp-A8h] BYREF
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  _QWORD v22[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v21 = -2LL;
  v11 = a3;
  *a4 = 0LL;
  ObjectArrayAdapter<IApplicationView>::ObjectArrayAdapter<IApplicationView>(v16);
  ObjectArrayAdapter<IApplicationView>::begin(v16, &v13);
  ObjectArrayAdapter<IApplicationView>::end(v16, &v18);
  while ( 1 )
  {
    if ( v13 == v18 )
    {
      result = v20;
      if ( v15 == v20 )
        break;
    }
    ObjectArrayAdapter<IImmersiveMonitor>::Iterator::operator*((__int64)&v13, &v12);
    v6 = v12;
    v17 = v12;
    HolographicPositionerTelemetry::ControlLost::Start<IApplicationView *,enum SHELL_POSITIONER_TYPE &>(v22, &v17, &v11);
    v7 = HolographicPositioner::_HandleControlLostForView((HolographicPositioner *)(a1 - 152), v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D7,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v7);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v22);
    v22[0] = &HolographicPositionerTelemetry::ControlLost::`vftable';
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v22);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v22);
    if ( v6 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    ++v13;
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v13);
  }
  v8 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return result;
}
