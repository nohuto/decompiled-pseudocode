/*
 * XREFs of ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x1800EA688
 * Callers:
 *     _lambda_f748ab983864a1d9251a0884a7c17331_::operator() @ 0x1800E8390 (_lambda_f748ab983864a1d9251a0884a7c17331_--operator().c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1800E8600 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800E9870 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180033754 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 */

const unsigned __int16 *PeoplePaneViewManager::s_GetAppId(void)
{
  int v0; // eax
  bool v1; // zf
  const unsigned __int16 *result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_180244BA4;
  if ( !dword_180244BA4 )
  {
    v3 = 0;
    SHRegGetBOOL(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
      L"PrereleaseExperience",
      &v3);
    v0 = 2 - (v3 != 0);
    dword_180244BA4 = v0;
  }
  v1 = v0 == 1;
  result = L"PeopleExperienceHostVS_1sybxpkk05vjp!App";
  if ( !v1 )
    return L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App";
  return result;
}
