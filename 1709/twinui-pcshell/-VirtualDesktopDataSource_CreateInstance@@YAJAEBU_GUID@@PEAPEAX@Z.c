/*
 * XREFs of ?VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B44FC
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ @ 0x1801B3AB8 (-RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAX_K@Z @ 0x1800E5D9C (-_Init@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@2@PEAU32@0@Z @ 0x18012B57C (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$ComPtr@UIVirtualDesktop@@@WRL@Micros.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIBuffer@Streams@Storage@Windows@@U?$CloakedIid@UIBufferByteAccess@Streams@Storage@Windows@@@23@U?$CloakedIid@UIMarshal@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180139680 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIB_ea_180139680.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopDataSourceInternal@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B5F80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDe.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall VirtualDesktopDataSource_CreateInstance(const struct _GUID *a1, void **a2)
{
  volatile signed __int64 *v3; // rax
  volatile signed __int64 *v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  int Interface; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  volatile signed __int64 *v12; // [rsp+80h] [rbp+38h]
  volatile signed __int64 *v13; // [rsp+90h] [rbp+48h]

  *a2 = 0LL;
  v12 = 0LL;
  v3 = (volatile signed __int64 *)operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v13 = v3;
  if ( v3 )
  {
    *((_QWORD *)v3 + 3) = &VirtualDesktopNotificationBase<IVirtualDesktopNotification>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 4));
    *((_QWORD *)v4 + 10) = 1LL;
    *v4 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::`vftable';
    *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v4 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v4 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::`vftable'{for `VirtualDesktopNotificationBase<IVirtualDesktopNotification>'};
    *((_QWORD *)v4 + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v4 = (volatile signed __int64)&VirtualDesktopDataSource::`vftable';
    *((_QWORD *)v4 + 1) = &VirtualDesktopDataSource::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v4 + 2) = &VirtualDesktopDataSource::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v4 + 3) = &VirtualDesktopDataSource::`vftable'{for `VirtualDesktopNotificationBase<IVirtualDesktopNotification>'};
    *((_QWORD *)v4 + 4) = &VirtualDesktopDataSource::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v4 + 11) = 0LL;
    InitializeSRWLock((PSRWLOCK)v4 + 12);
    InitializeSRWLock((PSRWLOCK)v4 + 13);
    *((_QWORD *)v4 + 14) = 0LL;
    *((_QWORD *)v4 + 15) = 0LL;
    *((_QWORD *)v4 + 29) = 0LL;
    *((_DWORD *)v4 + 60) = 0;
    *((_DWORD *)v4 + 62) = 0;
    *((_QWORD *)v4 + 32) = 0LL;
    *((_QWORD *)v4 + 33) = 0LL;
    *((_QWORD *)v4 + 32) = std::_List_alloc<std::_List_base_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>::_Buynode0(
                             v6,
                             0LL,
                             0LL);
    *((_QWORD *)v4 + 34) = 0LL;
    *((_QWORD *)v4 + 35) = 0LL;
    *((_QWORD *)v4 + 36) = 0LL;
    *((_DWORD *)v4 + 62) = 1065353216;
    std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Init(
      (_QWORD *)v4 + 31,
      8LL);
    InitializeSRWLock((PSRWLOCK)v4 + 39);
    v7 = *((_QWORD *)v4 + 10);
    while ( v7 >= 0 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(v4 + 10, v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_9;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
LABEL_9:
    v12 = v13;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::Release(v13);
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::QueryInterface(
                  (VirtualDesktopDataSource *)v13,
                  &GUID_6a44b01b_d9f2_4ed1_afbc_430477598dfc,
                  a2);
    v5 = Interface;
    if ( Interface < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)Interface);
  }
  else
  {
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x53,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v12 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::Release(v12);
  return v5;
}
