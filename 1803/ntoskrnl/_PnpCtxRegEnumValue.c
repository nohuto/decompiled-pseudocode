/*
 * XREFs of _PnpCtxRegEnumValue @ 0x1405D7F64
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140179180 (PipUpdateDeviceProducts.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1405D7CA0 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1405DB02C (_PnpGetGenericStorePropertyKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14073C89C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14073D4AC (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1407E9ED0 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1407EA360 (_CmGetDevicesInBaseContainerList.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1407ED6B0 (_PnpGetGenericStorePropertyLocales.c)
 *     DrvDbDeleteObjectSubKey @ 0x1407F1384 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407F2A34 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x1408B4E90 (PipResetDevices.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x1405E2FEC (_RegRtlEnumValue.c)
 */

__int64 __fastcall PnpCtxRegEnumValue(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  return RegRtlEnumValue(a2, a3, a4, a5, a6, a7, a8);
}
