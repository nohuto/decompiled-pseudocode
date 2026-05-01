/*
 * XREFs of ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x18008A518
 * Callers:
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18003F370 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     ?_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIApplicationView@@@Z @ 0x18003F97C (-_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIn.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(_QWORD *a1)
{
  _QWORD *v2; // rbx
  int Error; // edi
  __int64 *v4; // rdi
  __int64 v5; // rcx
  LPUNKNOWN v6; // rcx
  void (*v7)(void); // rax
  HANDLE Event; // rax
  volatile int *v9; // rdx
  LPUNKNOWN ppunkMarshal; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v12 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v2 = v12;
  if ( v12 )
  {
    ppunkMarshal = 0LL;
    *v12 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v4 = v2 + 3;
    v2[3] = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v5 = *v4;
      if ( *v4 )
      {
        *v4 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        v2 + 3);
    }
    v6 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v6->lpVtbl->Release)(v6);
    }
    *((_DWORD *)v2 + 9) = 1;
    *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v7 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
      if ( (char *)v7 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
      else
        v7();
    }
    *v2 = &COperationWaiter::`vftable';
    v2[5] = 0LL;
    Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    v2[5] = Event;
    if ( Event )
      Error = 0;
    else
      Error = ResultFromKnownLastError();
    if ( Error >= 0 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v2);
      Error = 0;
      *a1 = v2;
    }
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v2 + 36), v9) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v2 + 72LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Error;
}
