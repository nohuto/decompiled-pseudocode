/*
 * XREFs of ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800270E0
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Z @ 0x1800262F4 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180026550 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014858 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUICDSGamesListTileProperties@CDSProperties@WindowsInternal@@@Z @ 0x1800292CC (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v3; // rax
  __int128 v4; // xmm0
  int StringPropertyFromGameConfigStore; // eax
  unsigned int v6; // ebx
  int GamesListProperties; // eax
  __int64 v8; // rdx
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v9; // rdi
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v10; // rcx
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *v15; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+68h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v16 = v2;
  if ( !*((_QWORD *)this + 36) || !*((_QWORD *)this + 37) )
  {
    if ( !*((_QWORD *)this + 35) )
    {
      v6 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1AC,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_21;
    }
    v15 = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            this,
                            &v15);
    v6 = GamesListProperties;
    if ( GamesListProperties >= 0 )
    {
      v9 = v15;
      WindowsDeleteString(*((HSTRING *)this + 20));
      *((_QWORD *)this + 20) = 0LL;
      GamesListProperties = (*(__int64 (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *, char *))(*(_QWORD *)v9 + 64LL))(
                              v9,
                              (char *)this + 160);
      v6 = GamesListProperties;
      if ( GamesListProperties >= 0 )
      {
        v11 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v11 + 16LL))(v11);
        }
        goto LABEL_17;
      }
      v8 = 424LL;
    }
    else
    {
      v8 = 423LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)GamesListProperties);
    v10 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::CDSProperties::ICDSGamesListTileProperties *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_21;
  }
  v3 = *((_QWORD *)this + 36);
  if ( *(_QWORD *)(v3 + 96) )
    v4 = *(_OWORD *)(**(_QWORD **)(v3 + 88) + 32LL);
  else
    v4 = xmmword_18004FB38;
  v13 = v4;
  WindowsDeleteString(*((HSTRING *)this + 20));
  *((_QWORD *)this + 20) = 0LL;
  StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(
                                        *((_QWORD *)this + 37),
                                        &v13,
                                        15LL,
                                        (HSTRING *)this + 20);
  v6 = StringPropertyFromGameConfigStore;
  if ( StringPropertyFromGameConfigStore < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A2,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)StringPropertyFromGameConfigStore);
LABEL_21:
    if ( v2 )
      LeaveCriticalSection(v2);
    return v6;
  }
LABEL_17:
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
