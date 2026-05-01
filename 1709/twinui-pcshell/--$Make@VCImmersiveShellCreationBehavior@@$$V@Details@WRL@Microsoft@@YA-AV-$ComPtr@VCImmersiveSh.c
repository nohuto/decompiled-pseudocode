/*
 * XREFs of ??$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveShellCreationBehavior@@@12@XZ @ 0x1800E02D8
 * Callers:
 *     ?CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@Z @ 0x1800DF0B0 (-CreateImmersiveShellController@CImmersiveShellBuilder@@UEAAJPEAPEAUIImmersiveShellController@@@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<CImmersiveShellCreationBehavior,>(
        volatile signed __int32 **a1)
{
  Microsoft::WRL::FtmBase *v2; // rax
  Microsoft::WRL::FtmBase *v3; // rbx
  volatile signed __int32 *v4; // rcx

  *a1 = 0LL;
  v2 = (Microsoft::WRL::FtmBase *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    Microsoft::WRL::FtmBase::FtmBase(v2);
    *((_DWORD *)v3 + 13) = 1;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveShellCreationBehavior>::`vftable'{for `Microsoft::WRL::FtmBase'};
    *((_QWORD *)v3 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveShellCreationBehavior>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellCreationBehavior>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_BYTE *)v3 + 56) = 0;
    *(_QWORD *)v3 = &CImmersiveShellCreationBehavior::`vftable'{for `Microsoft::WRL::FtmBase'};
    *((_QWORD *)v3 + 5) = &CImmersiveShellCreationBehavior::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellCreationBehavior>'};
    *((_QWORD *)v3 + 8) = 0LL;
    *((_DWORD *)v3 + 18) = 0;
    *((_QWORD *)v3 + 10) = 0LL;
    *((_QWORD *)v3 + 11) = 0LL;
    *((_QWORD *)v3 + 12) = 0LL;
    *((_QWORD *)v3 + 13) = 0LL;
    v4 = *a1;
    if ( *a1 && _InterlockedExchangeAdd(v4 + 13, 0xFFFFFFFF) == 1 )
    {
      if ( v4 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    *a1 = (volatile signed __int32 *)v3;
  }
  return a1;
}
