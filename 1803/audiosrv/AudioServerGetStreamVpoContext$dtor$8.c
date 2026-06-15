/*
 * XREFs of AudioServerGetStreamVpoContext$dtor$8 @ 0x1800C5362
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioServerGetStreamVpoContext_dtor_8(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>::~com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>((__int64 *)(a2 + 80));
}
