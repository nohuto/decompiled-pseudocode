/*
 * XREFs of ??$MakeAndInitialize@VImeStatusNotificationExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800AABE4
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VImeStatusNotificationExperienceManagerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800AAB50 (-CreateInstance@-$SimpleClassFactory@VImeStatusNotificationExperienceManagerFactory@@$0A@@WRL@Mi.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividualExperienceManagerFactory@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009AC50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIIndividu.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ImeStatusNotificationExperienceManagerFactory,IUnknown,>(
        void **a1)
{
  char *v2; // rax
  volatile signed __int32 *v3; // rbx
  unsigned int Interface; // edi
  _QWORD *v5; // rdi

  *a1 = 0LL;
  v2 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (volatile signed __int32 *)v2;
  if ( v2 )
  {
    v5 = v2 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 8));
    *((_DWORD *)v3 + 13) = 1;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>::`vftable'{for `IIndividualExperienceManagerFactory'};
    *v5 = &QuickConnectExperienceManagerFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v3 = &ImeStatusNotificationExperienceManagerFactory::`vftable'{for `IIndividualExperienceManagerFactory'};
    *v5 = &QuickConnectExperienceManagerFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>::QueryInterface(
                  (__int64)v3,
                  (__int64)&GUID_00000000_0000_0000_c000_000000000046,
                  a1);
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3 + 13, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
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
  return Interface;
}
