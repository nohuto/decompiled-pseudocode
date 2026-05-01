/*
 * XREFs of ?put_AffinitizeToExclusiveCpus@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJE@Z @ 0x180037F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::put_AffinitizeToExclusiveCpus(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  *((_BYTE *)this + 168) = a2 != 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
