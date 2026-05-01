/*
 * XREFs of ?_HandleApplicationPrecreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1800307B8
 * Callers:
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x1800302C0 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x1800180EC (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByApplication@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@_KPEA_K@Z @ 0x1800197FC (--$GetAppPosition@VCImmersiveAppFinderByApplication@@@-$CActivationBasedCollection@V-$ComPtr@UII.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveWindowManager::_HandleApplicationPrecreation(IUnknown *punkSite, IUnknown *punk)
{
  __int64 *v4; // rsi
  int v5; // ebx
  __int64 v6; // rcx
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  IUnknown *v12; // [rsp+50h] [rbp+20h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp+28h] BYREF

  IUnknown_SetSite(punk, punkSite);
  v12 = punk;
  if ( punk )
    ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
  v4 = (__int64 *)&punkSite[27];
  v5 = ((__int64 (__fastcall *)(IUnknown *, IUnknown **))punkSite[27].lpVtbl->AddRef)(&punkSite[27], &v12);
  v6 = (__int64)v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 < 0 )
    goto LABEL_9;
  v13 = 0LL;
  v12 = 0LL;
  lpVtbl = punk->lpVtbl;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v12);
  ((void (__fastcall *)(IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
    punk,
    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
    v8);
  CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByApplication>(
    (__int64)v4,
    &v12,
    v9,
    &v13);
  v10 = (__int64)v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v12 = punk;
  ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
  v5 = CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::PositionAppAtEnd(
         v4,
         (__int64 *)&v12,
         v13);
  ((void (__fastcall *)(IUnknown *))punk->lpVtbl->Release)(punk);
  if ( v5 < 0 )
LABEL_9:
    IUnknown_SetSite(punk, 0LL);
  return (unsigned int)v5;
}
