/*
 * XREFs of ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x18004A390
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?_GetRealmForActivation@CRealmActivationHistory@@AEAA?AUREALM_ACTIVATION@@W4IAM_APPLICATION_REALM@@@Z @ 0x18004A698 (-_GetRealmForActivation@CRealmActivationHistory@@AEAA-AUREALM_ACTIVATION@@W4IAM_APPLICATION_REAL.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRealmActivationHistory::SetActiveApp(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  HRESULT Service; // ebx
  IUnknown **GITSitePtr; // rbx
  LPARAM v7; // rdx
  void *v8; // rcx
  unsigned int v9; // esi
  IUnknown *v11; // rbx
  __int64 *v12; // rax
  LPARAM v13; // rcx
  void *ppvOut[2]; // [rsp+20h] [rbp-30h] BYREF
  LPARAM lParam[2]; // [rsp+30h] [rbp-20h] BYREF

  ppvOut[1] = (void *)-2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(_DWORD *)CRealmActivationHistory::_GetRealmForActivation(a1 - 56, lParam, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( a2 == 16 && !v4 )
    v4 = 16;
  if ( v4 == 1 || v4 == 2 )
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 312) + 120LL))(
                           *(_QWORD *)(a1 + 312),
                           v4,
                           0LL);
  if ( v4 != 4 )
  {
    if ( v4 != 8 )
    {
      if ( v4 == 16 )
      {
        ppvOut[0] = 0LL;
        GITSitePtr = (IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr(a1 - 32, lParam);
        Service = IUnknown_QueryService(
                    *GITSitePtr,
                    &GUID_1053bc09_f82c_4d8b_b1cc_928287cf7445,
                    &GUID_1053bc09_f82c_4d8b_b1cc_928287cf7445,
                    ppvOut);
        v7 = lParam[0];
        if ( lParam[0] )
        {
          lParam[0] = 0LL;
          (*(void (__fastcall **)(LPARAM))(*(_QWORD *)v7 + 16LL))(v7);
        }
        if ( Service >= 0 )
          Service = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut[0] + 48LL))(ppvOut[0]);
        v8 = ppvOut[0];
        if ( ppvOut[0] )
        {
          ppvOut[0] = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
      else
      {
        return (unsigned int)-2147319765;
      }
      return (unsigned int)Service;
    }
    lParam[0] = 0LL;
    EnumWindows(lambda_21ab0f95d81107e5cccfa51f206c78c4_::_lambda_invoker_cdecl_, (LPARAM)lParam);
    if ( lParam[0] )
      Service = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 312) + 120LL))(
                  *(_QWORD *)(a1 + 312),
                  8LL);
    else
      Service = -2147023728;
    if ( Service >= 0 )
      return (unsigned int)Service;
    v9 = a2 & 0xFFFFFFF7;
    return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v9);
  }
  Service = 0;
  if ( !*(_QWORD *)(a1 + 320) )
  {
    v11 = (IUnknown *)*CWRLObjectWithGITSite::_GetGITSitePtr(a1 - 32, lParam);
    v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)(a1 + 320));
    Service = IUnknown_QueryService(
                v11,
                (const GUID *const)&SID_ImmersiveLauncher,
                &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                (void **)v12);
    v13 = lParam[0];
    if ( lParam[0] )
    {
      lParam[0] = 0LL;
      (*(void (__fastcall **)(LPARAM))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  if ( Service >= 0 )
  {
    Service = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 320) + 56LL))(
                *(_QWORD *)(a1 + 320),
                ppvOut);
    if ( Service >= 0 )
    {
      if ( LODWORD(ppvOut[0]) )
        return (unsigned int)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 72LL))(*(_QWORD *)(a1 + 320));
      v9 = a2 & 0xFFFFFFFB;
      return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v9);
    }
  }
  return (unsigned int)Service;
}
