/*
 * XREFs of ?RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x18010E930
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800605A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180061578 (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 *     ?get_FrameworkViewType@ApplicationViewBackedViewHostItem@@UEAAJPEAH@Z @ 0x18010DA20 (-get_FrameworkViewType@ApplicationViewBackedViewHostItem@@UEAAJPEAH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::RaiseFrameworkViewTypeSet(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rsi
  int FrameworkViewType; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rdx
  volatile signed __int64 *v7; // rcx
  char *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  PVOID Ptr; // rbx
  struct IUnknown **i; // rdi
  int v15; // eax
  int v16; // esi
  volatile signed __int64 *v17; // rcx
  volatile signed __int64 *v19; // [rsp+20h] [rbp-20h]
  RTL_SRWLOCK *v20; // [rsp+28h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v22; // [rsp+70h] [rbp+30h] BYREF
  volatile signed __int64 *v23; // [rsp+80h] [rbp+40h]
  signed __int64 v24; // [rsp+88h] [rbp+48h]

  v23 = 0LL;
  v2 = this - 2;
  FrameworkViewType = ApplicationViewBackedViewHostItem::get_FrameworkViewType(
                        (ApplicationViewBackedViewHostItem *)&this[-2],
                        &v22);
  v4 = FrameworkViewType;
  if ( FrameworkViewType < 0 )
  {
    v5 = (unsigned int)FrameworkViewType;
    v6 = 511LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)v5);
    goto LABEL_34;
  }
  v7 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v7);
  }
  v23 = 0LL;
  v8 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
  {
    v4 = -2147024882;
    v5 = 2147942414LL;
    v6 = 512LL;
    goto LABEL_33;
  }
  v10 = v8 + 16;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 16));
  v9[8] = 1LL;
  *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  v9[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v9 = &FrameworkViewTypeSetEventArgs::`vftable';
  v9[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::FtmBase>'};
  *((_DWORD *)v9 + 18) = v22;
  v11 = v9[8];
  v24 = v11;
  while ( v11 >= 0 )
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange64(v9 + 8, v11 + 1, v11);
    if ( v12 == v11 )
      goto LABEL_12;
  }
  _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
LABEL_12:
  v23 = v9;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v9);
  v19 = v23;
  v20 = v2;
  Ptr = 0LL;
  AcquireSRWLockExclusive(this + 67);
  if ( this[66].Ptr )
  {
    Ptr = this[66].Ptr;
    _InterlockedIncrement((volatile signed __int32 *)Ptr + 3);
  }
  if ( this != (RTL_SRWLOCK *)-536LL )
    ReleaseSRWLockExclusive(this + 67);
  if ( Ptr )
  {
    _InterlockedIncrement((volatile signed __int32 *)Ptr + 3);
    for ( i = (struct IUnknown **)*((_QWORD *)Ptr + 2); i != *((struct IUnknown ***)Ptr + 3); ++i )
    {
      v15 = ((__int64 (__fastcall *)(struct IUnknown *, RTL_SRWLOCK *, volatile signed __int64 *))(*i)->lpVtbl[1].QueryInterface)(
              *i,
              v20,
              v19);
      v16 = v15;
      if ( v15 < 0 )
      {
        RoTransformError((unsigned int)v15, 0LL, 0LL);
        if ( v16 == -2147417848 || v16 == -2147023174 || v16 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
            (__int64)&this[66],
            *i);
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Ptr + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)Ptr + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v4 = 0;
LABEL_34:
  v17 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v17);
  }
  return v4;
}
