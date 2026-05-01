/*
 * XREFs of ??1?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA@XZ @ 0x18012836C
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x1801269D0 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@U.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp_::_1_::dtor$4 @ 0x1801A0179 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--XamlExplorerHostAp_ea_1801A0179.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::~deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
        __int64 a1)
{
  __int64 i; // rcx
  __int64 v3; // rcx
  __int64 v5; // rdi
  char *v6; // rcx
  char *v7; // rcx

  for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(a1 + 32) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8)
                               + 8
                               * ((*(_QWORD *)(a1 + 16) - 1LL) & ((unsigned __int64)(i + *(_QWORD *)(a1 + 24) - 1LL) >> 1)))
                   + 8LL * (((_DWORD)i + *(_DWORD *)(a1 + 24) - 1) & 1));
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 16);
  while ( v5 )
  {
    --v5;
    v6 = *(char **)(*(_QWORD *)(a1 + 8) + 8 * v5);
    if ( v6 )
      std::_Deallocate(v6, 2uLL, 8uLL);
  }
  v7 = *(char **)(a1 + 8);
  if ( v7 )
    std::_Deallocate(v7, *(_QWORD *)(a1 + 16), 8uLL);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  std::_Deallocate(*(char **)a1, 1uLL, 0x10uLL);
  *(_QWORD *)a1 = 0LL;
}
