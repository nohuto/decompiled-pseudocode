/*
 * XREFs of ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054FA0
 * Callers:
 *     ?OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18003F920 (-OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180046880 (-OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180047EE0 (-PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180048F80 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180093F00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??A?$map@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@3@@Z @ 0x18005597C (--A-$map@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@VMPC.c)
 *     ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005989C (-OnGazeUpdate@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCGestureHandlerManager::OnGazeUpdate(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  __int64 result; // rax
  __int64 *v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  __int64 v8; // r10
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+48h] [rbp+10h]
  __int64 *v13; // [rsp+50h] [rbp+18h]

  v12 = a2;
  v3 = a1 + 24;
  result = *(_QWORD *)(a1 + 24);
  v5 = *(__int64 **)(result + 8);
  v6 = result;
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_12;
  v7 = *a2;
  do
  {
    v8 = (__int64)v5;
    v9 = v5[4];
    if ( v9 >= v7 )
      v5 = (__int64 *)*v5;
    else
      v5 = (__int64 *)v5[2];
    if ( v9 >= v7 )
      v6 = v8;
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v6 == result )
  {
LABEL_12:
    v7 = *a2;
    goto LABEL_13;
  }
  if ( v7 < *(_QWORD *)(v6 + 32) )
LABEL_13:
    v6 = result;
  if ( v6 != result )
  {
    v13 = (__int64 *)&v11;
    v11 = v7;
    if ( v7 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 8LL))(v7);
    v10 = (_QWORD *)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[](v3);
    result = MPCGestureHandler::OnGazeUpdate(*v10, &v11);
  }
  if ( *a2 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return result;
}
