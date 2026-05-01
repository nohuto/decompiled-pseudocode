/*
 * XREFs of ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x1801101D8
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180041090 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800F082C (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@_KPEA_K@Z @ 0x1800F83BC (--$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@-$CActivationBasedCollection@V-$ComPtr@UIIm.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x180111498 (-_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicatio.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x180111718 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicat_ea_180111718.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::_HandleTaskWindowDestruction(
        CApplicationManager *this,
        const struct CTaskWindowFinder *a2)
{
  __int64 v4; // r8
  bool v5; // bl
  __int64 v6; // r15
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v8; // rbx
  bool v9; // bl
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+48h] [rbp-8h]
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF
  __int64 v15; // [rsp+90h] [rbp+40h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v10 = *(_QWORD *)a2;
  v11 = *((_QWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v11);
  v12 = 1;
  v5 = (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByTaskWindow>(
              (int)this + 696,
              (int)&v10,
              v4,
              (int)&v15) >= 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
  if ( v5 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v6 = v15;
    v7 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 88) + 8 * v15);
    (**v7)(v7, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v13);
    v8 = v13;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    if ( (*(unsigned int (__fastcall **)(__int64, const struct CTaskWindowFinder *, __int64 *))(*(_QWORD *)v8 + 80LL))(
           v8,
           a2,
           &v14) == 6 )
      (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 87) + 16LL))((char *)this + 696, v6);
  }
  else
  {
    v10 = *(_QWORD *)a2;
    v11 = *((_QWORD *)a2 + 1);
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v11);
    v12 = 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v9 = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(
                (__int64)this,
                (__int64)&v10,
                &v13,
                &v15) >= 0;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
    if ( v9 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      CApplicationManager::_RemoveWindowFromGlom(this, a2, v13);
    }
  }
  if ( v13 )
    CApplicationManager::_UpdatePerApplicationDataIfNeeded(this, v13, v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
}
