/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@_K@Z @ 0x18000C574
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__std::allocator_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_____::emplace_back_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__const_&___ptr64__::_1_::catch$107 @ 0x180042DDE (_std--vector_Microsoft--WRL--ComPtr_Windows--Gaming--Preview--GamesEnumeration--GameListEntrySer.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>::deallocate(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( 8 * a3 >= 0x1000 )
  {
    if ( (a2 & 0x1F) == 0 )
    {
      v3 = *(_QWORD *)(a2 - 8);
      if ( v3 < a2 )
      {
        a2 = a2 - v3 - 8;
        if ( a2 <= 0x1F )
        {
          a2 = v3;
          goto LABEL_7;
        }
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    JUMPOUT(0x18000C5C6LL);
  }
LABEL_7:
  operator delete((void *)a2);
}
