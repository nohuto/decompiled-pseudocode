/*
 * XREFs of ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A148
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180037E90 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180038768 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180038998 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x180038C24 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800390E0 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004FA00 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18005005C (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x180050E44 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180053830 (-PostHitTestProcessing@MPCProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180054F20 (-PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800551F0 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A8D4 (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x18005A9FC (-MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z.c)
 *     ??A?$map@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@3@@Z @ 0x18005AE84 (--A-$map@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@VMPC.c)
 *     ??A?$map@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBK@Z @ 0x18005AF0C (--A-$map@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U-$less@K@std@@V-$al.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800621D4 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?AttachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180062AD0 (-AttachProvider@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_poli.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
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
  _DWORD *v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 *v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rdx
  _QWORD *v18; // rax
  _DWORD *v19; // rdi
  _DWORD *v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // r14
  unsigned __int64 v24; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned __int64 v27; // [rsp+78h] [rbp+48h] BYREF

  v7 = *a3;
  if ( !v7 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      a4);
    __debugbreak();
  }
  v8 = 0LL;
  v9 = (__int64 *)*((_QWORD *)this + 3);
  v10 = (__int64 *)v9[1];
  v11 = (__int64 *)*((_QWORD *)this + 3);
  while ( !*((_BYTE *)v10 + 25) )
  {
    if ( v10[4] >= v7 )
    {
      v11 = v10;
      v10 = (__int64 *)*v10;
    }
    else
    {
      v10 = (__int64 *)v10[2];
    }
  }
  if ( v11 == v9 || v7 < v11[4] )
    v11 = (__int64 *)*((_QWORD *)this + 3);
  if ( v11 == v9 )
    goto LABEL_18;
  v12 = *(_DWORD **)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[]((int)this + 24);
  v8 = v12;
  if ( !v12 )
    goto LABEL_18;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
  if ( v12[234] != *(_DWORD *)(a2 + 1312) )
  {
    v13 = *a3;
    v27 = v13;
    if ( v13 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 8LL))(v13);
    MPCGestureHandlerManager::DetachProvider(this);
    v8 = 0LL;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( !v8 )
  {
LABEL_18:
    v14 = *(_DWORD *)(a2 + 1312);
    LODWORD(v27) = v14;
    v15 = (__int64 *)*((_QWORD *)this + 1);
    v16 = (__int64 *)v15[1];
    v17 = v15;
    while ( !*((_BYTE *)v16 + 25) )
    {
      if ( *((_DWORD *)v16 + 8) >= v14 )
      {
        v17 = v16;
        v16 = (__int64 *)*v16;
      }
      else
      {
        v16 = (__int64 *)v16[2];
      }
    }
    if ( v17 == v15 || v14 < *((_DWORD *)v17 + 8) )
      v17 = (__int64 *)*((_QWORD *)this + 1);
    if ( v17 == v15 )
      MPCGestureHandlerManager::MapGestureHandlerToWorkspace(this, v14);
    v18 = (_QWORD *)std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[]((int)this + 8);
    v19 = (_DWORD *)*v18;
    if ( *v18 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 8LL))(*v18);
    v20 = v8;
    v8 = v19;
    if ( v20 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 16LL))(v20);
    v21 = *a3;
    v27 = v21;
    if ( v21 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v21 + 8LL))(v21);
    MPCGestureHandler::AttachProvider(v19, &v27);
    v22 = (__int64 *)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[]((int)this + 24);
    v23 = *v22;
    *v22 = (__int64)v19;
    if ( v19 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 8LL))(v19);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = *a3;
  v27 = v24;
  if ( v24 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v24 + 8LL))(v24);
  result = MPCGestureHandler::DownLevelTo2D(v8, a2, &v27);
  if ( v8 )
    result = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( *a3 )
    return (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)*a3 + 16LL))(*a3);
  return result;
}
