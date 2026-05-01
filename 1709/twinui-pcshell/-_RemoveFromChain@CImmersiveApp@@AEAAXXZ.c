/*
 * XREFs of ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x1800597E0
 * Callers:
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1800575B0 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x18005C718 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x18005CE04 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801E3068 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1801E3140 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveApp::_RemoveFromChain(CImmersiveApp *this)
{
  char *v2; // rax
  char *v3; // rbx
  __int64 v4; // rax
  _BYTE *v5; // rcx
  IUnknown *v6; // rsi
  IUnknown *v7; // rax
  IUnknown *v8; // rdi
  DWORD CurrentThreadId; // eax
  int v10; // edi
  __int64 v11; // rcx

  if ( *((_QWORD *)this + 25) )
  {
    v2 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    v3 = v2;
    if ( v2 )
    {
      *(_DWORD *)v2 = 0;
      *((_QWORD *)v2 + 1) = 0LL;
      `eh vector constructor iterator'(
        v2 + 16,
        0x18uLL,
        2uLL,
        (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::Payload,
        (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload);
      v4 = 2LL;
      v5 = v3 + 68;
      do
      {
        *v5 = 0;
        v5 += 8;
        --v4;
      }
      while ( v4 );
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal((char *)this + 176, v3);
      *(_DWORD *)v3 = 1;
      v6 = 0LL;
      v7 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v8 = v7;
      if ( v7 )
      {
        v7->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
        HIDWORD(v7[1].lpVtbl) = 1;
        v7->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        v8->lpVtbl = (struct IUnknownVtbl *)off_1801FD9E8;
        v8[2].lpVtbl = (struct IUnknownVtbl *)v3;
        v6 = v8;
      }
      CurrentThreadId = GetCurrentThreadId();
      v10 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, 0, v6, 0LL);
      if ( v6 )
        ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
      if ( v10 >= 0 )
        v3 = 0LL;
    }
    if ( v3 )
    {
      if ( !*(_DWORD *)v3 )
        Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(v3);
      `eh vector destructor iterator'(
        v3 + 16,
        0x18uLL,
        2uLL,
        (void (*)(void *))Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload);
      v11 = *((_QWORD *)v3 + 1);
      if ( v11 )
      {
        *((_QWORD *)v3 + 1) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      operator delete(v3);
    }
  }
}
