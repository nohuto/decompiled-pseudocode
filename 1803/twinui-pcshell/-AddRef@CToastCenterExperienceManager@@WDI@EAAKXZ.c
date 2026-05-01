/*
 * XREFs of ?AddRef@CToastCenterExperienceManager@@WDI@EAAKXZ @ 0x1800A51E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CToastCenterExperienceManager::AddRef(__int64 a1)
{
  return Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::AddRef((Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)(a1 - 56));
}
