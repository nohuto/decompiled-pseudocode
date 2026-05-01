/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Z @ 0x18000AD30
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180009A98 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Uni.c)
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000A26C (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x18000AF10 (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000C5CC (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18000DFA0 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@G.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010850 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGame_ea_180010850.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180010930.c)
 *     ??3@YAXPEAX@Z @ 0x180042938 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180042950 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  _QWORD *v12; // rsi
  size_t v13; // rcx
  void *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  _QWORD *v17; // r15
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx

  v4 = (__int64 *)a1[2];
  v5 = (__int64 *)a1[1];
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
    v8 = v7 + 1;
    v9 = ((__int64)v4 - *a1) >> 3;
    v10 = v9 >> 1;
    if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 )
        v11 = v7 + 1;
    }
    else
    {
      v11 = v7 + 1;
    }
    if ( v11 )
    {
      if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
        std::_Default_allocate_traits<1>::_Fail();
      v13 = 8 * v11;
      if ( 8 * v11 < 0x1000 )
      {
        v12 = operator new(v13);
      }
      else
      {
        if ( v13 + 39 < v13 )
          std::_Default_allocate_traits<1>::_Fail();
        v14 = operator new(v13 + 39);
        v12 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v12 - 1) = v14;
      }
    }
    else
    {
      v12 = 0LL;
    }
    try
    {
      v15 = *a2;
      v12[v7] = *a2;
      if ( v15 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef();
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> *,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      v20 = std::_Unfancy<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>(&v12[v7]);
      std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>::destroy<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>(
        v21,
        v20);
      std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::deallocate(
        v22,
        v12,
        v11);
      throw;
    }
    v16 = (_QWORD *)*a1;
    if ( !*a1 )
      goto LABEL_33;
    v17 = (_QWORD *)a1[1];
    if ( v16 != v17 )
    {
      do
      {
        if ( *v16 )
        {
          *v16 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release();
        }
        ++v16;
      }
      while ( v16 != v17 );
      v16 = (_QWORD *)*a1;
    }
    v18 = (__int64)(a1[2] - (_QWORD)v16) >> 3;
    if ( v18 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v18 < 0x1000 )
      {
LABEL_32:
        operator delete(v16);
LABEL_33:
        *a1 = v12;
        a1[1] = &v12[v8];
        a1[2] = &v12[v11];
        return;
      }
      if ( ((unsigned __int8)v16 & 0x1F) == 0 )
      {
        v19 = *(v16 - 1);
        if ( v19 < (unsigned __int64)v16 && (unsigned __int64)v16 - v19 - 8 <= 0x1F )
        {
          v16 = (_QWORD *)*(v16 - 1);
          goto LABEL_32;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
  }
  v6 = *a2;
  *v5 = *a2;
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::AddRef();
  a1[1] += 8LL;
}
