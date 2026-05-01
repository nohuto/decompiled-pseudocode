/*
 * XREFs of ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x180061BAC
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180058EA0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800605A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_de7a847248f7e9ff51c83bca1460305a___ @ 0x180061A28 (Windows--Internal--ComTaskPool--QueueTask__lambda_de7a847248f7e9ff51c83bca1460305a___.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::RaiseVisibilityChanged(
        Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *this,
        char a2)
{
  volatile signed __int64 *v4; // rbx
  char *v5; // rax
  __int64 v6; // rdx
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  int v10; // edi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  struct IUnknownVtbl *v14[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  volatile signed __int64 *v16; // [rsp+80h] [rbp+18h]

  v4 = 0LL;
  v16 = 0LL;
  v5 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v5;
  if ( v5 )
  {
    v9 = v5 + 16;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 16));
    v8[8] = 1LL;
    *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
    v8[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v9 = &Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    v7 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v8 = &Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs::`vftable';
    v8[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v9 = &Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
    *((_BYTE *)v8 + 72) = a2;
    v4 = v8;
    v16 = v8;
  }
  if ( v4 )
  {
    if ( this )
      (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)this + 8LL))(this);
    v14[0] = (struct IUnknownVtbl *)this;
    v14[1] = (struct IUnknownVtbl *)this;
    if ( this )
      (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)this + 8LL))(this);
    v14[2] = (struct IUnknownVtbl *)v4;
    v11 = *((_QWORD *)v4 + 8);
    while ( v11 >= 0 )
    {
      v7 = (struct Microsoft::WRL::Details::ModuleBase *)(v11 + 1);
      v12 = v11;
      v11 = _InterlockedCompareExchange64(v4 + 8, v11 + 1, v11);
      if ( v12 == v11 )
        goto LABEL_15;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
LABEL_15:
    v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_de7a847248f7e9ff51c83bca1460305a___(
            (__int64)v7,
            v6,
            *((_DWORD *)this + 10),
            v14);
    v4 = v16;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v16);
    (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)this + 16LL))(this);
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
        (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility *))(*(_QWORD *)this + 16LL))(this);
  }
  else
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\ShellObjectHelpers.h",
      (const char *)0x8007000ELL);
  }
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v4);
  return (unsigned int)v10;
}
