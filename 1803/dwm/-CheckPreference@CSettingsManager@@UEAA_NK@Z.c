/*
 * XREFs of ?CheckPreference@CSettingsManager@@UEAA_NK@Z @ 0x140001780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSettingsManager::CheckPreference(CSettingsManager *this, int a2)
{
  return (a2 & *((_DWORD *)this + 16)) != 0;
}
