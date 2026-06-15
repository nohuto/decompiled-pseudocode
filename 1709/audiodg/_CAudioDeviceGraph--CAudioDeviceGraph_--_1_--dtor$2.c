/*
 * XREFs of _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$2 @ 0x140021229
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(*(_QWORD *)(a2 + 80) + 120LL);
}
