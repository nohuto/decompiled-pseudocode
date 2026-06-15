/*
 * XREFs of ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800CD290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceGraphObjectsStore::GetSharedSaDevices(__int64 a1, _QWORD *a2)
{
  return CDeviceGraphObjectsStore::GetSaDevices(a1, a2, 0);
}
