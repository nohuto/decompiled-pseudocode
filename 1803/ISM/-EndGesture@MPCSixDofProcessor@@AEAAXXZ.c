/*
 * XREFs of ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x18003F974
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18003E020 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003E6BC (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800548CC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005497C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180054E2C (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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
  _BYTE v8[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v9; // [rsp+60h] [rbp-A8h]
  char v10; // [rsp+2A0h] [rbp+198h]
  char v11; // [rsp+3D8h] [rbp+2D0h]
  int v12; // [rsp+490h] [rbp+388h]
  int WorkspaceId; // [rsp+4B8h] [rbp+3B0h]

  v7 = -2LL;
  memset_0(v8, 0, 0x6C8uLL);
  v9 = 1736;
  v6 = &v5;
  v2 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v5 = v2;
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 8LL))(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  Instance = MPCGestureHandlerManager::GetInstance();
  WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId(Instance, &v5);
  v12 = 2;
  v10 = 1;
  v11 = 1;
  v6 = &v5;
  v5 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 8LL))(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v4 = MPCGestureHandlerManager::GetInstance();
  MPCGestureHandlerManager::DownLevelTo2D(v4);
  *((_BYTE *)this + 2309) = 0;
  *((_DWORD *)this + 703) = 0;
  *((_DWORD *)this + 704) = 0;
  *((_DWORD *)this + 575) = 0;
}
