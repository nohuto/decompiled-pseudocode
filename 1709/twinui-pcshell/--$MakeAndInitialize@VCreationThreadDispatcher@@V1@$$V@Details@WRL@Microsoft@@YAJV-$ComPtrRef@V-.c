/*
 * XREFs of ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x180102C20
 * Callers:
 *     ?RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ @ 0x1800FAAA4 (-RuntimeClassInitialize@HolographicPositioner@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@XamlTaskbarManager@@QEAAJPE$AAVXamlExplorerHost@@@Z @ 0x18014A98C (-RuntimeClassInitialize@XamlTaskbarManager@@QEAAJPE$AAVXamlExplorerHost@@@Z.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x18017A498 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1801B0154 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ @ 0x1800F9F84 (-RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  Microsoft::WRL::FtmBase *v3; // rax
  Microsoft::WRL::FtmBase *v4; // rbx
  int v5; // esi

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    if ( _InterlockedExchangeAdd(v2 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  *a1 = 0LL;
  v3 = (Microsoft::WRL::FtmBase *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::FtmBase::FtmBase(v3);
    *((_DWORD *)v4 + 11) = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v4 = &CreationThreadDispatcher::`vftable';
    *((_QWORD *)v4 + 6) = 0LL;
    v5 = CreationThreadDispatcher::RuntimeClassInitialize(v4);
    if ( v5 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v4 + 11);
      *a1 = (volatile signed __int32 *)v4;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 11, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::FtmBase *, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      return 0;
    }
    else if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(Microsoft::WRL::FtmBase *, __int64))(*(_QWORD *)v4 + 72LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
