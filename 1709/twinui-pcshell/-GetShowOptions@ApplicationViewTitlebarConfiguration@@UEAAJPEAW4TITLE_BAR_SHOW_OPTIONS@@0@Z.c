/*
 * XREFs of ?GetShowOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SHOW_OPTIONS@@0@Z @ 0x18005F370
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
  *(_DWORD *)a2 = *((_DWORD *)this + 15);
  *(_DWORD *)a3 = *((_DWORD *)this + 16);
  return *((_DWORD *)this + 15) == 0 ? 0x80070490 : 0;
}
