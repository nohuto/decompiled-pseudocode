/*
 * XREFs of ?get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListEntryLaunchableState@2345@@Z @ 0x18002A800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014858 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180037FD0 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchableState(
        struct _RTL_CRITICAL_SECTION *this,
        enum Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rdx
  __int128 v6; // xmm0
  __int64 DebugInfo; // rcx
  int StringPropertyFromGameConfigStore; // eax
  unsigned int v9; // ebx
  HSTRING v11; // rcx
  BOOL IsStringEmpty; // eax
  int v13[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)a2 = 0;
  if ( *(_QWORD *)&this[6].LockCount )
  {
    *(_DWORD *)a2 = 3;
    return 0LL;
  }
  if ( this[7].OwningThread )
  {
    *(_DWORD *)a2 = 2;
    return 0LL;
  }
  v4 = this + 4;
  EnterCriticalSection(this + 4);
  if ( !this[6].SpinCount || !this[7].DebugInfo )
  {
LABEL_15:
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  LOBYTE(v5) = 1;
  v6 = *(_OWORD *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                    this[6].SpinCount,
                    v5);
  string = 0LL;
  *(_OWORD *)v13 = v6;
  WindowsDeleteString(0LL);
  DebugInfo = (__int64)this[7].DebugInfo;
  string = 0LL;
  StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(DebugInfo, (__int128 *)v13, 23LL, &string);
  v9 = StringPropertyFromGameConfigStore;
  if ( StringPropertyFromGameConfigStore >= 0 )
  {
    v11 = string;
    if ( string )
    {
      IsStringEmpty = WindowsIsStringEmpty(string);
      v11 = string;
      if ( !IsStringEmpty )
        *(_DWORD *)a2 = 1;
    }
    WindowsDeleteString(v11);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x582,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)StringPropertyFromGameConfigStore);
  WindowsDeleteString(string);
  string = 0LL;
  if ( v4 )
    LeaveCriticalSection(v4);
  return v9;
}
