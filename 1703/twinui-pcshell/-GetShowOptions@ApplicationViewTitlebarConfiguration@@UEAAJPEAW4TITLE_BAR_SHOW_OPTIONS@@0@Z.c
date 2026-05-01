/*
 * XREFs of ?GetShowOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SHOW_OPTIONS@@0@Z @ 0x18005D690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::GetShowOptions(
        ApplicationViewTitlebarConfiguration *this,
        enum TITLE_BAR_SHOW_OPTIONS *a2,
        enum TITLE_BAR_SHOW_OPTIONS *a3)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 11);
  *(_DWORD *)a3 = *((_DWORD *)this + 12);
  return *((_DWORD *)this + 11) == 0 ? 0x80070490 : 0;
}
