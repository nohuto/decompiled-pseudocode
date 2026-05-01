/*
 * XREFs of ?get_Arguments@CLaunchActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180192780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CLaunchActivatedEventArgs::get_Arguments(HSTRING *this, HSTRING *a2)
{
  return WindowsDuplicateString(this[6], a2);
}
