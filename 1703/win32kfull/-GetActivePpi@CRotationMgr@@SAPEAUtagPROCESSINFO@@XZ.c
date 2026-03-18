/*
 * XREFs of ?GetActivePpi@CRotationMgr@@SAPEAUtagPROCESSINFO@@XZ @ 0x1C0007B60
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1C0007B00 (NtUserSetDisplayAutoRotationPreferences.c)
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C00BA43C (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z @ 0x1C01A9084 (-IsOrientationWithinPreferences@CLegacyRotationMgr@@AEAAHK@Z.c)
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9F10 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_M.c)
 * Callees:
 *     <none>
 */

struct tagPROCESSINFO *CRotationMgr::GetActivePpi(void)
{
  struct tagPROCESSINFO *result; // rax

  result = (struct tagPROCESSINFO *)grpdeskRitInput;
  if ( grpdeskRitInput )
    return *(struct tagPROCESSINFO **)(grpdeskRitInput + 256LL);
  return result;
}
