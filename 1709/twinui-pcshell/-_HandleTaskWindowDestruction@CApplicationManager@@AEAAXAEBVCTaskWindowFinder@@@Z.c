/*
 * XREFs of ?_HandleTaskWindowDestruction@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@@Z @ 0x180014FE0
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180011FE0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x180011F30 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicat_ea_180011F30.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x180014E68 (-_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicatio.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180019BFC (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@_KPEA_K@Z @ 0x18001A274 (--$GetAppPosition@VCImmersiveAppFinderByTaskWindow@@@-$CActivationBasedCollection@V-$ComPtr@UIIm.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::_HandleTaskWindowDestruction(
        CApplicationManager *this,
        const struct CTaskWindowFinder *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  bool v6; // bl
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  IUnknown *v11; // rbx
  struct IUnknownVtbl *lpVtbl; // rcx
  __int64 v13; // rcx
  IUnknown *v14; // rcx
  bool v15; // bl
  __int64 v16; // r9
  __int64 v17; // rcx
  struct IUnknownVtbl *v18; // rcx
  IUnknown *v19; // rcx
  struct IUnknownVtbl *v20; // rdx
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  int v23; // [rsp+48h] [rbp-8h]
  IUnknown *v24; // [rsp+80h] [rbp+30h] BYREF
  IUnknown v25; // [rsp+88h] [rbp+38h] BYREF
  __int64 v26; // [rsp+90h] [rbp+40h] BYREF

  v24 = 0LL;
  v25.lpVtbl = 0LL;
  v21 = *(_QWORD *)a2;
  v5 = *((_QWORD *)a2 + 1);
  v22 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v23 = 1;
  v6 = (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByTaskWindow>(
              (char *)this + 712,
              &v21,
              a3,
              &v26) >= 0;
  v7 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v6 )
  {
    v8 = *((_QWORD *)this + 90);
    v9 = v26;
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v24);
    (***(void (__fastcall ****)(_QWORD, GUID *, __int64))(v8 + 8 * v9))(
      *(_QWORD *)(v8 + 8 * v9),
      &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
      v10);
    v11 = v24;
    lpVtbl = v25.lpVtbl;
    if ( v25.lpVtbl )
    {
      v25.lpVtbl = 0LL;
      (*((void (__fastcall **)(struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
    }
    if ( ((unsigned int (__fastcall *)(IUnknown *, const struct CTaskWindowFinder *, IUnknown *))v11->lpVtbl[3].AddRef)(
           v11,
           a2,
           &v25) == 6 )
      (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 89) + 16LL))((char *)this + 712, v9);
  }
  else
  {
    v21 = *(_QWORD *)a2;
    v13 = *((_QWORD *)a2 + 1);
    v22 = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v23 = 1;
    v14 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      ((void (__fastcall *)(IUnknown *))v14->lpVtbl->Release)(v14);
    }
    v15 = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v21, &v24, &v26) >= 0;
    v17 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( v15 )
    {
      v18 = v25.lpVtbl;
      if ( v25.lpVtbl )
      {
        v25.lpVtbl = 0LL;
        (*((void (__fastcall **)(struct IUnknownVtbl *))v18->QueryInterface + 2))(v18);
      }
      CApplicationManager::_RemoveWindowFromGlom((__int64)this, (__int64)a2, v24, v16, &v25);
    }
  }
  v19 = v24;
  if ( v24 )
  {
    CApplicationManager::_UpdatePerApplicationDataIfNeeded((__int64)this, (__int64)v24, (__int64)v25.lpVtbl);
    v19 = v24;
  }
  v20 = v25.lpVtbl;
  if ( v25.lpVtbl )
  {
    v25.lpVtbl = 0LL;
    (*((void (__fastcall **)(struct IUnknownVtbl *))v20->QueryInterface + 2))(v20);
    v19 = v24;
  }
  if ( v19 )
  {
    v24 = 0LL;
    ((void (__fastcall *)(IUnknown *))v19->lpVtbl->Release)(v19);
  }
}
