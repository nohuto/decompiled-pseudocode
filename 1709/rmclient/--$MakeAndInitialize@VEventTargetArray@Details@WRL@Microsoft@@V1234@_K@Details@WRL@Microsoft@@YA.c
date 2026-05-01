/*
 * XREFs of ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180002AB0
 * Callers:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180002240 (-AddInternal@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Wind.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180002760 (-AddInternal@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeMode.c)
 * Callees:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180002C10 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180003C30 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180007AA0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  void (*v9)(void); // rax
  int v10; // edi
  _DWORD *v12; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  v7 = v4;
  if ( !v4 )
    return 2147942414LL;
  v8 = Microsoft::WRL::Details::ModuleBase::module_;
  v4[3] = 1;
  *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( v8 )
  {
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 8LL);
    if ( (char *)v9 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(
        v8,
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount,
        v5,
        v6);
    else
      v9();
  }
  *((_QWORD *)v7 + 2) = 0LL;
  *(_QWORD *)v7 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  *((_QWORD *)v7 + 3) = 0LL;
  *((_QWORD *)v7 + 4) = 0LL;
  v10 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
          (Microsoft::WRL::Details::EventTargetArray *)v7,
          *a2);
  if ( v10 >= 0 )
  {
    _InterlockedIncrement(v7 + 3);
    v10 = 0;
    *a1 = v12;
  }
  if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return (unsigned int)v10;
}
