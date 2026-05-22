/*
 * XREFs of ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x180050E44
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004FA00 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18005005C (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18005A0A0 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A148 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A574 (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCSixDofProcessor::EndGesture(MPCSixDofProcessor *this)
{
  unsigned __int64 v2; // rbx
  struct MPCGestureHandlerManager *Instance; // rcx
  MPCGestureHandlerManager *v4; // rcx
  unsigned __int64 v5; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int64 *v6; // [rsp+30h] [rbp-D8h]
  __int64 v7; // [rsp+38h] [rbp-D0h]
  _DWORD v8[712]; // [rsp+40h] [rbp-C8h] BYREF

  v7 = -2LL;
  memset(v8, 0, sizeof(v8));
  v6 = &v5;
  v2 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v5 = v2;
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 8LL))(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  Instance = MPCGestureHandlerManager::GetInstance();
  v8[328] = MPCGestureHandlerManager::GetWorkspaceId(Instance, &v5);
  v8[318] = 2;
  LOBYTE(v8[194]) = 1;
  LOBYTE(v8[272]) = 1;
  v6 = &v5;
  v5 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 8LL))(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v4 = MPCGestureHandlerManager::GetInstance();
  MPCGestureHandlerManager::DownLevelTo2D(v4);
  *((_BYTE *)this + 721) = 0;
  *((_DWORD *)this + 1021) = 0;
  *((_DWORD *)this + 1022) = 0;
  *((_DWORD *)this + 177) = 0;
}
