/*
 * XREFs of CortanaHelpers::AllowCortanaAboveLock @ 0x1800D3C60
 * Callers:
 *     ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800D5FB4 (-OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collection.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180189E30 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x18018A100 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18018C024 (-ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180034D60 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 */

char CortanaHelpers::AllowCortanaAboveLock()
{
  DWORD v0; // eax
  char v1; // bl
  int v2; // eax
  bool v3; // dl
  int PolicyInt; // eax
  int v5; // edi
  int BOOL; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v0 = `IsPPIEdition'::`2'::s_dwProductType;
  v1 = 0;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v0 = 0;
    `IsPPIEdition'::`2'::s_dwProductType = 0;
  }
  if ( v0 == 119 )
    return 0;
  v2 = SHWindowsPolicy(&POLID_AllowCortanaAboveLock);
  v3 = v2 != 0;
  if ( v2 == -1 )
  {
    PolicyInt = PolicyManager_GetPolicyInt(L"AboveLock", L"AllowCortanaAboveLock", &v9);
    v5 = PolicyInt;
    if ( PolicyInt < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1A,
        (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
        (const char *)(unsigned int)PolicyInt);
    v3 = 0;
    if ( v5 >= 0 )
      v3 = v9 != 0;
  }
  if ( !v3 )
    return 0;
  v9 = 0;
  BOOL = SHRegGetBOOL(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Speech_OneCore\\Preferences",
           L"VoiceActivationEnableAboveLockscreen",
           &v9);
  if ( BOOL >= 0 )
  {
    if ( v9 )
      return 1;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"internal\\shell\\private\\inc\\cortanahelpers.h",
      (const char *)(unsigned int)BOOL);
  }
  return v1;
}
