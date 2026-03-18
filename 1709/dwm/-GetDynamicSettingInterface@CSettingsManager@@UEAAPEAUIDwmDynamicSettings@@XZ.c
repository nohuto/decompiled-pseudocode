/*
 * XREFs of ?GetDynamicSettingInterface@CSettingsManager@@UEAAPEAUIDwmDynamicSettings@@XZ @ 0x140001750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IDwmDynamicSettings *__fastcall CSettingsManager::GetDynamicSettingInterface(CSettingsManager *this)
{
  return (CSettingsManager *)((char *)this + 56);
}
