/*
 * XREFs of ?SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180014EF4
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x180028BE8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x180037E04 (-SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Wind.c)
 *     ?_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4GameProperty_t@ExecutionModel@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180038114 (-_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Win.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetStringPropertyToGameConfigStore(__int64 *a1, __int128 *a2, unsigned int a3, HSTRING *a4)
{
  HSTRING v6; // rcx
  UINT32 v7; // edx
  PCWSTR v8; // r10
  PCWSTR StringRawBuffer; // rax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  UINT32 v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = *a4;
  v7 = 0;
  v8 = 0LL;
  v17 = 0;
  if ( v6 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v6, &v17);
    v7 = v17;
    v8 = StringRawBuffer;
  }
  v11 = *a1;
  v15 = *a2;
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, PCWSTR, UINT32))(v11 + 72))(a1, &v15, a3, v8, 2 * v7);
  v13 = v12;
  if ( v12 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC0,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)(unsigned int)v12);
  return v13;
}
