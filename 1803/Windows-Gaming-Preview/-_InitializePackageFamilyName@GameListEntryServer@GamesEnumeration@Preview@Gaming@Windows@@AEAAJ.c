/*
 * XREFs of ?_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800281E8
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180027200 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180027468 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010E8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z @ 0x18001523C (-GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z.c)
 *     ?GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGameConfig@ExecutionModel@@U_GUID@@@Z @ 0x180037970 (-GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGame.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializePackageFamilyName(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rdi
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v4; // rcx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  const struct ExecutionModel::GameConfig *GameConfig; // rdi
  HSTRING *v10; // rbx
  HSTRING v11; // rcx
  int PackageFamilyName; // eax
  struct _GUID v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+58h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  v17 = v2;
  if ( !this[32] || !this[30] )
  {
    if ( this[35] && this[36] )
    {
      v14 = (struct _GUID)xmmword_180050540;
      GameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetGameConfig(
                     this[35],
                     &v14);
      v10 = (HSTRING *)(this + 20);
      v11 = *v10;
      if ( *((_DWORD *)GameConfig + 5) == 2 )
      {
        WindowsDeleteString(v11);
        *v10 = 0LL;
        PackageFamilyName = GetPackageFamilyName(GameConfig, v10);
        v7 = PackageFamilyName;
        if ( PackageFamilyName < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1CB,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)PackageFamilyName);
          goto LABEL_18;
        }
      }
      else
      {
        WindowsDeleteString(v11);
        *v10 = 0LL;
      }
    }
LABEL_22:
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  v3 = 0LL;
  v16 = 0LL;
  v4 = this[32];
  if ( !v4 )
    goto LABEL_7;
  v5 = (*(__int64 (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *, __int64 *))(*(_QWORD *)v4 + 104LL))(
         v4,
         &v16);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1BE,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_6;
  }
  v3 = v16;
  if ( !v16 )
  {
LABEL_7:
    if ( v3 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    goto LABEL_22;
  }
  WindowsDeleteString((HSTRING)this[20]);
  this[20] = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 48LL))(v3, (char *)this + 160);
  v7 = v6;
  if ( v6 >= 0 )
  {
LABEL_6:
    v3 = v16;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C0,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v6);
  v8 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_18:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
