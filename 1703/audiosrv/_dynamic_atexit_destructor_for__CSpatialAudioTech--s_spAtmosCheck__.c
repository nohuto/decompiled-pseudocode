/*
 * XREFs of _dynamic_atexit_destructor_for__CSpatialAudioTech::s_spAtmosCheck__ @ 0x18005C940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__CSpatialAudioTech::s_spAtmosCheck__()
{
  return Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((volatile signed __int32 **)&CSpatialAudioTech::s_spAtmosCheck);
}
