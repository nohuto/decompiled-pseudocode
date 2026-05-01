/*
 * XREFs of ?_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800272AC
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789@PEAUIGameListChangedEventHandler@2345@@Z @ 0x1800262F4 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180026550 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z @ 0x180014B14 (-GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z.c)
 *     ?GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGameConfig@ExecutionModel@@U_GUID@@@Z @ 0x180036B5C (-GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGame.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializePackageFamilyName(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  const struct ExecutionModel::GameConfig *GameConfig; // rdi
  HSTRING v10; // rcx
  int PackageFamilyName; // eax
  struct _GUID v13; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+58h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v16 = v2;
  if ( !*((_QWORD *)this + 33) || !*((_QWORD *)this + 31) )
  {
    if ( *((_QWORD *)this + 36) && *((_QWORD *)this + 37) )
    {
      v13 = (struct _GUID)xmmword_18004F890;
      GameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetGameConfig(
                     *((Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)this + 36),
                     &v13);
      v10 = (HSTRING)*((_QWORD *)this + 21);
      if ( *((_DWORD *)GameConfig + 5) == 2 )
      {
        WindowsDeleteString(v10);
        *((_QWORD *)this + 21) = 0LL;
        PackageFamilyName = GetPackageFamilyName(GameConfig, (HSTRING *)this + 21);
        v7 = PackageFamilyName;
        if ( PackageFamilyName < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1CB,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)PackageFamilyName);
          goto LABEL_18;
        }
      }
      else
      {
        WindowsDeleteString(v10);
        *((_QWORD *)this + 21) = 0LL;
      }
    }
LABEL_22:
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  v3 = 0LL;
  v15 = 0LL;
  v4 = *((_QWORD *)this + 33);
  if ( !v4 )
    goto LABEL_11;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 104LL))(v4, &v15);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1BE,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_10;
  }
  v3 = v15;
  if ( !v15 )
    goto LABEL_11;
  WindowsDeleteString(*((HSTRING *)this + 21));
  *((_QWORD *)this + 21) = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 48LL))(v3, (char *)this + 168);
  v7 = v6;
  if ( v6 >= 0 )
  {
LABEL_10:
    v3 = v15;
LABEL_11:
    if ( v3 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1C0,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v6);
  v8 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_18:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
