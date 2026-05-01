/*
 * XREFs of ?get_IsEnabled@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAE@Z @ 0x180037960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::get_IsEnabled(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        unsigned __int8 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  *a2 = *((_BYTE *)this + 104);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
