/*
 * XREFs of ?SetPreference@CSettingsManager@@UEAAXK@Z @ 0x1400017B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSettingsManager::SetPreference(CSettingsManager *this, int a2)
{
  *((_DWORD *)this + 16) |= a2;
}
