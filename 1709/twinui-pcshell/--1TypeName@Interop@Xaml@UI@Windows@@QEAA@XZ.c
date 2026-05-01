/*
 * XREFs of ??1TypeName@Interop@Xaml@UI@Windows@@QEAA@XZ @ 0x180152584
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::[Windows::UI::Xaml::Markup::IXamlMetadataProvider]::GetXamlType_::_1_::dtor$0 @ 0x1801F0523 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--[Windows--UI--Xaml--Markup--IXa.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Xaml::Interop::TypeName::~TypeName(HSTRING *this)
{
  WindowsDeleteString_0(*this);
}
