/*
 * XREFs of ?get_Arguments@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801E11A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CLaunchActivatedEventArgs::get_Arguments(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[6], a2);
}
