/*
 * XREFs of _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::dtor$1 @ 0x180068F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::dtor_1(__int64 a1, const unsigned __int16 *a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse((CBaseStreamGroupProxy *)(a2 + 56), a2);
}
