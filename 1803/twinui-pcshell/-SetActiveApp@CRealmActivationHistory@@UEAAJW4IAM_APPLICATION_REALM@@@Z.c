/*
 * XREFs of ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x180090200
 * Callers:
 *     ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180078AA0 (-DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x1800446F0 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetRealmForActivation@CRealmActivationHistory@@AEAA?AUREALM_ACTIVATION@@W4IAM_APPLICATION_REALM@@@Z @ 0x1800902E8 (-_GetRealmForActivation@CRealmActivationHistory@@AEAA-AUREALM_ACTIVATION@@W4IAM_APPLICATION_REAL.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureLauncher@CRealmActivationHistory@@AEAAJXZ @ 0x180128974 (-_EnsureLauncher@CRealmActivationHistory@@AEAAJXZ.c)
 *     ?_TrySwitchToMarkedWindow@CRealmActivationHistory@@AEAAJXZ @ 0x180128A50 (-_TrySwitchToMarkedWindow@CRealmActivationHistory@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CRealmActivationHistory::SetActiveApp(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(__int64, int, HWND); // rax
  HRESULT Service; // ebx
  __int64 (__fastcall *v10)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  RTL_SRWLOCK *v11; // rcx
  unsigned int v12; // esi
  int v13; // [rsp+20h] [rbp-30h] BYREF
  IUnknown *punk[2]; // [rsp+28h] [rbp-28h] BYREF
  void *ppvOut[2]; // [rsp+38h] [rbp-18h] BYREF

  punk[1] = (IUnknown *)-2LL;
  v13 = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(_DWORD *)CRealmActivationHistory::_GetRealmForActivation(a1 - 72, ppvOut, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( a2 == 16 && !v4 )
    v4 = 16;
  if ( (a2 & 4) != 0
    && v4 - 1 <= 1
    && (int)CRealmActivationHistory::_EnsureLauncher((CRealmActivationHistory *)(a1 - 72)) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 336) + 56LL))(*(_QWORD *)(a1 + 336), &v13) >= 0
    && v13 )
  {
    v4 = 4;
  }
  switch ( v4 )
  {
    case 1u:
    case 2u:
      v5 = *(_QWORD *)(a1 + 328);
      v6 = *(__int64 (__fastcall **)(__int64, int, HWND))(*(_QWORD *)v5 + 128LL);
      if ( v6 == CApplicationManager::SetActiveApp )
        return (unsigned int)CApplicationManager::SetActiveApp(v5, v4, 0LL);
      else
        return (unsigned int)v6(v5, v4, 0LL);
    case 4u:
      Service = CRealmActivationHistory::_EnsureLauncher((CRealmActivationHistory *)(a1 - 72));
      if ( Service < 0 )
        return (unsigned int)Service;
      Service = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 336) + 56LL))(*(_QWORD *)(a1 + 336), &v13);
      if ( Service < 0 )
        return (unsigned int)Service;
      if ( v13 )
        return (unsigned int)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 72LL))(*(_QWORD *)(a1 + 336));
      v12 = a2 & 0xFFFFFFFB;
      return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v12);
    case 8u:
      Service = CRealmActivationHistory::_TrySwitchToMarkedWindow((CRealmActivationHistory *)(a1 - 72));
      if ( Service >= 0 )
        return (unsigned int)Service;
      v12 = a2 & 0xFFFFFFF7;
      return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v12);
    case 0x10u:
      ppvOut[0] = 0LL;
      punk[0] = 0LL;
      v13 = 2;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)punk);
      v10 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, struct _GUID *, void **))(*(_QWORD *)(a1 - 40) + 32LL);
      v11 = (RTL_SRWLOCK *)(a1 - 40);
      if ( v10 == CWRLObjectWithGITSite::GetSite )
        CWRLObjectWithGITSite::GetSite(v11, &GUID_00000000_0000_0000_c000_000000000046, (void **)punk);
      else
        v10(v11, &GUID_00000000_0000_0000_c000_000000000046, (void **)punk);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
      Service = IUnknown_QueryService(
                  punk[0],
                  &GUID_afa69bd5_4b7a_4aa4_a984_53e14f61dd67,
                  &GUID_afa69bd5_4b7a_4aa4_a984_53e14f61dd67,
                  ppvOut);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)punk);
      if ( Service >= 0 )
        Service = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut[0] + 56LL))(ppvOut[0]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
      break;
    default:
      Service = -2147319765;
      break;
  }
  return (unsigned int)Service;
}
