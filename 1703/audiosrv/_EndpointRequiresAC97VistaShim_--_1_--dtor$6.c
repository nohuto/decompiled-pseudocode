/*
 * XREFs of _EndpointRequiresAC97VistaShim_::_1_::dtor$6 @ 0x1800A045F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointRequiresAC97VistaShim_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
