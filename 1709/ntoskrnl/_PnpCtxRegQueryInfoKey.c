/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x1405847D8
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140145D10 (PipUpdateDeviceProducts.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1404483F0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1404490D4 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x14058445C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140781540 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1407819C0 (_CmRemoveDeviceFromContainerWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407865A0 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140786AC8 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x14057EBC4 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(
        __int64 a1,
        void *a2,
        _DWORD *a3,
        unsigned int *a4,
        _DWORD *a5,
        unsigned int *a6)
{
  return RegRtlQueryInfoKey(a2, a3, a4, a5, a6, 0LL);
}
