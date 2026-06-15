/*
 * XREFs of AudioServerGetEndpointVpoContext$dtor$1 @ 0x1800C44D5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioServerGetEndpointVpoContext_dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>::~com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
