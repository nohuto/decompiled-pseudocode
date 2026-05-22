/*
 * XREFs of ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005506C
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18003E020 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180046880 (-OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180048F80 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180093F00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??A?$map@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@3@@Z @ 0x18005597C (--A-$map@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@VMPC.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall MPCGestureHandlerManager::IsHovering(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 *v6; // r8
  unsigned __int64 v7; // rdx
  __int64 *v8; // r10
  unsigned __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // r9d
  __int64 v14; // rcx
  unsigned int v15; // r8d
  char v16; // di
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v19; // [rsp+58h] [rbp+10h]
  __int64 *v20; // [rsp+60h] [rbp+18h]
  __int64 *v21; // [rsp+68h] [rbp+20h]

  v19 = a2;
  v3 = a1 + 24;
  v4 = *(__int64 **)(a1 + 24);
  v5 = (__int64 *)v4[1];
  v6 = v4;
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_11;
  v7 = *a2;
  do
  {
    v8 = v5;
    v9 = v5[4];
    if ( v9 >= v7 )
      v5 = (__int64 *)*v5;
    else
      v5 = (__int64 *)v5[2];
    if ( v9 >= v7 )
      v6 = v8;
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v6 == v4 || v7 < v6[4] )
LABEL_11:
    v6 = v4;
  if ( v6 == v4 )
  {
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    return 0;
  }
  else
  {
    v20 = &v18;
    v10 = *a2;
    v18 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v21 = &v18;
    v11 = *(_QWORD *)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[](v3);
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 88LL))(v18);
    v14 = 0LL;
    v15 = *(_DWORD *)(v11 + 128);
    if ( v15 )
    {
      v16 = 1;
      while ( 1 )
      {
        v12 = (unsigned int)v14;
        if ( *(_DWORD *)(v11 + 4 * v14 + 792) == v13 && *(_DWORD *)(152LL * (unsigned int)v14 + v11 + 204) == 2 )
          break;
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= v15 )
          goto LABEL_20;
      }
    }
    else
    {
LABEL_20:
      v16 = 0;
    }
    if ( v18 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 16LL))(v18, v12);
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    return v16;
  }
}
