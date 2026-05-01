/*
 * XREFs of ?get_ViewMode@Win32BackedViewHostItem@@UEAAJPEAW4ViewMode@Holographic@Shell@Internal@Windows@@@Z @ 0x180107E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32BackedViewHostItem::get_ViewMode(
        Win32BackedViewHostItem *this,
        enum Windows::Internal::Shell::Holographic::ViewMode *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 32);
  return 0LL;
}
