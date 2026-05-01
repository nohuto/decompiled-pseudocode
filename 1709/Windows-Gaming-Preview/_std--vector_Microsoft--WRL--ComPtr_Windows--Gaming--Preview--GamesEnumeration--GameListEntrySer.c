/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__std::allocator_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_____::emplace_back_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__const_&___ptr64__::_1_::catch$107 @ 0x180042DDE
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@_K@Z @ 0x18000C574 (-deallocate@-$_Wrap_alloc@V-$allocator@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@G.c)
 *     ??$_Unfancy@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@PEAV123@@Z @ 0x18000DDD8 (--$_Unfancy@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microso.c)
 *     ??$destroy@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$_Wrap_alloc@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Z @ 0x18000DDDC (--$destroy@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsof.c)
 *     _CxxThrowException_0 @ 0x180042090 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__std::allocator_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_____::emplace_back_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__const_____ptr64__::_1_::catch_107(
        __int64 a1,
        _QWORD *a2)
{
  unsigned __int64 v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = a2[18];
  v4 = (__int64 *)std::_Unfancy<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>(v3 + 8LL * a2[7]);
  std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>::destroy<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>(
    v5,
    v4);
  std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>::deallocate(
    v6,
    v3,
    a2[20]);
  throw;
}
