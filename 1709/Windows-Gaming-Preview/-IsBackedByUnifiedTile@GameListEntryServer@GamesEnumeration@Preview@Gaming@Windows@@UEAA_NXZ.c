/*
 * XREFs of ?IsBackedByUnifiedTile@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA_NXZ @ 0x18002A530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::IsBackedByUnifiedTile(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 30) )
    return *((_QWORD *)this + 28) != 0LL;
  return result;
}
