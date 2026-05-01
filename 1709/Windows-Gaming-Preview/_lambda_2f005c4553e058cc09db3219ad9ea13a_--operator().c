/*
 * XREFs of _lambda_2f005c4553e058cc09db3219ad9ea13a_::operator() @ 0x18002B150
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_2f005c4553e058cc09db3219ad9ea13a____Windows::Internal::CNoResult_::Run @ 0x18002F970 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_2f005c4553e058c.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@Wrappers@WRL@Microsoft@@0_N@Z @ 0x180027C98 (-_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@W.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUICDSGamesListTileProperties@CDSProperties@WindowsInternal@@@Z @ 0x1800292CC (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     ?_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4GameProperty_t@ExecutionModel@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800372A4 (-_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Win.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_2f005c4553e058cc09db3219ad9ea13a_::operator()(_QWORD *a1, HSTRING a2)
{
  HSTRING v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdi
  HSTRING *v6; // r14
  HRESULT v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  int GamesListProperties; // eax
  __int64 v11; // rdx
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v12; // rcx
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v13; // rcx
  HSTRING v14; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v17; // [rsp+70h] [rbp+38h] BYREF
  HSTRING string; // [rsp+78h] [rbp+40h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+80h] [rbp+48h]
  __int64 v20; // [rsp+88h] [rbp+50h]

  string = a2;
  v3 = (HSTRING)a1[2];
  WindowsDeleteString(0LL);
  v4 = (struct _RTL_CRITICAL_SECTION *)(*a1 + 176LL);
  EnterCriticalSection(v4);
  v19 = v4;
  string = v3;
  v20 = 0LL;
  v5 = *a1;
  v6 = (HSTRING *)(v5 + 160);
  if ( Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AreStringsEqual(
         (HSTRING *)(v5 + 160),
         &string,
         0) )
  {
    WindowsDeleteString(string);
LABEL_28:
    if ( v4 )
      LeaveCriticalSection(v4);
    v8 = 0;
    goto LABEL_31;
  }
  if ( *(_QWORD *)(v5 + 288) )
  {
    if ( *(_QWORD *)(v5 + 296) )
    {
      v7 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SetStringPropertyOnGameConfigs(
             *(_QWORD *)(v5 + 288),
             15LL,
             &string);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 1622LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v9,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v7);
LABEL_8:
        WindowsDeleteString(string);
        goto LABEL_25;
      }
    }
  }
  if ( *(_QWORD *)(v5 + 264) && *(_QWORD *)(v5 + 248) )
  {
    v17 = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)v5,
                            &v17);
    v8 = GamesListProperties;
    if ( GamesListProperties < 0 )
    {
      v11 = 1629LL;
      goto LABEL_13;
    }
    GamesListProperties = (*(__int64 (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *, HSTRING))(*(_QWORD *)v17 + 72LL))(
                            v17,
                            string);
    v8 = GamesListProperties;
    if ( GamesListProperties < 0 )
    {
      v11 = 1630LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v11,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)GamesListProperties);
      v12 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      goto LABEL_8;
    }
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  v14 = string;
  if ( !string || string != *v6 )
  {
    WindowsDeleteString(*v6);
    *v6 = 0LL;
    v7 = WindowsDuplicateString(v14, (HSTRING *)(v5 + 160));
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 1633LL;
      goto LABEL_7;
    }
    v14 = string;
  }
  WindowsDeleteString(v14);
  v8 = 0;
LABEL_25:
  if ( v8 >= 0 )
    goto LABEL_28;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x649,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v8);
  if ( v4 )
    LeaveCriticalSection(v4);
LABEL_31:
  WindowsDeleteString(0LL);
  return (unsigned int)v8;
}
