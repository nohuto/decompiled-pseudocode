/*
 * XREFs of _lambda_ca4fa94277cd73a625c05d148e00fab1_::operator() @ 0x18002BE2C
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_ca4fa94277cd73a625c05d148e00fab1____Windows::Internal::CNoResult_::Run @ 0x1800309A0 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_ca4fa94277cd73a.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@Wrappers@WRL@Microsoft@@0_N@Z @ 0x180028B84 (-_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@W.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUICDSGamesListTileProperties@CDSProperties@WindowsInternal@@@Z @ 0x18002A11C (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     ?_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4GameProperty_t@ExecutionModel@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180038114 (-_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Win.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_ca4fa94277cd73a625c05d148e00fab1_::operator()(_QWORD *a1, HSTRING a2)
{
  HSTRING v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdi
  HSTRING *v6; // r14
  int v7; // ebx
  HRESULT v9; // eax
  __int64 v10; // rdx
  int GamesListProperties; // eax
  __int64 v12; // rdx
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v13; // rcx
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v14; // rcx
  HSTRING v15; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v17; // [rsp+70h] [rbp+38h] BYREF
  HSTRING string; // [rsp+78h] [rbp+40h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+80h] [rbp+48h]
  __int64 v20; // [rsp+88h] [rbp+50h]

  string = a2;
  v3 = (HSTRING)a1[2];
  WindowsDeleteString(0LL);
  v4 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 168LL);
  EnterCriticalSection(v4);
  v19 = v4;
  string = v3;
  v20 = 0LL;
  v5 = *a1;
  v6 = (HSTRING *)(v5 + 152);
  if ( Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AreStringsEqual(
         (HSTRING *)(v5 + 152),
         &string,
         0) )
  {
    WindowsDeleteString(string);
LABEL_3:
    if ( v4 )
      LeaveCriticalSection(v4);
    v7 = 0;
    goto LABEL_6;
  }
  if ( *(_QWORD *)(v5 + 280) )
  {
    if ( *(_QWORD *)(v5 + 288) )
    {
      v9 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SetStringPropertyOnGameConfigs(
             *(_QWORD *)(v5 + 280),
             15LL,
             &string);
      v7 = v9;
      if ( v9 < 0 )
      {
        v10 = 1606LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v9);
LABEL_12:
        WindowsDeleteString(string);
        goto LABEL_29;
      }
    }
  }
  if ( *(_QWORD *)(v5 + 256) && *(_QWORD *)(v5 + 240) )
  {
    v17 = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)v5,
                            &v17);
    v7 = GamesListProperties;
    if ( GamesListProperties < 0 )
    {
      v12 = 1613LL;
      goto LABEL_17;
    }
    GamesListProperties = (*(__int64 (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *, HSTRING))(*(_QWORD *)v17 + 72LL))(
                            v17,
                            string);
    v7 = GamesListProperties;
    if ( GamesListProperties < 0 )
    {
      v12 = 1614LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)GamesListProperties);
      v13 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      goto LABEL_12;
    }
    v14 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v15 = string;
  if ( !string || string != *v6 )
  {
    WindowsDeleteString(*v6);
    *v6 = 0LL;
    v9 = WindowsDuplicateString(v15, (HSTRING *)(v5 + 152));
    v7 = v9;
    if ( v9 < 0 )
    {
      v10 = 1617LL;
      goto LABEL_11;
    }
    v15 = string;
  }
  WindowsDeleteString(v15);
  v7 = 0;
LABEL_29:
  if ( v7 >= 0 )
    goto LABEL_3;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x639,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v7);
  if ( v4 )
    LeaveCriticalSection(v4);
LABEL_6:
  WindowsDeleteString(0LL);
  return (unsigned int)v7;
}
