/*
 * XREFs of _CPipeInstance::EngageSpatialAudioStreamProcessorAPO_::_1_::dtor$2 @ 0x140021445
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::EngageSpatialAudioStreamProcessorAPO_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(a2 + 80);
}
