/*
 * XREFs of ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180028BE8
 * Callers:
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x1800293E0 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180029660 (-AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000FD50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010E8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180014EF4 (-SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePrope.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014F90 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z @ 0x18001523C (-GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z.c)
 *     ?_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@Wrappers@WRL@Microsoft@@0_N@Z @ 0x180028B84 (-_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@W.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUICDSGamesListTileProperties@CDSProperties@WindowsInternal@@@Z @ 0x18002A11C (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     ?_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJPEBGPEAPEAUIStorageFile@Storage@5@@Z @ 0x18002A21C (-_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJP.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002B720 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ??4?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002C4AC (--4-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Details@WRL@Microsoft@@YAJPEAPEAVGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18002C620 (--$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V1234.c)
 *     ?GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGameConfig@ExecutionModel@@U_GUID@@@Z @ 0x180037970 (-GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGame.c)
 *     ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x180037E04 (-SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Wind.c)
 *     ?_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4GameProperty_t@ExecutionModel@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180038114 (-_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Win.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003822C (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ??$_Buynode@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@1@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@1@@Z @ 0x1800398D4 (--$_Buynode@AEAU_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@-$_T.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@1@@Z @ 0x18003991C (--$_Insert_nohint@AEAU-$pair@$$CBU_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_d.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct _GUID *a2,
        const struct ExecutionModel::GameConfig **a3,
        __int64 a4)
{
  const struct ExecutionModel::GameConfig *v6; // rbx
  HSTRING *v7; // rdi
  char v8; // r12
  __int64 v9; // rdx
  int PackageFamilyName; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  _QWORD *v14; // rbx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdx
  int GamesListProperties; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  HSTRING v22; // rbx
  int LaunchParameters; // eax
  char *v24; // r12
  int StringPropertyFromGameConfigStore; // eax
  int v26; // eax
  HSTRING v27; // rcx
  __int64 v28; // rdx
  const unsigned __int16 *StringRawBuffer; // rax
  int StorageFileForFilePath; // eax
  int v31; // eax
  int v32; // eax
  wil::details::in1diag3 *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 (__fastcall ***v36)(_QWORD, GUID *, HSTRING *); // rcx
  int v37; // eax
  wil::details::in1diag3 *v38; // rcx
  __int64 v39; // rdx
  HSTRING v40; // rdi
  HSTRING v41; // rcx
  __int64 *v42; // rcx
  int v43; // eax
  wil::details::in1diag3 *v44; // rcx
  __int64 v45; // rdx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v46; // r15
  __int64 v47; // rax
  __int64 v48; // r8
  int PropertyValues; // eax
  __int64 v50; // r9
  __int64 v51; // rdx
  volatile signed __int64 *v52; // rcx
  int v53; // eax
  char v54; // [rsp+30h] [rbp-50h]
  HSTRING string; // [rsp+38h] [rbp-48h] BYREF
  HSTRING v56[2]; // [rsp+40h] [rbp-40h] BYREF
  struct _GUID v57; // [rsp+50h] [rbp-30h] BYREF
  __int64 v58; // [rsp+60h] [rbp-20h]
  struct _GUID v59; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 v62; // [rsp+D8h] [rbp+58h]

  v62 = a4;
  v58 = -2LL;
  v6 = *a3;
  v7 = (HSTRING *)((char *)this + 160);
  v8 = 1;
  v54 = 1;
  if ( *((_DWORD *)*a3 + 5) != 2 )
  {
    if ( *v7 )
    {
      v9 = 644LL;
      goto LABEL_18;
    }
    goto LABEL_12;
  }
  if ( !*v7 )
  {
    v9 = 628LL;
LABEL_18:
    v11 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    goto LABEL_19;
  }
  WindowsDeleteString(0LL);
  string = 0LL;
  PackageFamilyName = GetPackageFamilyName(v6, &string);
  if ( PackageFamilyName < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x279,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)PackageFamilyName);
  if ( string )
  {
    if ( !Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AreStringsEqual(v7, &string, 1u) )
    {
      v11 = -2147024891;
      v12 = 640LL;
      goto LABEL_8;
    }
    WindowsDeleteString(string);
    a4 = v62;
LABEL_12:
    if ( *((_QWORD *)this + 35) && *((_QWORD *)this + 36) )
    {
      v57 = *a2;
      if ( Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetGameConfig(
             *((Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)this + 35),
             &v57) )
      {
        return 0LL;
      }
    }
    else
    {
      v8 = 0;
      v54 = 0;
      std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=((char *)this + 288, a4);
    }
    v14 = (_QWORD *)((char *)this + 152);
    v57 = *a2;
    if ( *((_QWORD *)this + 19) )
    {
      v15 = SetStringPropertyToGameConfigStore(*((__int64 **)this + 36), (__int128 *)&v57, 0xFu, (HSTRING *)this + 19);
      v16 = retaddr;
      if ( v15 >= 0 )
        goto LABEL_39;
      v17 = 678LL;
      goto LABEL_38;
    }
    WindowsDeleteString(0LL);
    *v14 = 0LL;
    if ( (int)GetStringPropertyFromGameConfigStore(*((_QWORD *)this + 36), (__int128 *)&v57, 15LL, (HSTRING *)this + 19) < 0
      || !*v14 )
    {
LABEL_39:
      v22 = 0LL;
      *(_QWORD *)&v57.Data1 = 0LL;
      if ( v8 )
      {
        WindowsDeleteString(0LL);
        *(_QWORD *)&v57.Data1 = 0LL;
        LaunchParameters = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
                             (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)((char *)this + 16),
                             (HSTRING *)&v57);
        if ( LaunchParameters < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2C5,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)LaunchParameters);
        v22 = *(HSTRING *)&v57.Data1;
      }
      v24 = (char *)this + 304;
      if ( *((_QWORD *)this + 38) )
      {
        if ( !v22 )
        {
          v35 = *((_QWORD *)this + 36);
          v59 = *a2;
          v32 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int64, const WCHAR *, int))(*(_QWORD *)v35 + 72LL))(
                  v35,
                  &v59,
                  26LL,
                  &word_18004F460,
                  2);
          v33 = retaddr;
          if ( v32 >= 0 )
            goto LABEL_67;
          v34 = 728LL;
LABEL_66:
          wil::details::in1diag3::_Log_Hr(
            v33,
            (void *)v34,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v32);
LABEL_67:
          v56[0] = 0LL;
          v36 = *(__int64 (__fastcall ****)(_QWORD, GUID *, HSTRING *))v24;
          if ( !*(_QWORD *)v24 )
          {
LABEL_75:
            v42 = (__int64 *)*((_QWORD *)this + 36);
            v59 = *a2;
            if ( v56[0] )
            {
              v43 = SetStringPropertyToGameConfigStore(v42, (__int128 *)&v59, 0x19u, v56);
              v44 = retaddr;
              if ( v43 >= 0 )
                goto LABEL_81;
              v45 = 747LL;
            }
            else
            {
              v43 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, const WCHAR *, int))(*v42 + 72))(
                      v42,
                      &v59,
                      25LL,
                      &word_18004F460,
                      2);
              v44 = retaddr;
              if ( v43 >= 0 )
                goto LABEL_81;
              v45 = 755LL;
            }
            wil::details::in1diag3::_Log_Hr(
              v44,
              (void *)v45,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              (const char *)(unsigned int)v43);
LABEL_81:
            WindowsDeleteString(v56[0]);
            if ( v54 )
            {
              *(struct _GUID *)v56 = *a2;
              v46 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)*((_QWORD *)this + 35);
              if ( (v56[0] || v56[1]) && *a3 && *((_QWORD *)v46 + 11) )
              {
                v47 = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Buynode<_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>(
                        (char *)v46 + 80,
                        v56);
                std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Insert_nohint<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>> &,std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *> *>(
                  (char *)v46 + 80,
                  &v59,
                  v48,
                  v47 + 32,
                  v47);
                PropertyValues = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues(v46);
                if ( PropertyValues < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x51,
                    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
                    (const char *)(unsigned int)PropertyValues);
LABEL_88:
                v11 = 0;
                goto LABEL_89;
              }
              v11 = -2147024809;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x4D,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
                (const char *)0x80070057LL);
              v50 = 2147942487LL;
              v51 = 792LL;
LABEL_96:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v51,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                (const char *)v50);
              goto LABEL_89;
            }
LABEL_92:
            v52 = (volatile signed __int64 *)*((_QWORD *)this + 35);
            if ( v52 )
            {
              *((_QWORD *)this + 35) = 0LL;
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v52);
            }
            v53 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,std::shared_ptr<ExecutionModel::IGameConfigStore> const &>(
                    (char *)this + 280,
                    a2,
                    a3,
                    v62);
            v11 = v53;
            if ( v53 >= 0 )
              goto LABEL_88;
            v50 = (unsigned int)v53;
            v51 = 800LL;
            goto LABEL_96;
          }
          string = 0LL;
          v37 = (**v36)(v36, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, &string);
          v38 = retaddr;
          if ( v37 >= 0 )
          {
            v40 = string;
            WindowsDeleteString(v56[0]);
            v56[0] = 0LL;
            v37 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v40 + 96LL))(v40, v56);
            v38 = retaddr;
            if ( v37 >= 0 )
              goto LABEL_73;
            v39 = 737LL;
          }
          else
          {
            v39 = 735LL;
          }
          wil::details::in1diag3::_Log_Hr(
            v38,
            (void *)v39,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v37);
LABEL_73:
          v41 = string;
          if ( string )
          {
            string = 0LL;
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v41 + 16LL))(v41);
          }
          goto LABEL_75;
        }
      }
      else if ( !v22 )
      {
        if ( !v54 )
          goto LABEL_92;
        v56[0] = 0LL;
        v59 = *a2;
        WindowsDeleteString(0LL);
        v56[0] = 0LL;
        StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(
                                              *((_QWORD *)this + 36),
                                              (__int128 *)&v59,
                                              25LL,
                                              v56);
        v11 = StringPropertyFromGameConfigStore;
        if ( StringPropertyFromGameConfigStore < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2FE,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)StringPropertyFromGameConfigStore);
LABEL_50:
          WindowsDeleteString(v56[0]);
LABEL_89:
          WindowsDeleteString(v22);
          return v11;
        }
        string = 0LL;
        v59 = *a2;
        WindowsDeleteString(0LL);
        string = 0LL;
        v26 = GetStringPropertyFromGameConfigStore(*((_QWORD *)this + 36), (__int128 *)&v59, 26LL, &string);
        v11 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x305,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v26);
          WindowsDeleteString(string);
          string = 0LL;
          goto LABEL_50;
        }
        v27 = v56[0];
        if ( v56[0] || string )
        {
          v28 = *(_QWORD *)v24;
          if ( *(_QWORD *)v24 )
          {
            *(_QWORD *)v24 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            v27 = v56[0];
          }
          if ( v27 )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(v27, 0LL);
            StorageFileForFilePath = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath(
                                       StringRawBuffer,
                                       (struct Windows::Storage::IStorageFile **)this + 38);
            if ( StorageFileForFilePath < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x30D,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                (const char *)(unsigned int)StorageFileForFilePath);
          }
          v31 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SetGameLaunchInfoOnGameConfigs(
                  *((Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)this + 35),
                  (const struct Microsoft::WRL::Wrappers::HString *)v56,
                  (const struct Microsoft::WRL::Wrappers::HString *)&string);
          if ( v31 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x310,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              (const char *)(unsigned int)v31);
        }
        WindowsDeleteString(string);
        string = 0LL;
        goto LABEL_81;
      }
      v59 = *a2;
      v32 = SetStringPropertyToGameConfigStore(*((__int64 **)this + 36), (__int128 *)&v59, 0x1Au, (HSTRING *)&v57);
      v33 = retaddr;
      if ( v32 >= 0 )
        goto LABEL_67;
      v34 = 721LL;
      goto LABEL_66;
    }
    if ( !*((_QWORD *)this + 32) || !*((_QWORD *)this + 30) )
    {
LABEL_35:
      if ( v8 )
      {
        v15 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SetStringPropertyOnGameConfigs(
                *((_QWORD *)this + 35),
                15LL,
                (char *)this + 152);
        v16 = retaddr;
        if ( v15 < 0 )
        {
          v17 = 701LL;
LABEL_38:
          wil::details::in1diag3::_Log_Hr(
            v16,
            (void *)v17,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_39;
        }
      }
      goto LABEL_39;
    }
    *(_QWORD *)&v57.Data1 = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            this,
                            (struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties **)&v57);
    v19 = retaddr;
    if ( GamesListProperties >= 0 )
    {
      GamesListProperties = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&v57.Data1 + 72LL))(
                              *(_QWORD *)&v57.Data1,
                              *v14);
      v19 = retaddr;
      if ( GamesListProperties >= 0 )
        goto LABEL_33;
      v20 = 695LL;
    }
    else
    {
      v20 = 693LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v19,
      (void *)v20,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)GamesListProperties);
LABEL_33:
    v21 = *(_QWORD *)&v57.Data1;
    if ( *(_QWORD *)&v57.Data1 )
    {
      *(_QWORD *)&v57.Data1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    goto LABEL_35;
  }
  v11 = -2147024809;
  v12 = 635LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v11);
  WindowsDeleteString(string);
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x28F,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v11);
  return v11;
}
