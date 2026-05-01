/*
 * XREFs of ?SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewPosition@@W4SET_IMM_APP_POS@@@Z @ 0x180009480
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000E428 (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018100 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::SetApplicationViewPosition(
        __int64 a1,
        int (__fastcall ***a2)(__int64, GUID *, __int64),
        __int64 a3,
        int a4)
{
  __int64 v8; // rcx
  int First; // esi
  int (__fastcall **v10)(__int64, GUID *, __int64); // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // [rsp+A0h] [rbp+8h] BYREF
  int (__fastcall ***v15)(__int64, GUID *, __int64); // [rsp+A8h] [rbp+10h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = 0LL;
  v14 = 0LL;
  v15 = a2;
  if ( a2 )
  {
    ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64)))(*a2)[1])(a2);
    v8 = v14;
  }
  if ( v8 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(a1 - 176, &v15, &v14, 0LL);
  if ( a2 )
    ((void (__fastcall *)(int (__fastcall ***)(__int64, GUID *, __int64)))(*a2)[2])(a2);
  if ( First < 0 )
  {
    if ( !a3 && a4 == 2050 )
    {
      v10 = *a2;
      v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v14);
      if ( (*v10)((__int64)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v11) >= 0 )
        First = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 600LL))(v14, 1LL);
    }
  }
  else
  {
    CApplicationManager::_SetViewPositionHelper(
      a1 - 176,
      a3,
      0LL,
      0LL,
      a4,
      *(_DWORD *)(a1 + 584),
      0LL,
      0LL,
      1,
      0,
      a2,
      v14,
      -2LL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)First;
}
