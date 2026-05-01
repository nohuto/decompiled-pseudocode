/*
 * XREFs of _lambda_e4ce70b0594d3a18a2ebf7eaa96cf2f8_::operator() @ 0x18001B284
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_e4ce70b0594d3a18a2ebf7eaa96cf2f8____Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Run @ 0x18001D950 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_e4ce70b0594d3a1.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180010930.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180014928 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x180014944 (-CreateGameConfigStoreClientIfNeeded@@YAJAEAV-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std.c)
 *     ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001B700 (-_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     ?_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@PEAPEAVGameListEntryServer@2345@@Z @ 0x18001B964 (-_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall lambda_e4ce70b0594d3a18a2ebf7eaa96cf2f8_::operator()(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // edi
  HRESULT v6; // eax
  bool v7; // di
  bool v8; // al
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *v9; // rdx
  int v10; // eax
  HRESULT v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *v19; // rcx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v24; // [rsp+28h] [rbp-79h] BYREF
  __int64 v25; // [rsp+30h] [rbp-71h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *v26; // [rsp+38h] [rbp-69h] BYREF
  __int64 v27; // [rsp+40h] [rbp-61h] BYREF
  __int64 v28; // [rsp+48h] [rbp-59h] BYREF
  struct Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v29; // [rsp+50h] [rbp-51h] BYREF
  __int64 v30; // [rsp+58h] [rbp-49h] BYREF
  __int64 v31; // [rsp+60h] [rbp-41h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *v32; // [rsp+68h] [rbp-39h] BYREF
  __int128 v33; // [rsp+70h] [rbp-31h] BYREF
  __int64 v34; // [rsp+80h] [rbp-21h]
  HSTRING_HEADER v35; // [rsp+88h] [rbp-19h] BYREF
  HSTRING v36; // [rsp+A0h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp+7h] BYREF
  HSTRING string; // [rsp+C0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v34 = -2LL;
  v31 = 0LL;
  v30 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a1 + 72LL))(*a1, &v31);
  v5 = v4;
  if ( v4 < 0
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)a1[1] + 72LL))(a1[1], &v30), v5 = v4, v4 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_51;
  }
  string = 0LL;
  v6 = WindowsCreateStringReference(L"FullTileId", 0xAu, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    goto LABEL_57;
  }
  v32 = 0LL;
  v26 = 0LL;
  v7 = (*(int (__fastcall **)(__int64, HSTRING, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier **))(*(_QWORD *)v31 + 48LL))(
         v31,
         string,
         &v32) >= 0;
  v8 = (*(int (__fastcall **)(__int64, HSTRING, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier **))(*(_QWORD *)v30 + 48LL))(
         v30,
         string,
         &v26) >= 0;
  if ( !v7 || !v8 )
  {
    v29 = 0LL;
    if ( v7 )
    {
      v9 = v32;
    }
    else
    {
      if ( !v8 )
      {
LABEL_14:
        v36 = 0LL;
        v11 = WindowsCreateStringReference(L"GameConfigIds", 0xDu, &v35, &v36);
        if ( v11 >= 0 )
        {
          v28 = 0LL;
          v25 = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, v36, &v28);
          v5 = v12;
          if ( v12 >= 0
            && (v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, v36, &v25),
                v5 = v12,
                v12 >= 0) )
          {
            v33 = 0LL;
            v13 = CreateGameConfigStoreClientIfNeeded(&v33);
            v5 = v13;
            if ( v13 < 0
              || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 56LL))(v28, &v24) >= 0
              && v24
              && (v13 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
                          a1[2],
                          v28,
                          &v29,
                          &v33),
                  v5 = v13,
                  v13 < 0)
              || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 56LL))(v25, &v24) >= 0
              && v24
              && (v13 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
                          a1[2],
                          v25,
                          &v29,
                          &v33),
                  v5 = v13,
                  v13 < 0) )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x22E,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
                (const char *)(unsigned int)v13);
            }
            else
            {
              v14 = *(_QWORD *)(a2 + 16);
              if ( v14 )
              {
                *(_QWORD *)(a2 + 16) = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
              }
              if ( v29 )
              {
                v27 = 0LL;
                if ( (int)RoGetAgileReference(0LL, &GUID_735924d3_811f_4494_b69c_c641a0c61543, v29, &v27) < 0 )
                {
                  v15 = v27;
                }
                else
                {
                  v15 = *(_QWORD *)(a2 + 16);
                  *(_QWORD *)(a2 + 16) = v27;
                  v27 = v15;
                }
                if ( v15 )
                {
                  v27 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
                }
              }
              v5 = 0;
            }
            if ( *((_QWORD *)&v33 + 1) )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 0xFFFFFFFF) == 1 )
              {
                v16 = *((_QWORD *)&v33 + 1);
                (***((void (__fastcall ****)(_QWORD))&v33 + 1))(*((_QWORD *)&v33 + 1));
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v33 + 1) + 8LL))(*((_QWORD *)&v33 + 1));
              }
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x22E,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
              (const char *)(unsigned int)v12);
          }
          v17 = v25;
          if ( v25 )
          {
            v25 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
          v18 = v28;
          if ( v28 )
          {
            v28 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
          v36 = 0LL;
          goto LABEL_44;
        }
LABEL_57:
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
        JUMPOUT(0x18001B6FELL);
      }
      v9 = v26;
    }
    v10 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_CreateGameListEntryFromTileId(
            (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *)a1[2],
            v9,
            &v29);
    v5 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22E,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v10);
LABEL_44:
      if ( v29 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v29);
      goto LABEL_46;
    }
    goto LABEL_14;
  }
  v5 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22E,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)0x80070057LL);
LABEL_46:
  v19 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  string = 0LL;
LABEL_51:
  v21 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v5;
}
