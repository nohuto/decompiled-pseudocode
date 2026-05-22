/*
 * XREFs of ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A798
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180037E90 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004FA00 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ??A?$map@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@3@@Z @ 0x18005AE84 (--A-$map@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@VMPC.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall MPCGestureHandlerManager::IsHovering(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // r9d
  __int64 v11; // rcx
  unsigned int v12; // r8d
  char v13; // di
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+58h] [rbp+10h]
  __int64 *v17; // [rsp+60h] [rbp+18h]
  __int64 *v18; // [rsp+68h] [rbp+20h]

  v16 = a2;
  v3 = a1 + 24;
  v4 = *(__int64 **)(a1 + 24);
  v5 = (__int64 *)v4[1];
  v6 = v4;
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( (unsigned __int64)v5[4] >= *a2 )
    {
      v6 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  if ( v6 == v4 || *a2 < (unsigned __int64)v6[4] )
    v6 = v4;
  if ( v6 == v4 )
  {
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    return 0;
  }
  else
  {
    v17 = &v15;
    v7 = *a2;
    v15 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v18 = &v15;
    v8 = *(_QWORD *)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[](v3);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 88LL))(v15);
    v11 = 0LL;
    v12 = *(_DWORD *)(v8 + 136);
    if ( v12 )
    {
      v13 = 1;
      while ( 1 )
      {
        v9 = (unsigned int)v11;
        if ( *(_DWORD *)(v8 + 4 * v11 + 800) == v10 && *(_DWORD *)(152LL * (unsigned int)v11 + v8 + 212) == 2 )
          break;
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= v12 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      v13 = 0;
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, v9);
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    return v13;
  }
}
