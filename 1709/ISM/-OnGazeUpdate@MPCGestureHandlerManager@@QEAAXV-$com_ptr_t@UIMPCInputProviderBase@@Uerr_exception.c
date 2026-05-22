/*
 * XREFs of ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A6D8
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180037E90 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180050DF0 (-OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800551F0 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??A?$map@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@3@@Z @ 0x18005AE84 (--A-$map@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@VMPC.c)
 *     ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180062768 (-OnGazeUpdate@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCGestureHandlerManager::OnGazeUpdate(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+48h] [rbp+10h]
  __int64 *v11; // [rsp+50h] [rbp+18h]

  v10 = a2;
  v3 = a1 + 24;
  result = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(result + 8);
  v6 = result;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    if ( *(_QWORD *)(v5 + 32) >= *a2 )
    {
      v6 = v5;
      v5 = *(_QWORD *)v5;
    }
    else
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
  }
  if ( v6 == result || *a2 < *(_QWORD *)(v6 + 32) )
    v6 = result;
  if ( v6 != result )
  {
    v11 = &v9;
    v7 = *a2;
    v9 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v8 = (_QWORD *)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[](v3);
    result = MPCGestureHandler::OnGazeUpdate(*v8, &v9);
  }
  if ( *a2 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return result;
}
