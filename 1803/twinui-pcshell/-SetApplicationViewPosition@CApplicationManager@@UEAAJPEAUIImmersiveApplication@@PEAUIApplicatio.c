/*
 * XREFs of ?SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewPosition@@W4SET_IMM_APP_POS@@@Z @ 0x18010B390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18004361C (-_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800F08B0 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::SetApplicationViewPosition(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        int a4)
{
  int First; // edi
  __int64 v10; // [rsp+28h] [rbp-48h]
  __int64 v11; // [rsp+40h] [rbp-30h]
  __int64 v12; // [rsp+A0h] [rbp+30h] BYREF
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+38h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = 0LL;
  v13 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(
            a1 - 216,
            (__int64)&v13,
            &v12,
            0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( First < 0 )
  {
    if ( !a3 && a4 == 2050 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      if ( (**a2)(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v12) >= 0 )
        First = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 600LL))(v12, 1LL);
    }
  }
  else
  {
    LODWORD(v11) = 1;
    LODWORD(v10) = *(_DWORD *)(a1 + 608);
    CApplicationManager::_SetViewPositionHelper(
      (CApplicationManager *)(a1 - 216),
      a3,
      0LL,
      0LL,
      a4,
      v10,
      0LL,
      0LL,
      v11,
      0,
      (__int64)a2,
      v12);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return (unsigned int)First;
}
