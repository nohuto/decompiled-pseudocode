/*
 * XREFs of ?GetSuppressedButtons@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SUPPRESSIBLE_BUTTONS@@0@Z @ 0x180026300
 * Callers:
 *     _lambda_9d63f641584ad32e324d3d55f9a00553_::operator() @ 0x18008B97C (_lambda_9d63f641584ad32e324d3d55f9a00553_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::GetSuppressedButtons(
        ApplicationViewTitlebarConfiguration *this,
        enum TITLE_BAR_SUPPRESSIBLE_BUTTONS *a2,
        enum TITLE_BAR_SUPPRESSIBLE_BUTTONS *a3)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 17);
  *(_DWORD *)a3 = *((_DWORD *)this + 18);
  return *((_DWORD *)this + 17) == 0 ? 0x80070490 : 0;
}
