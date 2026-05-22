/*
 * XREFs of ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800579EC
 * Callers:
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180056C0C (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     std::_Func_impl__lambda_03f4dc41ea8f14b1d8dc5b14e548ce90__std::allocator_int__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x180059DC0 (std--_Func_impl__lambda_03f4dc41ea8f14b1d8dc5b14e548ce90__std--allocator_int__void__ea_180059DC0.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18005A0A0 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A8D4 (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x180061118 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::DemotePrimaryProviderInternal(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  __int64 v3; // rbx
  MPCGestureHandlerManager *Instance; // rcx
  struct IMPCInputProviderBase *v5; // [rsp+50h] [rbp+10h] BYREF
  struct IMPCInputProviderBase **v6; // [rsp+60h] [rbp+20h]

  v3 = *((_QWORD *)this + 394);
  if ( *(_BYTE *)(v3 + 64) )
  {
    if ( *(_BYTE *)(v3 + 56) && *(_BYTE *)(v3 + 65) )
    {
      if ( ((*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2) & 2) != 0 )
      {
        MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v3, 0, 1, 0);
        *(_OWORD *)v3 = 0uLL;
        *(_OWORD *)(v3 + 16) = 0uLL;
        *(_DWORD *)(v3 + 32) = 0;
      }
    }
    else
    {
      *(_OWORD *)v3 = 0uLL;
      *(_OWORD *)(v3 + 16) = 0uLL;
      *(_DWORD *)(v3 + 32) = 0;
      MPCCursorManager::UpdateCursorVisibility((MPCCursorManager *)v3, 1, 1, 0);
    }
  }
  v6 = &v5;
  v5 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 8LL))(a2);
  Instance = MPCGestureHandlerManager::GetInstance();
  MPCGestureHandlerManager::DetachProvider(Instance);
}
