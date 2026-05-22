/*
 * XREFs of ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004EC1C
 * Callers:
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004DDF0 (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_03f4dc41ea8f14b1d8dc5b14e548ce90__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x180051100 (std--_Func_impl_no_alloc__lambda_03f4dc41ea8f14b1d8dc5b14e548ce90__void_IMPCInputPr_ea_180051100.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800548CC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800551B0 (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x180058688 (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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

  v3 = *((_QWORD *)this + 254);
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
