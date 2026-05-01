/*
 * XREFs of ?GetVisibility@ApplicationViewTitlebarConfiguration@@UEAAJPEAH@Z @ 0x18005F3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::GetVisibility(
        ApplicationViewTitlebarConfiguration *this,
        int *a2)
{
  *a2 = *((_DWORD *)this + 14) == 1;
  return *((_DWORD *)this + 14) == 0 ? 0x80070490 : 0;
}
