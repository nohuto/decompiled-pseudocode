/*
 * XREFs of ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054E2C
 * Callers:
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x18003F974 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180046880 (-OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180048F80 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??A?$map@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@3@@Z @ 0x18005597C (--A-$map@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@VMPC.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGestureHandlerManager::GetWorkspaceId(__int64 a1, unsigned __int64 *a2)
{
  int v3; // r10d
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 *v6; // r8
  unsigned __int64 v7; // rdx
  __int64 *v8; // r11
  unsigned __int64 v9; // r9
  unsigned int v10; // edi

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
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)*a2 + 16LL))(*a2);
    return 0LL;
  }
  else
  {
    v10 = *(_DWORD *)(*(_QWORD *)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[](v3)
                    + 928LL);
    if ( *a2 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)*a2 + 16LL))(*a2);
    return v10;
  }
}
