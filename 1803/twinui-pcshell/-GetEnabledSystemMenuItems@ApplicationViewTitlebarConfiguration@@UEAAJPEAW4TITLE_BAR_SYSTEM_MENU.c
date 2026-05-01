/*
 * XREFs of ?GetEnabledSystemMenuItems@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SYSTEM_MENU_ITEMS@@@Z @ 0x1800262C0
 * Callers:
 *     _lambda_9d63f641584ad32e324d3d55f9a00553_::operator() @ 0x18008B97C (_lambda_9d63f641584ad32e324d3d55f9a00553_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::GetEnabledSystemMenuItems(
        ApplicationViewTitlebarConfiguration *this,
        enum TITLE_BAR_SYSTEM_MENU_ITEMS *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 19);
  return *((_DWORD *)this + 19) == 0 ? 0x80070490 : 0;
}
