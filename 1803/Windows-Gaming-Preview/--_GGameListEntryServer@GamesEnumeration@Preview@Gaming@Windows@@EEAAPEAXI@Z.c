/*
 * XREFs of ??_GGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@EEAAPEAXI@Z @ 0x18000E1E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@EEAA@XZ @ 0x1800275CC (--1GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::`scalar deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::~GameListEntryServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
