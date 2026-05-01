/*
 * XREFs of ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x18011DA98
 * Callers:
 *     ?CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x18011C2F0 (-CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCr.c)
 *     ?CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18011DBEC (-CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEA.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x18012218C (--0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvid.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall XamlExplorerHost::EnsureHostAppCreated(__int64 a1)
{
  int v2; // eax
  void *v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, void *, _QWORD *); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, void *, __int64 *); // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h]
  __int64 v14; // [rsp+68h] [rbp+20h]

  if ( !*(_QWORD *)(a1 + 64) )
  {
    v11 = 0LL;
    v2 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(a1 + 48))(
           *(_QWORD *)(a1 + 48),
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v11);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x4E,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
        (const char *)(unsigned int)v2);
      __debugbreak();
    }
    v3 = Platform::Details::Heap::Allocate(0xE0uLL, 0xF8uLL);
    v13 = (__int64)v3;
    v4 = 0LL;
    v12 = 0LL;
    if ( v11 )
    {
      v5 = (**v11)(v11, &_uuidof__AUIXamlMetadataProvider_Markup_Xaml_UI_Windows__, &v12);
      if ( v5 < 0 )
        __abi_WinRTraiseException(v5);
      v4 = v12;
    }
    v14 = v4;
    v6 = WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp(
           v3,
           v4,
           *(_QWORD *)(a1 + 40));
    v7 = v6;
    v13 = v6;
    if ( v6 != *(_QWORD *)(a1 + 64) )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      *(_QWORD *)(a1 + 64) = v7;
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v9)[2])(v9);
    }
  }
}
