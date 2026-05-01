/*
 * XREFs of ??0XamlExplorerHost@@QE$AAA@XZ @ 0x180147890
 * Callers:
 *     ?RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ @ 0x180146318 (-RuntimeClassInitialize@XamlExplorerHostShellComponent@@QEAAJXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?s_LoadResources@XamlExplorerHost@@CAJXZ @ 0x18014893C (-s_LoadResources@XamlExplorerHost@@CAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall XamlExplorerHost::XamlExplorerHost(__int64 a1)
{
  __int64 v2; // rcx
  HRESULT Instance; // eax
  int Resources; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  Platform::Object::Object(a1 + 16);
  *(_QWORD *)a1 = &XamlExplorerHost::`vftable'{for `__IXamlExplorerHostPublicNonVirtuals'};
  *(_QWORD *)(a1 + 8) = &XamlExplorerHost::`vftable'{for `WindowsInternal::ComposableShell::Desktop::IDesktopAppHost'};
  *(_QWORD *)(a1 + 16) = &XamlExplorerHost::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 24) = &XamlExplorerHost::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 32) = &XamlExplorerHost::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 104) = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  InitializeSRWLock((PSRWLOCK)(a1 + 88));
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Instance = CoCreateInstance(
               &CLSID_XamlRuntimeSiteAggregator,
               0LL,
               1u,
               &GUID_00bb2761_6a77_11d0_a535_00c04fd7d062,
               (LPVOID *)(a1 + 48));
  if ( Instance < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1E,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)Instance);
    __debugbreak();
  }
  Resources = XamlExplorerHost::s_LoadResources();
  if ( Resources < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhost.cpp",
      (const char *)(unsigned int)Resources);
  return a1;
}
