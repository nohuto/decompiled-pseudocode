/*
 * XREFs of ?VirtualDesktop_CreateInstance@@YAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1801B86FC
 * Callers:
 *     ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1801B4720 (-Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B5478 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@P.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1801B893C (-RuntimeClassInitialize@VirtualDesktop@@QEAAJPEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInte.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B9290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@M.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B9300 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1801B9300.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktop_CreateInstance(
        struct IVirtualDesktop *a1,
        struct IVirtualDesktopManagerInternal *a2,
        struct IVirtualDesktopNotificationService *a3,
        const struct _GUID *a4,
        void **a5)
{
  char *v8; // rbx
  int v9; // edi
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  int Interface; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  VirtualDesktop *v15; // [rsp+78h] [rbp+38h]

  *a5 = 0LL;
  v15 = 0LL;
  v8 = (char *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_13:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x47,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_16;
  }
  *((_QWORD *)v8 + 2) = &VirtualDesktopNotificationBase<IVirtualDesktopNotification>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 32));
  *((_QWORD *)v8 + 10) = 1LL;
  *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v8 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v8 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::`vftable'{for `IVirtualDesktopInternal'};
  *((_QWORD *)v8 + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v8 = &VirtualDesktop::`vftable';
  *((_QWORD *)v8 + 1) = &VirtualDesktop::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)v8 + 2) = &VirtualDesktop::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v8 + 3) = &VirtualDesktop::`vftable'{for `IVirtualDesktopInternal'};
  *((_QWORD *)v8 + 4) = &VirtualDesktop::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v8 + 11) = 0LL;
  InitializeSRWLock((PSRWLOCK)v8 + 12);
  InitializeSRWLock((PSRWLOCK)v8 + 13);
  *((_QWORD *)v8 + 14) = 0LL;
  *((_QWORD *)v8 + 15) = 0LL;
  *((_QWORD *)v8 + 16) = 0LL;
  *((_QWORD *)v8 + 17) = 0LL;
  *((_QWORD *)v8 + 31) = 0LL;
  *((_DWORD *)v8 + 64) = 0;
  InitializeSRWLock((PSRWLOCK)v8 + 33);
  v9 = VirtualDesktop::RuntimeClassInitialize((VirtualDesktop *)v8, a1, a2, a3);
  if ( v9 >= 0 )
  {
    v10 = *((_QWORD *)v8 + 10);
    while ( v10 >= 0 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 10, v10 + 1, v10);
      if ( v11 == v10 )
        goto LABEL_11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v10 + 16));
LABEL_11:
    v15 = (VirtualDesktop *)v8;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::Release((VirtualDesktop *)v8);
    v9 = 0;
  }
  else
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::Release((VirtualDesktop *)v8);
  }
  if ( v9 < 0 )
    goto LABEL_13;
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::QueryInterface(
                v15,
                &GUID_e62a2edf_0a35_45ae_8951_2893ec19cd86,
                a5);
  v9 = Interface;
  if ( Interface < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)Interface);
LABEL_16:
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::Release(v15);
  return (unsigned int)v9;
}
