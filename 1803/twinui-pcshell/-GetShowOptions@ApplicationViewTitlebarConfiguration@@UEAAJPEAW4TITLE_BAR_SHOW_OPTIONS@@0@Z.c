/*
 * XREFs of ?GetShowOptions@ApplicationViewTitlebarConfiguration@@UEAAJPEAW4TITLE_BAR_SHOW_OPTIONS@@0@Z @ 0x180026260
 * Callers:
 *     ?ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z @ 0x180025CE0 (-ConvertWithViewInfo@WindowSizeConverter@@AEAAJUtagSIZE@@PEAVSizeConversionViewInfo@@PEAU2@@Z.c)
 *     _lambda_9d63f641584ad32e324d3d55f9a00553_::operator() @ 0x18008B97C (_lambda_9d63f641584ad32e324d3d55f9a00553_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::GetShowOptions(
        ApplicationViewTitlebarConfiguration *this,
        enum TITLE_BAR_SHOW_OPTIONS *a2,
        enum TITLE_BAR_SHOW_OPTIONS *a3)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 13);
  *(_DWORD *)a3 = *((_DWORD *)this + 14);
  return *((_DWORD *)this + 13) == 0 ? 0x80070490 : 0;
}
