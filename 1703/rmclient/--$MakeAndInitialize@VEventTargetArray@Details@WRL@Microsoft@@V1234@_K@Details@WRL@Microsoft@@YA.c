/*
 * XREFs of ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x1800028A0
 * Callers:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180002110 (-AddInternal@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Wind.c)
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180002500 (-AddInternal@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeMode.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000728C (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800077D0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180007C7C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18000A0E4 (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  unsigned int v2; // ebp
  _DWORD *v3; // rbx
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  void (*v9)(void); // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  bool v12; // cf
  unsigned __int64 v13; // rax
  unsigned __int64 *v14; // rax
  void *v15; // rdx
  unsigned __int64 v16; // rax
  void *v17; // rax
  __int64 v18; // rcx
  _DWORD *v20; // [rsp+50h] [rbp+8h]
  _DWORD *v21; // [rsp+60h] [rbp+18h]

  v2 = 0;
  v3 = 0LL;
  *a1 = 0LL;
  v21 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v6;
  v7 = v6;
  if ( !v6 )
    goto LABEL_24;
  v8 = Microsoft::WRL::Details::ModuleBase::module_;
  v6[3] = 1;
  *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( v8 )
  {
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 8LL);
    if ( (char *)v9 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v7 = v20;
    }
    else
    {
      v9();
    }
  }
  *((_QWORD *)v7 + 2) = 0LL;
  *(_QWORD *)v7 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  *((_QWORD *)v7 + 3) = 0LL;
  *((_QWORD *)v7 + 4) = 0LL;
  v3 = v7;
  v10 = *a2;
  v11 = 8 * v10;
  v21 = v7;
  if ( !is_mul_ok(v10, 8uLL) )
    v11 = -1LL;
  v12 = __CFADD__(v11, 8LL);
  v13 = v11 + 8;
  if ( v12 )
    v13 = -1LL;
  v14 = (unsigned __int64 *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
  if ( v14 )
  {
    *v14 = v10;
    v15 = v14 + 1;
    if ( v10 )
      memset(v15, 0, 8 * v10);
  }
  else
  {
    v15 = 0LL;
  }
  *((_QWORD *)v7 + 2) = v15;
  v16 = 8 * v10;
  if ( !is_mul_ok(v10, 8uLL) )
    v16 = -1LL;
  v17 = operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
  v18 = *((_QWORD *)v7 + 2);
  *((_QWORD *)v7 + 4) = v17;
  if ( !v18 )
  {
LABEL_23:
    operator delete(*((void **)v7 + 4));
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 4) = 0LL;
LABEL_24:
    v2 = -2147024882;
    goto LABEL_17;
  }
  if ( !v17 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'();
    goto LABEL_23;
  }
  *((_QWORD *)v7 + 3) = v18;
  _InterlockedIncrement(v7 + 3);
  v3 = v7;
  *a1 = v7;
LABEL_17:
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v21 + 24LL))(v21, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v2;
}
