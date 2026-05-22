/*
 * XREFs of ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800551B0
 * Callers:
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180049EA0 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004EC1C (-DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005497C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 * Callees:
 *     ?ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z @ 0x180055424 (-ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180055878 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@.c)
 *     ??A?$map@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@3@@Z @ 0x18005597C (--A-$map@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@VMPC.c)
 *     ?DetachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180059D4C (-DetachProvider@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_poli.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCGestureHandlerManager::DetachProvider(MPCGestureHandlerManager *this, _QWORD *a2)
{
  __int64 v4; // rbx
  char *v5; // rsi
  __int64 *v6; // rax
  __int64 *v7; // rdx
  __int64 *v8; // r8
  unsigned __int64 v9; // rcx
  __int64 *v10; // r10
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+58h] [rbp+10h]
  __int64 v15; // [rsp+60h] [rbp+18h]

  v14 = a2;
  v4 = 0LL;
  v15 = 0LL;
  v5 = (char *)this + 24;
  v6 = (__int64 *)*((_QWORD *)this + 3);
  v7 = (__int64 *)v6[1];
  v8 = v6;
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_11;
  v9 = *a2;
  do
  {
    v10 = v7;
    v11 = v7[4];
    if ( v11 >= v9 )
      v7 = (__int64 *)*v7;
    else
      v7 = (__int64 *)v7[2];
    if ( v11 >= v9 )
      v8 = v10;
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v8 == v6 || v9 < v8[4] )
LABEL_11:
    v8 = v6;
  if ( v8 != v6 )
  {
    v4 = *(_QWORD *)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[]((int)v5);
    v15 = v4;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v12 = *a2;
      v13 = v12;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      MPCGestureHandler::DetachProvider(v4, &v13);
      std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::erase(
        v5,
        a2);
      if ( !((__int64)(*(_QWORD *)(v4 + 944) - *(_QWORD *)(v4 + 936)) >> 3) )
        MPCGestureHandlerManager::ReturnGestureHandlerForWorkspaceToPool(this, *(_DWORD *)(v4 + 928));
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
}
