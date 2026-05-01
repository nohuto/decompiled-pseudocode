/*
 * XREFs of ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D8B70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??DIterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA?AV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@XZ @ 0x18004363C (--DIterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA-AV-$ComPtr@UIImmersiveMonitor@@@WRL@.c)
 *     ??1?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800D6ABC (--1-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800DA250 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DA948 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1800DC2F0 (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?end@?$ObjectArrayAdapter@UIApplicationView@@@@QEAA?AVIterator@1@XZ @ 0x1800DC620 (-end@-$ObjectArrayAdapter@UIApplicationView@@@@QEAA-AVIterator@1@XZ.c)
 *     ?begin@?$ObjectArrayAdapter@UIApplicationView@@@@QEAA?AVIterator@1@XZ @ 0x1800DC65C (-begin@-$ObjectArrayAdapter@UIApplicationView@@@@QEAA-AVIterator@1@XZ.c)
 *     ??0?$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1800DC694 (--0-$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800DD3C0 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800DDAE8 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Para.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x1800DE2E0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 *     ??$Start@PEAUIApplicationView@@AEAW4SHELL_POSITIONER_TYPE@@AEAPEAUIUnknown@@@ControlGained@HolographicPositionerTelemetry@@SA?AV01@$$QEAPEAUIApplicationView@@AEAW4SHELL_POSITIONER_TYPE@@AEAPEAUIUnknown@@@Z @ 0x1800DE638 (--$Start@PEAUIApplicationView@@AEAW4SHELL_POSITIONER_TYPE@@AEAPEAUIUnknown@@@ControlGained@Holog.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HolographicPositioner::ControlGained(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  struct IApplicationView *v6; // rbx
  bool *v7; // r8
  HolographicPositioner *v8; // rdi
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // [rsp+20h] [rbp-E0h] BYREF
  struct IApplicationView *v17; // [rsp+28h] [rbp-D8h] BYREF
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h]
  __int64 v20; // [rsp+40h] [rbp-C0h]
  _QWORD v21[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  struct IApplicationView *v23; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+80h] [rbp-80h]
  _QWORD v28[40]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  v27 = -2LL;
  v16 = a3;
  v22 = a4;
  ObjectArrayAdapter<IApplicationView>::ObjectArrayAdapter<IApplicationView>(v21);
  ObjectArrayAdapter<IApplicationView>::begin(v21, &v18);
  ObjectArrayAdapter<IApplicationView>::end(v21, &v24);
  while ( 1 )
  {
    if ( v18 == v24 )
    {
      result = v26;
      if ( v20 == v26 )
        break;
    }
    ObjectArrayAdapter<IImmersiveMonitor>::Iterator::operator*((__int64)&v18, &v17);
    v6 = v17;
    v23 = v17;
    ((void (__fastcall *)(_QWORD *, struct IApplicationView **, int *, __int64 *))HolographicPositionerTelemetry::ControlGained::Start<IApplicationView *,enum SHELL_POSITIONER_TYPE &,IUnknown * &>)(
      v28,
      &v23,
      &v16,
      &v22);
    v8 = (HolographicPositioner *)(a1 - 152);
    v9 = *(_DWORD *)(a1 - 152 + 408);
    if ( v9 )
      v10 = HolographicPositioner::_EnsureShellStateForView(v8, v6, v7);
    else
      v10 = 0;
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2E9,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v10);
    if ( !v9 )
    {
      v11 = HolographicPositioner::_HandleControlGainedForView(v8, v6, 0LL);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2F0,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v11);
      v12 = HolographicPositioner::_RaiseRequestNavigateToView(v8, v6);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2F3,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v12);
    }
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v28);
    v28[0] = &HolographicPositionerTelemetry::ControlGained::`vftable';
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v28);
    if ( v6 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    ++v18;
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v18);
  }
  v13 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v21[0];
  if ( v21[0] )
  {
    v21[0] = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return result;
}
