/*
 * XREFs of _lambda_d3f0c5910d0e6f609c52600b0f132e68_::operator() @ 0x18001BC20
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_d3f0c5910d0e6f609c52600b0f132e68____Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_____ptr64_____::Run @ 0x18001D920 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_d3f0c5910d0e6f6.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A9E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVGam.c)
 *     ?GetView@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@345@@Z @ 0x18000B270 (-GetView@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqualityP.c)
 *     ??0?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@1234@Upermission@01234@@Z @ 0x18000C9C4 (--0-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqualityPredica.c)
 *     ?InsertAtInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@_N@Z @ 0x18000CA98 (-InsertAtInternal@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$Default.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x18000E54C (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F7D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18000F7D0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180010930.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800109D8 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180014928 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x180014944 (-CreateGameConfigStoreClientIfNeeded@@YAJAEAV-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std.c)
 *     ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001B700 (-_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     ?_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@PEAPEAVGameListEntryServer@2345@@Z @ 0x18001B964 (-_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     ?Set@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18001C214 (-Set@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 *     ??E?$_Tree_unchecked_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x18001C4E4 (--E-$_Tree_unchecked_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@V-$unique_p.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18001C718 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_del.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@XZ @ 0x18001C7A0 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionMode.c)
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@V?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAVGameListEntryUpdateHandler@2345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@AEBU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@$$QEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@6@$$QEAPEAVGameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18001CD64 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEBU_G.c)
 *     ?ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180029790 (-ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJA.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042918 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall lambda_d3f0c5910d0e6f609c52600b0f132e68_::operator()(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl **a1,
        __int64 a2)
{
  int v4; // eax
  unsigned int v5; // r14d
  HRESULT v6; // eax
  HRESULT v7; // eax
  struct Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  volatile signed __int64 *v13; // rdi
  void *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  void *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  void *v24; // rax
  int updated; // eax
  volatile signed __int64 *v26; // rcx
  int View; // eax
  __int64 *v28; // rsi
  volatile signed __int64 *v29; // rcx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 *v34; // [rsp+38h] [rbp-99h] BYREF
  struct Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v35; // [rsp+40h] [rbp-91h] BYREF
  __int64 v36; // [rsp+48h] [rbp-89h] BYREF
  __int64 v37; // [rsp+50h] [rbp-81h] BYREF
  __int64 *v38; // [rsp+58h] [rbp-79h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *v39; // [rsp+60h] [rbp-71h] BYREF
  int v40; // [rsp+68h] [rbp-69h] BYREF
  void *Block; // [rsp+70h] [rbp-61h] BYREF
  void *v42[2]; // [rsp+78h] [rbp-59h] BYREF
  __int128 v43; // [rsp+88h] [rbp-49h] BYREF
  __int64 v44; // [rsp+98h] [rbp-39h]
  int v45[2]; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-29h]
  HSTRING_HEADER v47; // [rsp+B0h] [rbp-21h] BYREF
  HSTRING v48; // [rsp+C8h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D0h] [rbp-1h] BYREF
  HSTRING string; // [rsp+E8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v46 = -2LL;
  v37 = 0LL;
  v4 = (*(__int64 (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *, __int64 *))(*(_QWORD *)*a1 + 72LL))(
         *a1,
         &v37);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_67;
  }
  string = 0LL;
  v6 = WindowsCreateStringReference(L"GameConfigIds", 0xDu, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    goto LABEL_71;
  }
  v36 = 0LL;
  if ( (*(int (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v37 + 48LL))(v37, string, &v36) >= 0
    && v36
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 56LL))(v36, &v40) >= 0
    && v40 )
  {
    v48 = 0LL;
    v7 = WindowsCreateStringReference(L"FullTileId", 0xAu, &v47, &v48);
    if ( v7 >= 0 )
    {
      v39 = 0LL;
      v8 = 0LL;
      v35 = 0LL;
      if ( (*(int (__fastcall **)(__int64, HSTRING, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier **))(*(_QWORD *)v37 + 48LL))(
             v37,
             v48,
             &v39) >= 0 )
      {
        v9 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_CreateGameListEntryFromTileId(
               a1[1],
               v39,
               &v35);
        v5 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2C6,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
            (const char *)(unsigned int)v9);
          v8 = v35;
LABEL_58:
          if ( v8 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v8);
          v30 = v39;
          if ( v39 )
          {
            v39 = 0LL;
            (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *))(*(_QWORD *)v30 + 16LL))(v30);
          }
          v48 = 0LL;
          goto LABEL_64;
        }
        v8 = v35;
      }
      v43 = 0LL;
      v10 = CreateGameConfigStoreClientIfNeeded(&v43);
      v5 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C6,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)v10);
LABEL_57:
        std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)&v43);
        goto LABEL_58;
      }
      v11 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
              (__int64)a1[1],
              v36,
              &v35,
              (__int64 *)&v43);
      v5 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C6,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)v11);
        v8 = v35;
        goto LABEL_57;
      }
      *(_OWORD *)v42 = 0LL;
      v42[0] = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Buyheadnode();
      v8 = v35;
      v12 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::ExtractGameConfigsOwnership(
              (char *)v35 + 24,
              v42,
              &v43);
      v5 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C6,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)v12);
LABEL_56:
        std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::clear(v42);
        std::_Deallocate((char *)v42[0], 1uLL, 0x38uLL);
        goto LABEL_57;
      }
      v13 = 0LL;
      v44 = 0LL;
      v14 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
      v15 = 0LL;
      if ( v14 )
        v15 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>((__int64)v14);
      v5 = v15 == 0 ? 0x8007000E : 0;
      v16 = v15;
      if ( v15 )
      {
        v13 = (volatile signed __int64 *)v15;
        v44 = v15;
        v16 = 0LL;
      }
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      if ( !v15 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C6,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)v5);
LABEL_54:
        if ( v13 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::Release(v13);
        goto LABEL_56;
      }
      if ( *((_QWORD *)v8 + 32) && *((_QWORD *)v8 + 30) )
      {
        v34 = 0LL;
        v17 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::QueryInterface(
                (__int64)v8,
                &GUID_735924d3_811f_4494_b69c_c641a0c61543,
                &v34);
        v5 = v17;
        if ( v17 < 0
          || (v17 = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::InsertAtInternal(
                      (__int64)v13,
                      0,
                      (__int64)v34,
                      1),
              v5 = v17,
              v17 < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2C6,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
            (const char *)(unsigned int)v17);
          v18 = v34;
          if ( v34 )
          {
            v34 = 0LL;
            v19 = *v18;
LABEL_53:
            (*(void (__fastcall **)(__int64 *))(v19 + 16))(v18);
          }
          goto LABEL_54;
        }
        v20 = (__int64)v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
      v21 = v42[0];
      v22 = *(_QWORD *)v42[0];
      v38 = *(__int64 **)v42[0];
      while ( (void *)v22 != v21 )
      {
        v23 = v22 + 32;
        v24 = *(void **)(v22 + 48);
        *(_QWORD *)(v23 + 16) = 0LL;
        Block = v24;
        v34 = 0LL;
        *(_QWORD *)v45 = *((_QWORD *)a1[1] + 16);
        updated = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,_GUID const &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,std::shared_ptr<ExecutionModel::IGameConfigStore>,Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler *>(
                    (unsigned int)&v34,
                    v23,
                    (unsigned int)&Block,
                    (unsigned int)&v43,
                    (__int64)v45);
        v5 = updated;
        if ( updated < 0
          || (updated = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::InsertAtInternal(
                          (__int64)v13,
                          0,
                          (__int64)v34,
                          1),
              v5 = updated,
              updated < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2C6,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
            (const char *)(unsigned int)updated);
          v29 = v34;
          if ( v34 )
          {
            v34 = 0LL;
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v29);
          }
          if ( Block )
            operator delete(Block);
          goto LABEL_54;
        }
        v26 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v26);
        }
        if ( Block )
          operator delete(Block);
        std::_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>>::operator++(&v38);
        v22 = (__int64)v38;
      }
      v38 = 0LL;
      View = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::GetView(
               (__int64)v13,
               (__int64 *)&v38);
      v5 = View;
      v28 = v38;
      if ( View >= 0 )
      {
        Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Set(
          a2,
          v38);
        v5 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C6,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)View);
      }
      if ( v28 )
      {
        v19 = *v28;
        v18 = v28;
        goto LABEL_53;
      }
      goto LABEL_54;
    }
LABEL_71:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    JUMPOUT(0x18001C1D4LL);
  }
  v5 = -2147024891;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C6,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)0x80070005LL);
LABEL_64:
  v31 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  string = 0LL;
LABEL_67:
  v32 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  return v5;
}
