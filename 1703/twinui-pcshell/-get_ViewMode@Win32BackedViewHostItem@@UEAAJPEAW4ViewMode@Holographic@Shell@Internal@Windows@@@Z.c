/*
 * XREFs of ?get_ViewMode@Win32BackedViewHostItem@@UEAAJPEAW4ViewMode@Holographic@Shell@Internal@Windows@@@Z @ 0x1800E29B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32BackedViewHostItem::get_ViewMode(
        Win32BackedViewHostItem *this,
        enum Windows::Internal::Shell::Holographic::ViewMode *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 22);
  return 0LL;
}
