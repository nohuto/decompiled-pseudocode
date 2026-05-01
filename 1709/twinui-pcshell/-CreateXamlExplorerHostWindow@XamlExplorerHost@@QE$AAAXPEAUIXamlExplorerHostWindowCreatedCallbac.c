/*
 * XREFs of ?CreateXamlExplorerHostWindow@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x180148338
 * Callers:
 *     ?CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x180146600 (-CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCr.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x180147C78 (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x180147DC8 (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 *     WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_6c284911f69a96f51fa6281be71911ea___ @ 0x180148FCC (WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExplo_ea_180148FCC.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x18014C8B4 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall XamlExplorerHost::CreateXamlExplorerHostWindow(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v8; // r12
  RTL_SRWLOCK *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  void **v12; // r9
  _DWORD *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rbx
  void *v17; // rdi
  __int64 v18; // rdi
  int v19; // eax
  __int128 v20; // [rsp+40h] [rbp-40h]
  __int128 v21; // [rsp+60h] [rbp-20h] BYREF
  int v22; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v24; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+58h]

  HIDWORD(v25) = HIDWORD(a4);
  LODWORD(v25) = 0;
  v8 = a5;
  *a5 = 0LL;
  v9 = a1 + 11;
  AcquireSRWLockExclusive(a1 + 11);
  XamlExplorerHost::EnsureMetadataRegistered((__int64)a1, v10, v11, v12);
  XamlExplorerHost::EnsureHostAppCreated((__int64)a1);
  LODWORD(v25) = 1;
  a5 = 0LL;
  v13 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v13 )
  {
    *(_QWORD *)v13 = &Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v13 + 2));
    v13[13] = 1;
    *(_QWORD *)v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    *((_QWORD *)v13 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v13 = &XamlExplorerHostWindow::`vftable'{for `Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    *((_QWORD *)v13 + 1) = &XamlExplorerHostWindow::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v13 + 7) = 0LL;
    *((_QWORD *)v13 + 8) = 0LL;
    *((_QWORD *)v13 + 9) = 0LL;
    *((_QWORD *)v13 + 10) = 0LL;
    if ( *((_QWORD *)v13 + 7) != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v15 = *((_QWORD *)v13 + 7);
      *((_QWORD *)v13 + 7) = a2;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
    a5 = v13;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = 0LL;
  }
  else
  {
    v14 = 2147942414LL;
  }
  if ( (int)v14 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x24,
      (__int64)"internal\\sdk\\inc\\wil\\wrl.h",
      (const char *)v14);
    __debugbreak();
  }
  v16 = (__int64)a5;
  a5 = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  *(_QWORD *)&v20 = *(_QWORD *)a3;
  DWORD2(v20) = *(_DWORD *)(a3 + 8) - *(_QWORD *)a3;
  HIDWORD(v20) = *(_DWORD *)(a3 + 12) - HIDWORD(*(_QWORD *)a3);
  v17 = Platform::Details::Heap::Allocate(0x28uLL, 0x140uLL);
  v25 = (__int64)v17;
  v24 = v16;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v18 = WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_6c284911f69a96f51fa6281be71911ea___(
          v17,
          &v24);
  v25 = v18;
  v21 = v20;
  v22 = 1;
  WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView(a1[9].Ptr, &v21, v18);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v16)(
          v16,
          &GUID_a9728204_899b_46a5_9344_43e74614d24b,
          v8);
  if ( v19 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x9A,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)v19);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
}
