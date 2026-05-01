/*
 * XREFs of ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180026F70
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Z @ 0x1800262F4 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180026550 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x18002843C (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 *     ?ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x1800288D0 (-ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180026930 (-_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wind.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUICDSGamesListTileProperties@CDSProperties@WindowsInternal@@@Z @ 0x1800292CC (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  int GamesListProperties; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v5; // rcx
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v11; // [rsp+48h] [rbp+10h] BYREF

  *((_DWORD *)this + 38) = 0;
  if ( !*((_QWORD *)this + 36) || !*((_QWORD *)this + 37) )
  {
    if ( !*((_QWORD *)this + 35) )
    {
      v3 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x184,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)0x8000FFFFLL);
      return v3;
    }
    v11 = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            this,
                            &v11);
    v3 = GamesListProperties;
    if ( GamesListProperties >= 0 )
    {
      GamesListProperties = (*(__int64 (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *, unsigned int *))(*(_QWORD *)v11 + 48LL))(
                              v11,
                              &v10);
      v3 = GamesListProperties;
      if ( GamesListProperties >= 0 )
      {
        if ( v10 <= 2 )
        {
          *((_DWORD *)this + 38) = v10;
          v6 = v11;
          if ( v11 )
          {
            v11 = 0LL;
            (*(void (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v6 + 16LL))(v6);
          }
          goto LABEL_16;
        }
        v3 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17D,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)0x8000FFFFLL);
        goto LABEL_12;
      }
      v4 = 380LL;
    }
    else
    {
      v4 = 377LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)GamesListProperties);
LABEL_12:
    v5 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return v3;
  }
  *((_DWORD *)this + 38) = 1;
LABEL_16:
  if ( !*((_DWORD *)this + 38) )
  {
    v7 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository(this);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18A,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v7);
  }
  return 0LL;
}
