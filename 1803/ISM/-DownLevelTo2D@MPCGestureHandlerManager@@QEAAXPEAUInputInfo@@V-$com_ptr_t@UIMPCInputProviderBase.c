/*
 * XREFs of ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005497C
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18003E020 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003E6BC (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x18003F974 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180046650 (-PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180046880 (-OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180047EE0 (-PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180048E70 (-PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180048F80 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180093F00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180094A18 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180094CB0 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x18009501C (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180095628 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800551B0 (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x1800552E0 (-MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z.c)
 *     ??A?$map@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@3@@Z @ 0x18005597C (--A-$map@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@VMPC.c)
 *     ??A?$map@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBK@Z @ 0x180055A08 (--A-$map@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U-$less@K@std@@V-$al.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005924C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?AttachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180059C38 (-AttachProvider@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_poli.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800AE0FC (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCGestureHandlerManager::DownLevelTo2D(
        MPCGestureHandlerManager *this,
        __int64 a2,
        unsigned __int64 *a3,
        const char *a4)
{
  unsigned __int64 v7; // r8
  _DWORD *v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  __int64 *v12; // r10
  unsigned __int64 v13; // r9
  _DWORD *v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  bool v17; // r14
  unsigned __int64 v18; // rcx
  unsigned int v19; // r8d
  __int64 *v20; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rdx
  _QWORD *v23; // rax
  _DWORD *v24; // rdi
  _DWORD *v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // r14
  unsigned __int64 v29; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  unsigned __int64 v32; // [rsp+98h] [rbp+58h] BYREF

  v7 = *a3;
  if ( !v7 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      a4);
    JUMPOUT(0x180054C59LL);
  }
  v8 = 0LL;
  v9 = (__int64 *)*((_QWORD *)this + 3);
  v10 = (__int64 *)v9[1];
  v11 = (__int64 *)*((_QWORD *)this + 3);
  if ( *((_BYTE *)v10 + 25) )
    goto LABEL_11;
  do
  {
    v12 = v10;
    v13 = v10[4];
    if ( v13 >= v7 )
      v10 = (__int64 *)*v10;
    else
      v10 = (__int64 *)v10[2];
    if ( v13 >= v7 )
      v11 = v12;
  }
  while ( !*((_BYTE *)v10 + 25) );
  if ( v11 == v9 || v7 < v11[4] )
LABEL_11:
    v11 = (__int64 *)*((_QWORD *)this + 3);
  if ( v11 == v9 )
    goto LABEL_24;
  v14 = *(_DWORD **)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[]((int)this + 24);
  v8 = v14;
  if ( !v14 )
    goto LABEL_24;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = *a3;
  v32 = v15;
  if ( v15 )
  {
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 8LL))(v15);
    v15 = v32;
  }
  v16 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 88LL))(v15);
  v17 = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(v14 + 20), v16);
  if ( v32 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( !v17 && v14[232] != *(_DWORD *)(a2 + 1136) )
  {
    v18 = *a3;
    v32 = v18;
    if ( v18 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 8LL))(v18);
    MPCGestureHandlerManager::DetachProvider(this);
    v8 = 0LL;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( !v8 )
  {
LABEL_24:
    v19 = *(_DWORD *)(a2 + 1136);
    LODWORD(v32) = v19;
    v20 = (__int64 *)*((_QWORD *)this + 1);
    v21 = (__int64 *)v20[1];
    v22 = v20;
    if ( *((_BYTE *)v21 + 25) )
      goto LABEL_31;
    do
    {
      if ( *((_DWORD *)v21 + 8) >= v19 )
      {
        v22 = v21;
        v21 = (__int64 *)*v21;
      }
      else
      {
        v21 = (__int64 *)v21[2];
      }
    }
    while ( !*((_BYTE *)v21 + 25) );
    if ( v22 == v20 || v19 < *((_DWORD *)v22 + 8) )
LABEL_31:
      v22 = (__int64 *)*((_QWORD *)this + 1);
    if ( v22 == v20 )
      MPCGestureHandlerManager::MapGestureHandlerToWorkspace(this, v19);
    v23 = (_QWORD *)std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[]((int)this + 8);
    v24 = (_DWORD *)*v23;
    if ( *v23 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 8LL))(*v23);
    v25 = v8;
    v8 = v24;
    if ( v25 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v25 + 16LL))(v25);
    v26 = *a3;
    v32 = v26;
    if ( v26 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v26 + 8LL))(v26);
    MPCGestureHandler::AttachProvider(v24, &v32);
    v27 = (__int64 *)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[]((int)this + 24);
    v28 = *v27;
    *v27 = (__int64)v24;
    if ( v24 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v24 + 8LL))(v24);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = *a3;
  v32 = v29;
  if ( v29 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v29 + 8LL))(v29);
  result = MPCGestureHandler::DownLevelTo2D(v8, a2, &v32);
  if ( v8 )
    result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( *a3 )
    return (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)*a3 + 16LL))(*a3);
  return result;
}
