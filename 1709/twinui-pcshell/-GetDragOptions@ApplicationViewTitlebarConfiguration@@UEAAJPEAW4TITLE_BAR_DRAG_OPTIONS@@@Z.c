/*
 * XREFs of ?GetDragOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_DRAG_OPTIONS@@@Z @ 0x18005F2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::GetDragOptions(
        ApplicationViewTitlebarConfiguration *this,
        enum TITLE_BAR_DRAG_OPTIONS *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 22);
  return *((_BYTE *)this + 92) == 0 ? 0x80070490 : 0;
}
