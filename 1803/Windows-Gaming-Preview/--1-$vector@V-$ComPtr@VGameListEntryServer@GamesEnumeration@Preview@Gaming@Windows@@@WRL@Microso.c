/*
 * XREFs of ??1?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001DAD4
 * Callers:
 *     ??_EFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001D380 (--_EFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 *     __lambda_1fac56e8dc857868f8bd6529f7683e95_::operator()_::_1_::dtor$8 @ 0x180044393 (__lambda_1fac56e8dc857868f8bd6529f7683e95_--operator()_--_1_--dtor$8.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180010930.c)
 *     ??3@YAXPEAX@Z @ 0x180042938 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::~vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int64 **v2; // rbx
  volatile signed __int64 **v4; // rsi
  volatile signed __int64 *v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v2 = *(volatile signed __int64 ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(volatile signed __int64 ***)(a1 + 8);
    if ( v2 != v4 )
    {
      do
      {
        v5 = *v2;
        if ( *v2 )
        {
          *v2 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v5);
        }
        ++v2;
      }
      while ( v2 != v4 );
      v2 = *(volatile signed __int64 ***)a1;
    }
    v6 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3;
    if ( v6 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v6 < 0x1000 )
      {
LABEL_13:
        operator delete(v2);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( ((unsigned __int8)v2 & 0x1F) == 0 )
      {
        v7 = (unsigned __int64)*(v2 - 1);
        if ( v7 < (unsigned __int64)v2 && (unsigned __int64)v2 - v7 - 8 <= 0x1F )
        {
          v2 = (volatile signed __int64 **)*(v2 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL, a2);
    JUMPOUT(0x18001DB88LL);
  }
}
