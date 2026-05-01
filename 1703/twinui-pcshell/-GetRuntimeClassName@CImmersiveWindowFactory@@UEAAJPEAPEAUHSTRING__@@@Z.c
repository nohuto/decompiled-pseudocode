/*
 * XREFs of ?GetRuntimeClassName@CImmersiveWindowFactory@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801918C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CImmersiveWindowFactory::GetRuntimeClassName(CImmersiveWindowFactory *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.UI.Core.ImmersiveCoreWindowFactory", 0x2Au, a2);
}
