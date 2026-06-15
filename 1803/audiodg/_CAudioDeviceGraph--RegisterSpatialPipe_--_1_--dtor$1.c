/*
 * XREFs of _CAudioDeviceGraph::RegisterSpatialPipe_::_1_::dtor$1 @ 0x1400203D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::RegisterSpatialPipe_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 40);
}
