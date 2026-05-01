/*
 * XREFs of ?_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z @ 0x1800F0B70
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___ @ 0x18000B180 (CDelayIAMOperations--AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18003C194 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800F0A40 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_WindowServiceAvailabilityChanged(
        CApplicationManager *this,
        HWND a2,
        struct _GUID *a3,
        int a4)
{
  unsigned int v8; // eax
  int v9; // ebx
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF

  v11 = -2LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  *(_QWORD *)&v10 = a2;
  DWORD2(v10) = 2;
  if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>((__int64)this, (int)&v10, &v12, 0LL) >= 0 )
  {
    v9 = (a4 != 0) + 4;
    if ( (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 384LL))(v12) == a2 )
      v9 |= 2u;
    *(_QWORD *)&v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    (**(void (__fastcall ***)(__int64, GUID *, __int128 *))v12)(v12, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v10);
    CApplicationManager::_SendServiceAvailabilityChangedNotification((RTL_SRWLOCK *)this, v10, 1u, a3, v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  else if ( !GetPropW(a2, L"DelayServiceAvailabilityChangedOperationId") )
  {
    *(_QWORD *)&v10 = this;
    *((_QWORD *)&v10 + 1) = a2;
    v8 = CDelayIAMOperations::AddOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___(*((int **)this + 99), &v10);
    if ( v8 )
      SetPropW(a2, L"DelayServiceAvailabilityChangedOperationId", (HANDLE)v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
}
