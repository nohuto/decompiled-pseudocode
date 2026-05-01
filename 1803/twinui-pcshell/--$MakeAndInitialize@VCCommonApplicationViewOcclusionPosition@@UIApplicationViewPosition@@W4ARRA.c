/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x18008A1CC
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800227EC (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUI.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x1802BE328 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_1802BE328.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJW4ARRANGEMENT_BASED_VIEW_STATE@@AEBUtagRECT@@@Z @ 0x18008A3DC (-RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJW4ARRANGEMENT_BASED_VIEW_S.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
        struct tagRECT **a1,
        unsigned int *a2,
        __int64 a3)
{
  struct tagRECT *v6; // rax
  struct tagRECT *v7; // rbx
  int v8; // edi
  __int128 v9; // xmm1
  struct tagRECT *v10; // rdi
  __int64 v11; // xmm0_8
  __int64 v12; // rcx
  LPUNKNOWN v13; // rcx
  void (*v14)(void); // rax
  volatile int *v15; // rdx
  _OWORD v17[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h]
  LPUNKNOWN ppunkMarshal; // [rsp+80h] [rbp+8h] BYREF
  struct tagRECT *v20; // [rsp+98h] [rbp+20h]

  *a1 = 0LL;
  v6 = (struct tagRECT *)operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v6;
  v7 = v6;
  if ( v6 )
  {
    v6[3].left = 0;
    v6[3].top = 0;
    v6[3].right = 0;
    *(_QWORD *)&v6->left = &CCommonApplicationViewOcclusionPositionImpl::`vftable';
    SetRectEmpty(v6 + 1);
    SetRectEmpty(v7 + 2);
    memset_0(v17, 0, 0x28uLL);
    ppunkMarshal = 0LL;
    v9 = v17[1];
    v10 = v7 + 8;
    *(_OWORD *)((char *)v7 + 60) = v17[0];
    v11 = v18;
    *(_OWORD *)&v7[4].bottom = v9;
    *(_QWORD *)&v7[5].bottom = v11;
    *(_QWORD *)&v7[6].right = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *(_QWORD *)&v7[8].left = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v12 = *(_QWORD *)&v10->left;
      if ( *(_QWORD *)&v10->left )
      {
        *(_QWORD *)&v10->left = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, struct tagRECT *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        &v7[8]);
    }
    v13 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v13->lpVtbl->Release)(v13);
    }
    *(_QWORD *)&v7->left = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>>'};
    v7[8].bottom = 1;
    *(_QWORD *)&v7[6].right = &CCommonApplicationViewOcclusionPosition::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v14 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
      if ( (char *)v14 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
      else
        v14();
    }
    *(_QWORD *)&v7->left = &CCommonApplicationViewOcclusionPosition::`vftable'{for `Microsoft::WRL::Details::Selector<CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>>'};
    *(_QWORD *)&v7[6].right = &CCommonApplicationViewOcclusionPosition::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>>'};
    v8 = CCommonApplicationViewOcclusionPosition::RuntimeClassInitialize(v7, *a2, a3);
    if ( v8 >= 0 )
    {
      *a1 = v7;
      (*(void (__fastcall **)(struct tagRECT *))(*(_QWORD *)&v7->left + 8LL))(v7);
      v8 = 0;
    }
    if ( v7 )
    {
      if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)&v7[8].bottom, v15) )
      {
        (*(void (__fastcall **)(struct tagRECT *, __int64))(*(_QWORD *)&v7->left + 80LL))(v7, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
