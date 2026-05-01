/*
 * XREFs of ?get_LauncherExecutable@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIStorageFile@Storage@5@@Z @ 0x18002A940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LauncherExecutable(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::Storage::IStorageFile **a2)
{
  __int64 v4; // rcx

  *a2 = 0LL;
  if ( *((_QWORD *)this + 37) )
  {
    v4 = *((_QWORD *)this + 37);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *a2 = (struct Windows::Storage::IStorageFile *)*((_QWORD *)this + 37);
  }
  return 0LL;
}
