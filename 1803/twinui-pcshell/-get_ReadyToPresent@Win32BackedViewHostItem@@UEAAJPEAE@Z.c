/*
 * XREFs of ?get_ReadyToPresent@Win32BackedViewHostItem@@UEAAJPEAE@Z @ 0x1801BA380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32BackedViewHostItem::get_ReadyToPresent(HWND *this, unsigned __int8 *a2)
{
  *a2 = IsWindowVisible(this[14]);
  return 0LL;
}
