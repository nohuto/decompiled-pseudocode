/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x1801525AC
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_1_::dtor$1 @ 0x1801F0317 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_1_--dtor$1.c)
 *     __lambda_d1cc878f49256a12ed651bb70f914db7_::operator()_::_1_::dtor$2 @ 0x1801F03CB (__lambda_d1cc878f49256a12ed651bb70f914db7_--operator()_--_1_--dtor$2.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::[Windows::UI::Xaml::IApplicationOverrides]::OnLaunched_::_1_::dtor$9 @ 0x1801F04FF (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--[Windows--UI--Xaml_ea_1801F04FF.c)
 * Callees:
 *     <none>
 */

void __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  int v1; // eax

  v1 = _Mtx_unlock(*a1);
  if ( v1 )
    std::_Throw_C_error(v1);
}
