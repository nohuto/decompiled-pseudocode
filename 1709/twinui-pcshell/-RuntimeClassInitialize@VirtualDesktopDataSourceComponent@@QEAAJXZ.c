/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ @ 0x1801B3AB8
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopDataSourceComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801B4104 (--$MakeAndInitialize@VVirtualDesktopDataSourceComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800245AC (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B44FC (-VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopControllerInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B8380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopCo.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UIVirtualDesktopControllerInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B83F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1801B83F0.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopDataSourceComponent::RuntimeClassInitialize(VirtualDesktopDataSourceComponent *this)
{
  void **v1; // rsi
  const struct _GUID *v3; // rcx
  int Instance; // ebx
  __int64 v5; // rdx
  __int64 *v6; // rdi
  __int64 v7; // rcx
  char *v8; // rax
  char *v9; // rbx
  _QWORD *v10; // r15
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  int Interface; // eax
  int v14; // eax
  char *v16; // [rsp+20h] [rbp-60h]
  __int128 v17; // [rsp+30h] [rbp-50h] BYREF
  void *v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h]
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v1 = (void **)((char *)this + 152);
  v3 = (const struct _GUID *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(const struct _GUID *))(*(_QWORD *)&v3->Data1 + 16LL))(v3);
  }
  Instance = VirtualDesktopDataSource_CreateInstance(v3, v1);
  if ( Instance < 0 )
  {
    v5 = 33LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasourcecomponent.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  v6 = (__int64 *)((char *)this + 160);
  v7 = *((_QWORD *)this + 20);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *v6 = 0LL;
  v8 = (char *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
  {
    Instance = -2147024882;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x35,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007000ELL);
LABEL_22:
    v5 = 34LL;
    goto LABEL_23;
  }
  v10 = v8 + 24;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 24));
  *((_QWORD *)v9 + 9) = 1LL;
  *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController'};
  *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v9 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::`vftable'{for `IVirtualDesktopControllerInternal'};
  *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v9 = &VirtualDesktopController::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController'};
  *((_QWORD *)v9 + 1) = &VirtualDesktopController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v9 + 2) = &VirtualDesktopController::`vftable'{for `IVirtualDesktopControllerInternal'};
  *v10 = &VirtualDesktopController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v9 + 10) = 0LL;
  *((_QWORD *)v9 + 11) = 0LL;
  *((_QWORD *)v9 + 12) = 0LL;
  InitializeSRWLock((PSRWLOCK)v9 + 13);
  v11 = *((_QWORD *)v9 + 9);
  while ( v11 >= 0 )
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 9, v11 + 1, v11);
    if ( v12 == v11 )
      goto LABEL_14;
  }
  _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
LABEL_14:
  v16 = v9;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::Release(v9);
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::QueryInterface(
                v9,
                &GUID_0e5cbed4_2860_48f0_a7bb_38614ac683ad,
                (char *)this + 160);
  Instance = Interface;
  if ( Interface < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)Interface);
  if ( v16 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::Release(v16);
  if ( Instance < 0 )
    goto LABEL_22;
  v18 = *v1;
  v19 = 0LL;
  v21 = *v6;
  v17 = *(_OWORD *)&SID_VirtualDesktopDataSource.Revision;
  v22 = 0LL;
  v20 = *(_OWORD *)&SID_VirtualDesktopController.Revision;
  v14 = CImmersiveShellComponent::RegisterServiceInformation(
          (VirtualDesktopDataSourceComponent *)((char *)this + 40),
          (__int64)&v17,
          2uLL);
  Instance = v14;
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasourcecomponent.cpp",
      (const char *)(unsigned int)v14);
  return (unsigned int)Instance;
}
