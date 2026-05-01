/*
 * XREFs of ?GetVisibility@ApplicationViewTitlebarConfiguration@@UEAAJPEAH@Z @ 0x18005D6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::GetVisibility(
        ApplicationViewTitlebarConfiguration *this,
        int *a2)
{
  *a2 = *((_DWORD *)this + 10) == 1;
  return *((_DWORD *)this + 10) == 0 ? 0x80070490 : 0;
}
