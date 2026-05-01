/*
 * XREFs of ?SetVisibility@ApplicationViewTitlebarConfiguration@@UEAAJH@Z @ 0x18005D710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::SetVisibility(
        ApplicationViewTitlebarConfiguration *this,
        int a2)
{
  *((_DWORD *)this + 10) = 2 - (a2 != 0);
  return 0LL;
}
