/*
 * XREFs of AudioServerGetEndpointVpoContext$dtor$0 @ 0x1800A2B05
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioServerGetEndpointVpoContext_dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 40));
}
