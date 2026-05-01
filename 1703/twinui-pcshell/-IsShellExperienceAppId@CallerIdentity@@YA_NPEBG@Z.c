/*
 * XREFs of ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x1801763E0
 * Callers:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1800088B0 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity@@YAJPEBG@Z @ 0x180176CAC (-ShouldAppBeAllowedToPerformPrivilegedOperationBasedOnForeground@ApiPolicyChecker@CallerIdentity.c)
 * Callees:
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

bool __fastcall CallerIdentity::IsShellExperienceAppId(LPCWCH lpString2, const unsigned __int16 *a2)
{
  bool result; // al
  __int64 v4; // rbx
  LPCWCH lpString1[6]; // [rsp+30h] [rbp-48h]

  lpString1[0] = L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App";
  lpString1[1] = L"Microsoft.Cortana_8wekyb3d8bbwe!CortanaUI";
  lpString1[2] = L"Microsoft.Cortana_8wekyb3d8bbwe!CortanaUnitTests";
  lpString1[3] = L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI";
  lpString1[4] = L"5b04b775-356b-4aa0-aaf8-6491ffea5602_6f5w9sgpe6vgt!WP";
  lpString1[5] = L"StartAppVS_xbqbv2ksdy6ng!App";
  result = 0;
  v4 = 0LL;
  do
  {
    if ( (unsigned int)v4 >= 6 )
      break;
    result = CompareStringOrdinal(lpString1[v4], -1, lpString2, -1, 1) == 2;
    v4 = (unsigned int)(v4 + 1);
  }
  while ( !result );
  return result;
}
