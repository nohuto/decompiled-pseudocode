/*
 * XREFs of ?GetRuntimeClassName@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800ED690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetRuntimeClassName(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.OneCore.ViewEventHandlers.ComponentRelationshipStore", 0x45u, a2);
}
