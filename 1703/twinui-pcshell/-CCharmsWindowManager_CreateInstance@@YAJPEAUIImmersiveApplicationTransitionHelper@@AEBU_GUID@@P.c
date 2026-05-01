/*
 * XREFs of ?CCharmsWindowManager_CreateInstance@@YAJPEAUIImmersiveApplicationTransitionHelper@@AEBU_GUID@@PEAPEAX@Z @ 0x18003BAD8
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180010198 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCharmsWindowManager_CreateInstance(
        struct IImmersiveApplicationTransitionHelper *a1,
        const struct _GUID *a2,
        void **a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // edi
  __int64 v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, void **); // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, void **); // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  v5 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    *v5 = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::Nil>,1,1>'};
    v5[1] = 0LL;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IImmersiveCharmsWindowManager,ICharmWindowManagerInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v5[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IImmersiveCharmsWindowManager,ICharmWindowManagerInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IImmersiveCharmsWindowManager'};
    v5[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IImmersiveCharmsWindowManager,ICharmWindowManagerInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ICharmWindowManagerInternal,Microsoft::WRL::Details::Nil>,1,0>'};
    *((_DWORD *)v5 + 9) = 1;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v6 = &CCharmsWindowManager::`vftable';
    v6[2] = &CCharmsWindowManager::`vftable'{for `IImmersiveCharmsWindowManager'};
    v6[3] = &CCharmsWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<ICharmWindowManagerInternal,Microsoft::WRL::Details::Nil>,1,0>'};
    v6[5] = &CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::`vftable';
    v6[6] = 0LL;
    v6[7] = 0LL;
    v6[8] = 0LL;
    v6[9] = 0LL;
    *((_DWORD *)v6 + 20) = 0;
    v6[11] = 0LL;
    if ( (struct IImmersiveApplicationTransitionHelper *)v6[11] != a1 )
    {
      if ( a1 )
        (*(void (__fastcall **)(struct IImmersiveApplicationTransitionHelper *))(*(_QWORD *)a1 + 8LL))(a1);
      v8 = v6[11];
      v6[11] = a1;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD))*v6)(v6, &GUID_abda261c_6cda_4269_9160_4a16fbc0ffee, &v11);
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    if ( v7 >= 0 )
      v7 = (**v11)(v11, &GUID_abda261c_6cda_4269_9160_4a16fbc0ffee, a3);
  }
  else
  {
    v7 = -2147024882;
  }
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, void **)))(*v9)[2])(v9);
  }
  return (unsigned int)v7;
}
