/*
 * XREFs of ?CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x18011C2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x18011D948 (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x18011DA98 (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ??$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@@wil@@YA?AV?$ComPtr@VXamlExplorerHostWindow@@@WRL@Microsoft@@AEAPEAUIXamlExplorerHostWindowCreatedCallback@@@Z @ 0x18011EB44 (--$MakeAndInitializeOrThrow@VXamlExplorerHostWindow@@AEAPEAUIXamlExplorerHostWindowCreatedCallba.c)
 *     WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_6c284911f69a96f51fa6281be71911ea___ @ 0x18011ECA0 (WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExplo_ea_18011ECA0.c)
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x180122374 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall XamlExplorerHostShellComponent::CreateXamlExplorerHostWindow(
        XamlExplorerHostShellComponent *this,
        struct IXamlExplorerHostWindowCreatedCallback *a2,
        struct tagRECT *a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v6; // r14
  RTL_SRWLOCK *v7; // rsi
  struct IXamlExplorerHostWindowCreatedCallback **v8; // rax
  struct IXamlExplorerHostWindowCreatedCallback *v9; // rbx
  __int64 v10; // rcx
  void *v11; // rdi
  __int64 v12; // rdi
  int v13; // eax
  int v14; // eax
  const char *v15; // r9
  unsigned int v16; // ebx
  void **v17; // rcx
  __int64 result; // rax
  void **v19; // rcx
  int v20[4]; // [rsp+20h] [rbp-98h]
  __int128 v21; // [rsp+40h] [rbp-78h]
  __int128 v22; // [rsp+50h] [rbp-68h] BYREF
  int v23; // [rsp+60h] [rbp-58h]
  __int64 v24; // [rsp+70h] [rbp-48h]
  struct IXamlExplorerHostWindowCreatedCallback *v25; // [rsp+78h] [rbp-40h]
  struct IXamlExplorerHostWindowCreatedCallback *v26; // [rsp+80h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v28; // [rsp+C0h] [rbp+8h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v29; // [rsp+C8h] [rbp+10h] BYREF
  PSRWLOCK SRWLock; // [rsp+D0h] [rbp+18h] BYREF

  v24 = -2LL;
  try
  {
    v6 = a5;
    *a5 = 0LL;
    v21 = (__int128)*a3;
    v29 = a2;
    v7 = (RTL_SRWLOCK *)*((_QWORD *)this + 7);
    a5 = 0LL;
    wil::srwlock::lock_exclusive(v7 + 10, &SRWLock);
    XamlExplorerHost::EnsureMetadataRegistered(v7);
    XamlExplorerHost::EnsureHostAppCreated(v7);
    v8 = (struct IXamlExplorerHostWindowCreatedCallback **)wil::MakeAndInitializeOrThrow<XamlExplorerHostWindow,IXamlExplorerHostWindowCreatedCallback * &>(
                                                             &v28,
                                                             &v29);
    v9 = *v8;
    v25 = *v8;
    *v8 = 0LL;
    v10 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v26 = v9;
    if ( v9 )
      (*(void (__fastcall **)(struct IXamlExplorerHostWindowCreatedCallback *))(*(_QWORD *)v9 + 8LL))(v9);
    *(_QWORD *)v20 = v21;
    v11 = Platform::Details::Heap::Allocate(0x28uLL, 0x140uLL);
    v29 = v9;
    if ( v9 )
      (*(void (__fastcall **)(struct IXamlExplorerHostWindowCreatedCallback *))(*(_QWORD *)v9 + 8LL))(v9);
    v12 = WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_6c284911f69a96f51fa6281be71911ea___(
            v11,
            &v29);
    v20[3] = HIDWORD(v21) - DWORD1(v21);
    v20[2] = DWORD2(v21) - v21;
    v22 = *(_OWORD *)v20;
    v23 = 1;
    WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView(v7[8].Ptr, &v22, v12);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = (**(__int64 (__fastcall ***)(struct IXamlExplorerHostWindowCreatedCallback *, GUID *, void ***))v9)(
            v9,
            &GUID_a9728204_899b_46a5_9344_43e74614d24b,
            &a5);
    if ( v13 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x98,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)v13);
    (*(void (__fastcall **)(struct IXamlExplorerHostWindowCreatedCallback *))(*(_QWORD *)v9 + 16LL))(v9);
    (*(void (__fastcall **)(struct IXamlExplorerHostWindowCreatedCallback *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v14 = (*(__int64 (__fastcall **)(void **, const struct _GUID *, void **))*a5)(a5, a4, v6);
    v16 = v14;
    if ( v14 >= 0 )
    {
      v19 = a5;
      if ( a5 )
      {
        a5 = 0LL;
        (*((void (__fastcall **)(void **))*v19 + 2))(v19);
      }
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x68,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
        (const char *)(unsigned int)v14);
      v17 = a5;
      if ( a5 )
      {
        a5 = 0LL;
        (*((void (__fastcall **)(void **))*v17 + 2))(v17);
      }
      result = v16;
    }
  }
  catch ( ... )
  {
    LODWORD(a5) = wil::details::in1diag3::Return_CaughtException(
                    retaddr,
                    (void *)0x6B,
                    (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
                    v15);
    return (unsigned int)a5;
  }
  return result;
}
