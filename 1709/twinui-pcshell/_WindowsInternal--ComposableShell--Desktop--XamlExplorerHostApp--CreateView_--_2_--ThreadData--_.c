/*
 * XREFs of _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_ThreadData @ 0x18014D248
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_1_::dtor$8 @ 0x1801F039B (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_1_--dtor$8.c)
 * Callees:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x18014CD24 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_ThreadData(
        __int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx

  v1 = (_QWORD *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 48) = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()(a1 + 24);
  }
  v2 = v1[2];
  if ( v2 )
  {
    v1[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = v1[1];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( *v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
}
