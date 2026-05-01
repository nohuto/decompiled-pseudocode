/*
 * XREFs of ?IsBackedByGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA_NXZ @ 0x18002A510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::IsBackedByGameConfig(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 33) )
    return *((_QWORD *)this + 34) != 0LL;
  return result;
}
