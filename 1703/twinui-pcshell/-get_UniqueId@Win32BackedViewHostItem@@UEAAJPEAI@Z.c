/*
 * XREFs of ?get_UniqueId@Win32BackedViewHostItem@@UEAAJPEAI@Z @ 0x1800C1710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32BackedViewHostItem::get_UniqueId(Win32BackedViewHostItem *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 18);
  return 0LL;
}
