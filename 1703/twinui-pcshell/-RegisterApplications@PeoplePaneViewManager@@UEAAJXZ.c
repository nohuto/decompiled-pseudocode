/*
 * XREFs of ?RegisterApplications@PeoplePaneViewManager@@UEAAJXZ @ 0x1800EAC50
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1800E7FB0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z @ 0x1800EACE0 (-RegisterApplicationForContactPanel@PeoplePaneViewManager@@AEAAJPEAG_N@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::RegisterApplications(PeoplePaneViewManager *this)
{
  int v1; // eax
  PeoplePaneViewManager *v2; // rcx
  int v3; // eax
  PeoplePaneViewManager *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = PeoplePaneViewManager::RegisterApplicationForContactPanel(
         this,
         L"Microsoft.People_8wekyb3d8bbwe!x4c7a3b7dy2188y46d4ya362y19ac5a5805e5x",
         0);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x37E,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v1);
  v3 = PeoplePaneViewManager::RegisterApplicationForContactPanel(v2, L"Microsoft.SkypeApp_kzf8qxf38zg5c!App", 0);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x37F,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v3);
  v5 = PeoplePaneViewManager::RegisterApplicationForContactPanel(
         v4,
         L"microsoft.windowscommunicationsapps_8wekyb3d8bbwe!microsoft.windowslive.mail",
         1);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x380,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v5);
  return 0LL;
}
