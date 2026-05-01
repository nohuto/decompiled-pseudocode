/*
 * XREFs of ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180054B70
 * Callers:
 *     ?add_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180053F60 (-add_ClientWindowReadyForPresentationChanged@ViewWrapperBase@@UEAAJPEAU-$ITypedEventHandler@PEAU.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180069034 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800993A8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180099488 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800F5D7C (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18025257C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  unsigned int v2; // edi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  Microsoft::WRL::Details *v8; // rsi
  void (*v9)(void); // rax
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  bool v12; // cf
  unsigned __int64 v13; // rax
  unsigned __int64 *v14; // rax
  _QWORD *v15; // rbp
  unsigned __int64 v16; // rax
  void *v17; // rax
  const struct std::nothrow_t *v18; // rdx
  __int64 v19; // rcx
  volatile int *v20; // rdx
  _DWORD *v21; // [rsp+60h] [rbp+8h]

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v21 = v5;
  v6 = v5;
  if ( !v5 )
    return 2147942414LL;
  v8 = (Microsoft::WRL::Details *)(v5 + 3);
  v5[3] = 1;
  *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v9 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
    if ( (char *)v9 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v6 = v21;
    }
    else
    {
      v9();
    }
  }
  *((_QWORD *)v6 + 2) = 0LL;
  *(_QWORD *)v6 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  *((_QWORD *)v6 + 3) = 0LL;
  *((_QWORD *)v6 + 4) = 0LL;
  v10 = *a2;
  v11 = 8 * v10;
  if ( !is_mul_ok(v10, 8uLL) )
    v11 = -1LL;
  v12 = __CFADD__(v11, 8LL);
  v13 = v11 + 8;
  if ( v12 )
    v13 = -1LL;
  v14 = (unsigned __int64 *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
  if ( v14 )
  {
    v15 = v14 + 1;
    *v14 = v10;
    `eh vector constructor iterator'(
      v14 + 1,
      8uLL,
      v10,
      (void (*)(void *))Microsoft::WRL::WeakRef::WeakRef,
      Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>);
  }
  else
  {
    v15 = 0LL;
  }
  *((_QWORD *)v6 + 2) = v15;
  v16 = 8 * v10;
  if ( !is_mul_ok(v10, 8uLL) )
    v16 = -1LL;
  v17 = operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
  v19 = *((_QWORD *)v6 + 2);
  *((_QWORD *)v6 + 4) = v17;
  if ( !v19 )
    goto LABEL_20;
  if ( !v17 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'();
LABEL_20:
    operator delete(*((void **)v6 + 4), v18);
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    v2 = -2147024882;
    goto LABEL_21;
  }
  *((_QWORD *)v6 + 3) = v19;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(v6);
  *a1 = v6;
LABEL_21:
  if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference(v8, v20) )
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
