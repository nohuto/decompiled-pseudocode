/*
 * XREFs of ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180049EA0
 * Callers:
 *     ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18003B790 (-OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180045550 (-OnDeviceRemoval@MPCProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCClickerProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180048180 (-OnDeviceRemoval@MPCClickerProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180093800 (-OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800978C0 (-OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?RemoveDeviceId@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004BDB8 (-RemoveDeviceId@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004DAB8 (-RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800548CC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800551B0 (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputProviderBase::OnDeviceRemoval(MPCInputProviderBase *this, struct DeviceInfo *a2)
{
  struct IMPCInputProviderBase *v3; // rsi
  struct IMPCInputProviderBase *v4; // rdi
  MPCConstantManager *Instance; // rax
  const char *v6; // r9
  MPCGestureHandlerManager *v7; // rcx
  MPCHolographicInputManager *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCInputProviderBase *v11; // [rsp+40h] [rbp+8h] BYREF
  struct IMPCInputProviderBase **v12; // [rsp+48h] [rbp+10h]

  v3 = (MPCInputProviderBase *)((char *)this + 24);
  v4 = (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  Instance = MPCConstantManager::GetInstance();
  MPCConstantManager::RemoveDeviceId(Instance, v4);
  if ( *(_DWORD *)a2 != (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v3 + 88LL))(v3) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x113,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      v6);
    JUMPOUT(0x180049F5CLL);
  }
  v12 = &v11;
  v11 = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v4 + 8LL))(v4);
  v7 = MPCGestureHandlerManager::GetInstance();
  MPCGestureHandlerManager::DetachProvider(v7);
  v8 = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::RemoveInputProvider(v8, v3);
  return 0LL;
}
