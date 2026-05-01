/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___::operator() @ 0x180019800
 * Callers:
 *     <none>
 * Callees:
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800159F8 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180017CC8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CDelayIAMOperations::CDelayedOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___::operator()(
        __int64 a1)
{
  int v2; // ebx
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+38h] [rbp-18h] BYREF
  int v7; // [rsp+40h] [rbp-10h]
  unsigned int v8; // [rsp+70h] [rbp+20h] BYREF
  __int64 v9; // [rsp+78h] [rbp+28h] BYREF
  __int64 v10; // [rsp+80h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+38h] BYREF

  if ( (int)CoreEnumWindowServices(*(_QWORD *)(a1 + 24), &v8, &pv) >= 0 )
  {
    if ( v8 )
    {
      v9 = 0LL;
      v6 = *(_QWORD *)(a1 + 24);
      v7 = 2;
      CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(*(_QWORD *)(a1 + 16), &v6, &v9, 0LL);
      v2 = 5;
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 384LL))(v9) == *(_QWORD *)(a1 + 24) )
        v2 = 7;
      v10 = 0LL;
      v3 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v10);
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v9)(v9, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v3);
      CApplicationManager::_SendServiceAvailabilityChangedNotification(*(_QWORD *)(a1 + 16), v10, v8, pv, v2);
      v4 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v5 = v9;
      if ( v9 )
      {
        v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
    CoTaskMemFree(pv);
  }
}
