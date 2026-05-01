/*
 * XREFs of ?GetVisibility@ApplicationViewTitlebarConfiguration@@UEAAJPEAH@Z @ 0x180026280
 * Callers:
 *     _lambda_9d63f641584ad32e324d3d55f9a00553_::operator() @ 0x18008B97C (_lambda_9d63f641584ad32e324d3d55f9a00553_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::GetVisibility(
        ApplicationViewTitlebarConfiguration *this,
        int *a2)
{
  *a2 = *((unsigned __int8 *)this + 49);
  return *((_BYTE *)this + 48) == 0 ? 0x80070490 : 0;
}
