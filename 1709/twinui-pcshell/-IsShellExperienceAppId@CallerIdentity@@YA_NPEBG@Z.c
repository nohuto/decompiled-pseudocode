/*
 * XREFs of ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x1801C1EA8
 * Callers:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x18000891C (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x1800E82D8 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1801C1F4C (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x1801C27E4 (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 * Callees:
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

bool __fastcall CallerIdentity::IsShellExperienceAppId(LPCWCH lpString2, const unsigned __int16 *a2)
{
  bool v2; // dl
  unsigned int v4; // ebx
  int v5; // eax
  LPCWCH lpString1[5]; // [rsp+30h] [rbp-38h]

  v2 = 0;
  lpString1[0] = L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App";
  v4 = 0;
  lpString1[1] = L"5b04b775-356b-4aa0-aaf8-6491ffea5602_6f5w9sgpe6vgt!WP";
  lpString1[2] = L"StartAppVS_xbqbv2ksdy6ng!App";
  lpString1[3] = L"Microsoft.Windows.Cortana_cw5n1h2txyewy!ppleae38af2e007f4358a809ac99a64a67c1";
  lpString1[4] = L"Microsoft.Cortana_8wekyb3d8bbwe!ppleae38af2e007f4358a809ac99a64a67c1";
  do
  {
    if ( v4 >= 5 )
      break;
    v5 = CompareStringOrdinal(lpString1[v4], -1, lpString2, -1, 1);
    v2 = v5 == 2;
    ++v4;
  }
  while ( v5 != 2 );
  return v2;
}
