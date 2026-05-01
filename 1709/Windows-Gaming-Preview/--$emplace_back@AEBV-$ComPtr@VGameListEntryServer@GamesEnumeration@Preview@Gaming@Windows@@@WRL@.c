/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Z @ 0x18000BBE8
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800099CC (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Uni.c)
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000A1A8 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x18000C5C8 (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18000E7E8 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@G.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800105C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800105C0.c)
 *     ??3@YAXPEAX@Z @ 0x180041618 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180041620 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
        unsigned __int64 *a1,
        __int64 *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r14
  _QWORD *v14; // rsi
  size_t v15; // rcx
  void *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rdx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int64 v21; // rdx
  __int64 *v22; // rdi
  __int64 *v23; // r15
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx

  v4 = (_QWORD *)a1[2];
  v5 = (_QWORD *)a1[1];
  if ( v4 == v5 )
  {
    v9 = (__int64)((__int64)v5 - *a1) >> 3;
    if ( v9 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
    v10 = v9 + 1;
    v11 = (__int64)((__int64)v4 - *a1) >> 3;
    v12 = v11 >> 1;
    if ( v11 <= 0x1FFFFFFFFFFFFFFFLL - (v11 >> 1) )
    {
      v13 = v12 + v11;
      if ( v12 + v11 < v10 )
        v13 = v9 + 1;
    }
    else
    {
      v13 = v9 + 1;
    }
    if ( v13 )
    {
      if ( v13 > 0x1FFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v15 = 8 * v13;
      if ( 8 * v13 < 0x1000 )
      {
        v14 = operator new(v15);
      }
      else
      {
        if ( v15 + 39 < v15 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v16 = operator new(v15 + 39);
        v14 = (_QWORD *)(((unsigned __int64)v16 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v14 - 1) = v16;
      }
    }
    else
    {
      v14 = 0LL;
    }
    try
    {
      v17 = &v14[v9];
      if ( v17 )
      {
        v18 = *a2;
        *v17 = *a2;
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 144);
          while ( v19 >= 0 )
          {
            v20 = v19;
            v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 144), v19 + 1, v19);
            if ( v20 == v19 )
              goto LABEL_30;
          }
          _InterlockedIncrement((volatile signed __int32 *)(2 * v19 + 16));
        }
      }
LABEL_30:
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> *,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>(
        *a1,
        a1[1],
        v14);
    }
    catch ( ... )
    {
      v28 = std::_Unfancy<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>(&v14[v9]);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>::destroy<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>(
        v29,
        v28);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>::deallocate(
        v30,
        v14,
        v13);
      throw;
    }
    v22 = (__int64 *)*a1;
    if ( !*a1 )
      goto LABEL_45;
    v23 = (__int64 *)a1[1];
    while ( v22 != v23 )
    {
      v24 = *v22;
      if ( *v22 )
      {
        *v22 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v24);
      }
      ++v22;
    }
    v25 = *a1;
    v26 = (__int64)(a1[2] - *a1) >> 3;
    if ( v26 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v26 < 0x1000 )
      {
LABEL_43:
        operator delete((void *)v25);
LABEL_45:
        *a1 = (unsigned __int64)v14;
        a1[1] = (unsigned __int64)&v14[v10];
        a1[2] = (unsigned __int64)&v14[v13];
        return;
      }
      if ( (v25 & 0x1F) == 0 )
      {
        v27 = *(_QWORD *)(v25 - 8);
        if ( v27 < v25 )
        {
          v25 = v25 - v27 - 8;
          if ( v25 <= 0x1F )
          {
            v25 = v27;
            goto LABEL_43;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v25, v21);
    __debugbreak();
  }
  if ( v5 )
  {
    v6 = *a2;
    *v5 = v6;
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 144);
      while ( v7 >= 0 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 144), v7 + 1, v7);
        if ( v8 == v7 )
          goto LABEL_8;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
    }
  }
LABEL_8:
  a1[1] += 8LL;
}
