/*
 * XREFs of ?AddRef@LaunchManager@ContentManagement@@WDA@EAAKXZ @ 0x180024370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::LaunchManager::AddRef(__int64 a1)
{
  return ContentManagement::MobilityExperienceSettings::AddRef((ContentManagement::MobilityExperienceSettings *)(a1 - 48));
}
