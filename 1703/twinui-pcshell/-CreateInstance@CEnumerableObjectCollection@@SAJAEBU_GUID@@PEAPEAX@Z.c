/*
 * XREFs of ?CreateInstance@CEnumerableObjectCollection@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180023B20
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180010198 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 *     ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x180010E44 (-_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV-$CCoSimpleArray@V-$ComPtr@UIImmersiveMoni.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180010F60 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?GetAllApplicationsByAppID@CImmersiveAppArray@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x18002BED0 (-GetAllApplicationsByAppID@CImmersiveAppArray@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?CImmersiveAppArray_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18002C144 (-CImmersiveAppArray_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180053950 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     ?GetViews@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1800720C0 (-GetViews@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?GetViewsByZOrder@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180072220 (-GetViewsByZOrder@CApplicationViewManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1800725B0 (-GetViewsByAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18007D0E0 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@@Z @ 0x180088BAC (-ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITas.c)
 *     ?ConvertItemsToObjectArray@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@@Z @ 0x1800CD034 (-ConvertItemsToObjectArray@PWSLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWork.c)
 *     ?RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x1800F69D0 (-RecoverViews@ViewEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 *     ?GetAllTaskbars@XamlTaskbarManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180121020 (-GetAllTaskbars@XamlTaskbarManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::CreateInstance(const struct _GUID *a1, void **a2)
{
  unsigned int v3; // edi
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  *a2 = 0LL;
  v3 = -2147024882;
  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[8] = 0;
    *(_QWORD *)v4 = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
    *((_QWORD *)v4 + 1) = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
    *((_QWORD *)v4 + 2) = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
    v4[6] = 1;
    v4[7] = 4;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *((_QWORD *)v4 + 7) = 0LL;
    *((_QWORD *)v4 + 8) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v3 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, void **))v5)(v5, &GUID_5632b1a4_e38a_400a_928a_d4cd63230295, a2);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v3;
}
