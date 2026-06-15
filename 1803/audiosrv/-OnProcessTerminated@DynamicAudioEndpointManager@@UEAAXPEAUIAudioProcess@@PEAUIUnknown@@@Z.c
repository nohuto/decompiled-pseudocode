/*
 * XREFs of ?OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z @ 0x1800FC8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DynamicAudioEndpointManager::OnProcessTerminated(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        struct IUnknown *a3)
{
  DynamicAudioEndpointManager::RemoveRule(this, a2, a3, 1);
}
