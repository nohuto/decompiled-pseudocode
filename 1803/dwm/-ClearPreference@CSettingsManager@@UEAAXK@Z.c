/*
 * XREFs of ?ClearPreference@CSettingsManager@@UEAAXK@Z @ 0x1400017A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSettingsManager::ClearPreference(CSettingsManager *this, int a2)
{
  *((_DWORD *)this + 16) &= ~a2;
}
