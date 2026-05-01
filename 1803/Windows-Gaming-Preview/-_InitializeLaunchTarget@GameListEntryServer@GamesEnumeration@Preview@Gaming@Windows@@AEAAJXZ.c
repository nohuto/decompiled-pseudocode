/*
 * XREFs of ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800285DC
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x180027468 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180029790 (-ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010E8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014F90 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJPEBGPEAPEAUIStorageFile@Storage@5@@Z @ 0x18002A21C (-_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJP.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180038E10 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeLaunchTarget(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        __int64 a2)
{
  struct Windows::Storage::IStorageFile **v3; // rdi
  __int64 v4; // rcx
  __int128 v5; // xmm0
  int StringPropertyFromGameConfigStore; // eax
  unsigned int v7; // ebx
  HSTRING v9; // rcx
  const unsigned __int16 *StringRawBuffer; // rax
  int StorageFileForFilePath; // eax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING string; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct Windows::Storage::IStorageFile **)((char *)this + 304);
  v4 = *((_QWORD *)this + 38);
  if ( v4 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( *((_QWORD *)this + 35) && *((_QWORD *)this + 36) )
  {
    LOBYTE(a2) = 1;
    v5 = *(_OWORD *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                      *((_QWORD *)this + 35),
                      a2);
    string = 0LL;
    v12 = v5;
    WindowsDeleteString(0LL);
    string = 0LL;
    StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(
                                          *((_QWORD *)this + 36),
                                          &v12,
                                          25LL,
                                          &string);
    v7 = StringPropertyFromGameConfigStore;
    if ( StringPropertyFromGameConfigStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x201,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)StringPropertyFromGameConfigStore);
      WindowsDeleteString(string);
      return v7;
    }
    v9 = string;
    if ( string )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      StorageFileForFilePath = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath(
                                 StringRawBuffer,
                                 v3);
      if ( StorageFileForFilePath < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x206,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)StorageFileForFilePath);
      v9 = string;
    }
    WindowsDeleteString(v9);
  }
  return 0LL;
}
