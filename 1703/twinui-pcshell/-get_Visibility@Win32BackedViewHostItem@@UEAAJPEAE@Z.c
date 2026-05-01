/*
 * XREFs of ?get_Visibility@Win32BackedViewHostItem@@UEAAJPEAE@Z @ 0x1800E28C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32BackedViewHostItem::get_Visibility(HWND *this, unsigned __int8 *a2)
{
  *a2 = IsWindowVisible(this[9]);
  return 0LL;
}
