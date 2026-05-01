/*
 * XREFs of std::make_unique__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_ @ 0x1801240D4
 * Callers:
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x180122374 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::make_unique__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData__WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData_(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rsi
  _QWORD *result; // rax

  v4 = operator new(0x38uLL);
  *(_OWORD *)v4 = *(_OWORD *)a2;
  v4[4] = *(_DWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(a2 + 24));
  *((_QWORD *)v4 + 3) = v5;
  v6 = *(_QWORD *)(a2 + 32);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(a2 + 32));
  *((_QWORD *)v4 + 4) = v6;
  *((_QWORD *)v4 + 5) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  *((_BYTE *)v4 + 48) = *(_BYTE *)(a2 + 48);
  result = a1;
  *(_BYTE *)(a2 + 48) = 0;
  *a1 = v4;
  return result;
}
