/*
 * XREFs of _CPipeInstance::EngageSpatialAudioStreamProcessorAPO_::_1_::dtor$1 @ 0x14002027E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::EngageSpatialAudioStreamProcessorAPO_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 40);
}
