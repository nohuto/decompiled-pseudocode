/*
 * XREFs of ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x180113B38
 * Callers:
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x18011131C (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x180111530 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180112800 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180034D60 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 */

const unsigned __int16 *PeoplePaneViewManager::s_GetAppId(void)
{
  int v0; // eax
  bool v1; // zf
  const unsigned __int16 *result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_1802BA8BC;
  if ( !dword_1802BA8BC )
  {
    v3 = 0;
    SHRegGetBOOL(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
      L"PrereleaseExperience",
      &v3);
    v0 = 2 - (v3 != 0);
    dword_1802BA8BC = v0;
  }
  v1 = v0 == 1;
  result = L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App";
  if ( !v1 )
    return L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App";
  return result;
}
