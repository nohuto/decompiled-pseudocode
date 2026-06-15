/*
 * XREFs of ?StreamRequiresPreStartRegistration@CWindowsPolicyManager@@UEAA_NPEAUIAudioStreamInfo@@@Z @ 0x180006420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CWindowsPolicyManager::StreamRequiresPreStartRegistration(
        CWindowsPolicyManager *this,
        struct IAudioStreamInfo *a2)
{
  return IsAlwaysAudibleStream(a2);
}
