/*
 * XREFs of ??1TypeName@Interop@Xaml@UI@Windows@@QEAA@XZ @ 0x180128254
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::[Windows::UI::Xaml::Markup::IXamlMetadataProvider]::GetXamlType_::_1_::dtor$0 @ 0x1801A038C (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--[Windows--UI--Xaml--Markup--IXa.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Xaml::Interop::TypeName::~TypeName(HSTRING *this)
{
  WindowsDeleteString_0(*this);
}
