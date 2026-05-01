/*
 * XREFs of ??$MakeAndInitialize@VViewManagerBridge@@V1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@@012@$$QEAPEAVViewEventDispatcher@@@Z @ 0x180129078
 * Callers:
 *     ?RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ @ 0x18011C054 (-RuntimeClassInitialize@ViewEventDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ??0ViewManagerBridge@@QEAA@XZ @ 0x18012A9D4 (--0ViewManagerBridge@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z @ 0x180132E14 (-RuntimeClassInitialize@ViewManagerBridge@@QEAAJPEAVViewEventDispatcher@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewManagerBridge,ViewManagerBridge,ViewEventDispatcher *>(
        volatile signed __int32 **a1,
        struct ViewEventDispatcher **a2)
{
  volatile signed __int32 *v4; // rcx
  ViewManagerBridge *v5; // rax
  int v6; // esi
  volatile signed __int32 *v7; // rdi

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 21, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 280LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  *a1 = 0LL;
  v5 = (ViewManagerBridge *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v7 = (volatile signed __int32 *)ViewManagerBridge::ViewManagerBridge(v5);
    v6 = ViewManagerBridge::RuntimeClassInitialize((ViewManagerBridge *)v7, *a2);
    if ( v6 >= 0 )
    {
      if ( v7 )
        _InterlockedIncrement(v7 + 21);
      *a1 = v7;
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd(v7 + 21, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 280LL))(v7, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
      return 0;
    }
    else if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 21, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 280LL))(v7, 1LL);
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
  return (unsigned int)v6;
}
