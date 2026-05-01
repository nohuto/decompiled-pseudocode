/*
 * XREFs of ?s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID@@PEAPEAX@Z @ 0x18002B8C8
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18000A8F0 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x18002BA18 (-RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisibilityOverride::s_CreateInstance(
        struct IImmersiveApplicationVisibilityOverride *a1,
        const struct _GUID *a2,
        void **a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // edi
  signed __int32 v8; // eax
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, void **); // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, void **); // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  v13 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    *v5 = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::Nil>,1,1>'};
    v5[1] = 0LL;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVisibilityOverride,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `CWRLObjectWithSite'};
    v5[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVisibilityOverride,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IVisibilityOverride,Microsoft::WRL::Details::Nil>,1,0>'};
    *((_DWORD *)v5 + 7) = 1;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v6 = &CVisibilityOverride::`vftable'{for `CWRLObjectWithSite'};
    v6[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVisibilityOverride,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IVisibilityOverride,Microsoft::WRL::Details::Nil>,1,0>'};
    v8 = _InterlockedExchangeAdd(
           (volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext,
           1u);
    v6[5] = 0LL;
    *((_DWORD *)v6 + 8) = v8 + 1;
    *((_BYTE *)v6 + 36) = 0;
    v6[6] = 0LL;
    v7 = CVisibilityOverride::RuntimeClassInitialize((CVisibilityOverride *)v6, a1);
    v9 = *v6;
    v10 = v6;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD))v9)(
             v6,
             &GUID_328dedb7_8f68_4e6c_a210_a6c2c37504e8,
             &v13);
      v10 = v6;
      v9 = *v6;
    }
    (*(void (__fastcall **)(_QWORD *))(v9 + 16))(v10);
    if ( v7 >= 0 )
      v7 = (**v13)(v13, &GUID_328dedb7_8f68_4e6c_a210_a6c2c37504e8, a3);
  }
  else
  {
    v7 = -2147024882;
  }
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, void **)))(*v11)[2])(v11);
  }
  return (unsigned int)v7;
}
