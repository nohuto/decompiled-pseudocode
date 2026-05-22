/*
 * XREFs of ??$MakeAndInitialize@VDisplayChangedHandler@@V1@PEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVSpatialInputControllerCollection@@_N@Details@WRL@Microsoft@@YAJPEAPEAVDisplayChangedHandler@@$$QEAPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@$$QEAPEAVSpatialInputControllerCollection@@$$QEA_N@Z @ 0x180098CF0
 * Callers:
 *     ??$MakeAndInitialize@VDisplayChangedHandler@@V1@PEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVSpatialInputControllerCollection@@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayChangedHandler@@@WRL@Microsoft@@@012@$$QEAPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@$$QEAPEAVSpatialInputControllerCollection@@$$QEA_N@Z @ 0x180098390 (--$MakeAndInitialize@VDisplayChangedHandler@@V1@PEAUIHolographicDisplayWatcher@Internal@Holograp.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DisplayChangedHandler,DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,SpatialInputControllerCollection *,bool>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        char *a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  int v10; // edi
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 *v15; // rcx
  _DWORD *v16; // r8
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a1 = 0LL;
  v8 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
    return (unsigned int)-2147024882;
  *(_QWORD *)v8 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
  v8[3] = 1;
  *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v9 = &DisplayChangedHandler::`vftable';
  *((_BYTE *)v9 + 16) = 1;
  *((_QWORD *)v9 + 3) = 0LL;
  *((_QWORD *)v9 + 4) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v9 + 12), 0, 0);
  v11 = *a4;
  v12 = *a3;
  v13 = *a2;
  *((_BYTE *)v9 + 16) = v11;
  *((_QWORD *)v9 + 4) = v12;
  if ( *((_QWORD *)v9 + 3) != v13 )
  {
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = *((_QWORD *)v9 + 3);
    *((_QWORD *)v9 + 3) = v13;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = (__int64 *)*((_QWORD *)v9 + 3);
  v16 = v9 + 10;
  v17 = *v15;
  if ( !*((_BYTE *)v9 + 16) )
  {
    v18 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _DWORD *))(v17 + 72))(v15, v9, v16);
    v10 = v18;
    if ( v18 < 0 )
    {
      v19 = 235LL;
      goto LABEL_13;
    }
LABEL_16:
    v10 = 0;
    goto LABEL_17;
  }
  v18 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _DWORD *))(v17 + 56))(v15, v9, v16);
  v10 = v18;
  if ( v18 >= 0 )
    goto LABEL_16;
  v19 = 231LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v19,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
    (const char *)(unsigned int)v18);
LABEL_17:
  if ( v10 >= 0 )
  {
    _InterlockedIncrement(v9 + 3);
    *a1 = v9;
    v10 = 0;
  }
  if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v9 + 32LL))(v9, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return (unsigned int)v10;
}
