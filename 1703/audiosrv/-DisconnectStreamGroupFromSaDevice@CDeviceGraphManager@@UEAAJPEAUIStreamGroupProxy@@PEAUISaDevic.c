/*
 * XREFs of ?DisconnectStreamGroupFromSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@@Z @ 0x1800A5B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceGraphManager::DisconnectStreamGroupFromSaDevice(
        CDeviceGraphManager *this,
        struct IStreamGroupProxy *a2,
        struct ISaDeviceProxy *a3)
{
  return (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 200LL))(a2);
}
