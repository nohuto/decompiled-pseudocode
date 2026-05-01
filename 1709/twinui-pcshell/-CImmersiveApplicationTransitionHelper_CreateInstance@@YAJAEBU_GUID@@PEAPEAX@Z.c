/*
 * XREFs of ?CImmersiveApplicationTransitionHelper_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18003C4DC
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800106D8 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper_CreateInstance(const struct _GUID *a1, void **a2)
{
  Microsoft::WRL::FtmBase *v2; // rdi
  Microsoft::WRL::FtmBase *v4; // rax
  Microsoft::WRL::FtmBase *v5; // rbx
  unsigned int v6; // ebx

  *a2 = 0LL;
  v2 = 0LL;
  v4 = (Microsoft::WRL::FtmBase *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::FtmBase::FtmBase(v4);
    *((_DWORD *)v5 + 13) = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationTransitionHelper>::`vftable'{for `Microsoft::WRL::FtmBase'};
    *((_QWORD *)v5 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IImmersiveApplicationTransitionHelper>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationTransitionHelper>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_DWORD *)v5 + 15) = 0;
    *((_DWORD *)v5 + 16) = 0;
    *((_DWORD *)v5 + 17) = 0;
    *((_DWORD *)v5 + 18) = 0;
    *(_QWORD *)v5 = &CImmersiveApplicationTransitionHelper::`vftable'{for `Microsoft::WRL::FtmBase'};
    *((_BYTE *)v5 + 56) = 0;
    *((_QWORD *)v5 + 5) = &CImmersiveApplicationTransitionHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationTransitionHelper>'};
    *((_QWORD *)v5 + 10) = 0LL;
    *((_QWORD *)v5 + 11) = 0LL;
    *((_QWORD *)v5 + 12) = 0LL;
    *((_DWORD *)v5 + 26) = 0;
    v2 = v5;
  }
  v6 = v2 == 0LL ? 0x8007000E : 0;
  if ( v2 )
  {
    v6 = (**(__int64 (__fastcall ***)(Microsoft::WRL::FtmBase *, GUID *, void **))v2)(
           v2,
           &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
           a2);
    (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v6;
}
