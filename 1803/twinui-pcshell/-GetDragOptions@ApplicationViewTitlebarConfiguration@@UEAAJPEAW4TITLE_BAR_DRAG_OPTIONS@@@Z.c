/*
 * XREFs of ?GetDragOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_DRAG_OPTIONS@@@Z @ 0x1800262E0
 * Callers:
 *     _lambda_9d63f641584ad32e324d3d55f9a00553_::operator() @ 0x18008B97C (_lambda_9d63f641584ad32e324d3d55f9a00553_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::GetDragOptions(
        ApplicationViewTitlebarConfiguration *this,
        enum TITLE_BAR_DRAG_OPTIONS *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 20);
  return *((_BYTE *)this + 84) == 0 ? 0x80070490 : 0;
}
