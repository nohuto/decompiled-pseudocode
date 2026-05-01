/*
 * XREFs of ?CCharmsWindowManager_CreateInstance@@YAJPEAUIImmersiveApplicationTransitionHelper@@AEBU_GUID@@PEAPEAX@Z @ 0x18003CD78
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800106D8 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  v5 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    *v5 = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CWRLObjectWithSite>'};
    v5[2] = 0LL;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IImmersiveCharmsWindowManager,ICharmWindowManagerInternal>::`vftable';
    v5[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IImmersiveCharmsWindowManager,ICharmWindowManagerInternal>::`vftable'{for `IImmersiveCharmsWindowManager'};
    v5[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IImmersiveCharmsWindowManager,ICharmWindowManagerInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ICharmWindowManagerInternal>'};
    *((_DWORD *)v5 + 11) = 1;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v6 = &CCharmsWindowManager::`vftable';
    v6[3] = &CCharmsWindowManager::`vftable'{for `IImmersiveCharmsWindowManager'};
    v6[4] = &CCharmsWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ICharmWindowManagerInternal>'};
    v6[6] = &CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::`vftable';
    v6[7] = 0LL;
    v6[8] = 0LL;
    v6[9] = 0LL;
    v6[10] = 0LL;
    *((_DWORD *)v6 + 22) = 0;
    v6[12] = 0LL;
    if ( (struct IImmersiveApplicationTransitionHelper *)v6[12] != a1 )
    {
      if ( a1 )
        (*(void (__fastcall **)(struct IImmersiveApplicationTransitionHelper *))(*(_QWORD *)a1 + 8LL))(a1);
      v8 = v6[12];
      v6[12] = a1;
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
