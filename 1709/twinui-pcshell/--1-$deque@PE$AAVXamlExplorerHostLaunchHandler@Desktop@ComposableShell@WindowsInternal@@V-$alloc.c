/*
 * XREFs of ??1?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@QEAA@XZ @ 0x180152690
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x180150C50 (-__abi_Release@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@U.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp_::_1_::dtor$4 @ 0x1801F02D4 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--XamlExplorerHostAp_ea_1801F02D4.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::~deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
        __int64 a1)
{
  __int64 i; // rcx
  __int64 v3; // rcx
  __int64 v5; // rdi
  void *v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax

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
    v6 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v5);
    if ( v6 )
      operator delete(v6);
  }
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v8 < 0x1000 )
      {
LABEL_19:
        operator delete((void *)v7);
        goto LABEL_21;
      }
      if ( (v7 & 0x1F) == 0 )
      {
        v9 = *(_QWORD *)(v7 - 8);
        if ( v9 < v7 )
        {
          v7 = v7 - v9 - 8;
          if ( v7 <= 0x1F )
          {
            v7 = v9;
            goto LABEL_19;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v7);
  }
LABEL_21:
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  operator delete(*(void **)a1);
  *(_QWORD *)a1 = 0LL;
}
