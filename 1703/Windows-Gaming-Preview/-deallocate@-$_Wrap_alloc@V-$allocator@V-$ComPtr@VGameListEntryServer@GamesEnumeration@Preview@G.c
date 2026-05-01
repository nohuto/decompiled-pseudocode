/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@_K@Z @ 0x180007994
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__std::allocator_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_____::emplace_back_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__const_&___ptr64__::_1_::catch$102 @ 0x18002A798 (_std--vector_Microsoft--WRL--ComPtr_Windows--Gaming--Preview--GamesEnumeration--GameListEntrySer.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>::deallocate(
        __int64 a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rax
  unsigned __int64 v4; // rdx

  if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
  {
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
  }
  if ( 8 * a3 >= 0x1000 )
  {
    if ( ((unsigned __int8)a2 & 0x1F) != 0 )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    v3 = (char *)*((_QWORD *)a2 - 1);
    if ( v3 >= a2 )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    v4 = a2 - v3;
    if ( v4 < 8 )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    if ( v4 > 0x27 )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    a2 = v3;
  }
  operator delete(a2);
}
