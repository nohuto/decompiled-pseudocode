/*
 * XREFs of _CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::AddInterface_::_1_::dtor$0 @ 0x1800881BD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLockedList_ATL::CComPtr_IAudioEndpointVolumeCallback__1_0_::AddInterface_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(*(__int64 **)(a2 + 120));
}
