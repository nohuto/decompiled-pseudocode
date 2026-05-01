/*
 * XREFs of ?GetKglDefaultsAsJson@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180036E34
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800295A8 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180037FD0 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     ?CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGameConfig@ExecutionModel@@KPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18003A580 (-CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGam.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetKglDefaultsAsJson(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        HSTRING *a2)
{
  __int64 FirstGameConfig; // rbp
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults *v5; // rsi
  int v6; // edi
  unsigned int v7; // r8d
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults *v12[2]; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  WindowsDeleteString(*a2);
  *a2 = 0LL;
  FirstGameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                      this,
                      0LL);
  *(_OWORD *)v12 = 0LL;
  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
  v5 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance;
  if ( Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance )
  {
    v8 = qword_18005BE90;
    if ( qword_18005BE90 )
      _InterlockedIncrement((volatile signed __int32 *)(qword_18005BE90 + 8));
    v12[1] = (Windows::Gaming::Preview::GamesEnumeration::KglDefaults *)v8;
    LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
    v6 = 0;
  }
  else
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)0x8000FFFFLL);
    LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
    v8 = 0LL;
    v5 = 0LL;
  }
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD3,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v6);
  if ( v5
    && (v9 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::CheckKGLForGameFromGameConfig(
               v5,
               *(struct ExecutionModel::GameConfig **)(FirstGameConfig + 16),
               v7,
               (struct Microsoft::WRL::Wrappers::HString *)a2),
        v10 = v9,
        v9 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xD6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v9);
  }
  else
  {
    v10 = 0;
  }
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(Windows::Gaming::Preview::GamesEnumeration::KglDefaults *))v12[1])(v12[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12[1] + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration::KglDefaults *))(*(_QWORD *)v12[1] + 8LL))(v12[1]);
    }
  }
  return v10;
}
