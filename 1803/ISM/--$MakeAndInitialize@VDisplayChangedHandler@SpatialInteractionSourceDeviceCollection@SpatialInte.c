/*
 * XREFs of ??$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@V12345@PEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAV2345@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@$$QEAPEAVSpatialInteractionSourceDeviceCollection@SpatialInteractions@58@$$QEA_N@Z @ 0x1800AA53C
 * Callers:
 *     ?EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800A6E64 (-EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *,bool>(
        volatile signed __int32 **a1,
        __int64 **a2,
        __int64 *a3,
        char *a4)
{
  volatile signed __int32 *v8; // rcx
  char *v9; // rax
  char *v10; // rbx
  int v11; // esi
  char v12; // al
  __int64 v13; // rcx
  __int64 *v14; // rsi
  __int64 *v15; // rcx
  __int64 v16; // rdx
  char *v17; // r8
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  signed __int32 v21; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = *a1;
  if ( v8 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v8);
  }
  *a1 = 0LL;
  v9 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-2147024882;
  *(_QWORD *)v9 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
  *((_DWORD *)v9 + 3) = 1;
  *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v10 = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler::`vftable';
  v10[16] = 1;
  *((_QWORD *)v10 + 3) = 0LL;
  *((_QWORD *)v10 + 4) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v10 + 48), 0, 0);
  v12 = *a4;
  v13 = *a3;
  v14 = *a2;
  v10[16] = v12;
  *((_QWORD *)v10 + 4) = v13;
  v15 = (__int64 *)*((_QWORD *)v10 + 3);
  if ( v15 != v14 )
  {
    v16 = *((_QWORD *)v10 + 3);
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(*v14 + 8))(v14, v16);
      v16 = *((_QWORD *)v10 + 3);
    }
    *((_QWORD *)v10 + 3) = v14;
    v15 = v14;
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v15 = (__int64 *)*((_QWORD *)v10 + 3);
    }
  }
  v17 = v10 + 40;
  v18 = *v15;
  if ( v10[16] )
  {
    v19 = (*(__int64 (__fastcall **)(__int64 *, char *, char *))(v18 + 56))(v15, v10, v17);
    v11 = v19;
    if ( v19 < 0 )
    {
      v20 = 111LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_19;
    }
  }
  else
  {
    v19 = (*(__int64 (__fastcall **)(__int64 *, char *, char *))(v18 + 72))(v15, v10, v17);
    v11 = v19;
    if ( v19 < 0 )
    {
      v20 = 115LL;
      goto LABEL_15;
    }
  }
  v11 = 0;
LABEL_19:
  if ( v11 >= 0 )
  {
    do
      v21 = *((_DWORD *)v10 + 3);
    while ( v21 != 0x7FFFFFFF && v21 != _InterlockedCompareExchange((volatile signed __int32 *)v10 + 3, v21 + 1, v21) );
    *a1 = (volatile signed __int32 *)v10;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release((volatile signed __int32 *)v10);
    return 0;
  }
  else
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release((volatile signed __int32 *)v10);
  }
  return (unsigned int)v11;
}
