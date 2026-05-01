/*
 * XREFs of ?SetCategoryAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCategory@2345@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002A6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800105C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800105C0.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x18002F5F4 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetCategoryAsync(
        __int64 a1,
        int a2,
        __int64 a3)
{
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // r9
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  int v16; // edi
  signed __int64 v17; // [rsp+20h] [rbp-28h]
  _DWORD v18[8]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 152) == 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 144);
    while ( v7 >= 0 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 144), v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_7;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
LABEL_7:
    v9 = *(_QWORD *)(a1 + 144);
    while ( v9 >= 0 )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 144), v9 + 1, v9);
      if ( v10 == v9 )
        goto LABEL_11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
LABEL_11:
    v18[2] = 0;
    v18[0] = 3;
    v18[1] = 128;
    v11 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v11;
    if ( v11 )
    {
      *v11 = &off_18004A250;
      v11[1] = a1;
      v11[2] = a1;
      v14 = *(_QWORD *)(a1 + 144);
      v17 = v14;
      while ( v14 >= 0 )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 144), v14 + 1, v14);
        if ( v15 == v14 )
          goto LABEL_16;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v14 + 16));
LABEL_16:
      *((_DWORD *)v13 + 6) = a2;
    }
    else
    {
      v13 = 0LL;
    }
    v16 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, _QWORD *, signed __int64))Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>)(
            v18,
            a3,
            v12,
            v13,
            v17);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)a1);
    if ( v16 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55F,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v16);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)a1);
    return (unsigned int)v16;
  }
}
